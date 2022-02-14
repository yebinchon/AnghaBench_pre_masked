
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct ibmvmc_hmc {scalar_t__ state; size_t queue_head; size_t* queue_outbound_msgs; size_t queue_tail; int lock; struct ibmvmc_buffer* buffer; } ;
struct TYPE_5__ {int msg_len; } ;
struct TYPE_4__ {int buffer_id; } ;
struct ibmvmc_crq_msg {size_t hmc_session; size_t hmc_index; TYPE_2__ var3; TYPE_1__ var2; } ;
struct ibmvmc_buffer {scalar_t__ valid; scalar_t__ owner; unsigned long msg_len; scalar_t__ free; int dma_addr_local; int dma_addr_remote; } ;
struct crq_server_adapter {int dev; int liobn; int riobn; } ;
struct TYPE_6__ {size_t max_hmc_index; size_t max_buffer_pool_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int,...) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (unsigned long,int ,int ,int ,int ) ;
 struct ibmvmc_hmc* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct crq_server_adapter*,int ,size_t,size_t,size_t) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct crq_server_adapter *VAR_8,
      struct ibmvmc_crq_msg *VAR_9)
{
 struct ibmvmc_buffer *VAR_10;
 struct ibmvmc_hmc *VAR_11;
 unsigned long VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 u16 VAR_15;
 unsigned long VAR_16;
 int VAR_17 = 0;

 if (!VAR_9)
  return -1;


 FUNC_3(VAR_8->dev, "Recv_msg: msg from HV 0x%016llx 0x%016llx\n",
  FUNC_2(*((unsigned long *)VAR_9)),
  FUNC_2(*(((unsigned long *)VAR_9) + 1)));

 VAR_14 = VAR_9->hmc_session;
 VAR_13 = VAR_9->hmc_index;
 VAR_15 = FUNC_0(VAR_9->var2.buffer_id);
 VAR_12 = FUNC_1(VAR_9->var3.msg_len);

 if (VAR_13 > VAR_5.max_hmc_index) {
  FUNC_4(VAR_8->dev, "Recv_msg: invalid hmc_index = 0x%x\n",
   VAR_13);
  FUNC_6(VAR_8, VAR_2,
         VAR_14, VAR_13, VAR_15);
  return -1;
 }

 if (VAR_15 >= VAR_5.max_buffer_pool_size) {
  FUNC_4(VAR_8->dev, "Recv_msg: invalid buffer_id = 0x%x\n",
   VAR_15);
  FUNC_6(VAR_8, VAR_1,
         VAR_14, VAR_13, VAR_15);
  return -1;
 }

 VAR_11 = &VAR_3[VAR_13];
 FUNC_7(&VAR_11->lock, VAR_16);

 if (VAR_11->state == VAR_4) {
  FUNC_4(VAR_8->dev, "Recv_msg: invalid hmc state = 0x%x\n",
   VAR_11->state);

  FUNC_8(&VAR_11->lock, VAR_16);
  return -1;
 }

 VAR_10 = &VAR_11->buffer[VAR_15];

 if (VAR_10->valid == 0 || VAR_10->owner == VAR_0) {
  FUNC_4(VAR_8->dev, "Recv_msg: not valid, or not HV.  0x%x 0x%x\n",
   VAR_10->valid, VAR_10->owner);
  FUNC_8(&VAR_11->lock, VAR_16);
  return -1;
 }


 VAR_17 = FUNC_5(VAR_12,
    VAR_8->riobn,
    VAR_10->dma_addr_remote,
    VAR_8->liobn,
    VAR_10->dma_addr_local);

 FUNC_3(VAR_8->dev, "Recv_msg: msg_len = 0x%x, buffer_id = 0x%x, queue_head = 0x%x, hmc_idx = 0x%x\n",
  (unsigned int)VAR_12, (unsigned int)VAR_15,
  (unsigned int)VAR_11->queue_head, (unsigned int)VAR_13);
 VAR_10->msg_len = VAR_12;
 VAR_10->free = 0;
 VAR_10->owner = VAR_0;

 if (VAR_17) {
  FUNC_4(VAR_8->dev, "Failure in recv_msg: h_copy_rdma = 0x%x\n",
   VAR_17);
  FUNC_8(&VAR_11->lock, VAR_16);
  return -1;
 }


 VAR_11->queue_outbound_msgs[VAR_11->queue_head] = VAR_15;
 VAR_11->queue_head++;
 if (VAR_11->queue_head == VAR_6)
  VAR_11->queue_head = 0;

 if (VAR_11->queue_head == VAR_11->queue_tail)
  FUNC_4(VAR_8->dev, "outbound buffer queue wrapped.\n");

 FUNC_8(&VAR_11->lock, VAR_16);

 FUNC_9(&VAR_7);

 return 0;
}
