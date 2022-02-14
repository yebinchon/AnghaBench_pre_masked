
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dummy; } ;
struct ibmvmc_hmc {int lock; int * queue_outbound_msgs; struct ibmvmc_buffer* buffer; scalar_t__ queue_tail; scalar_t__ queue_head; int state; scalar_t__ index; struct crq_server_adapter* adapter; struct ibmvmc_file_session* file_session; } ;
struct ibmvmc_file_session {scalar_t__ valid; } ;
struct ibmvmc_buffer {int dma_addr_local; int real_addr_local; scalar_t__ valid; } ;
struct crq_server_adapter {int dev; } ;
struct TYPE_2__ {int max_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 int FUNC_1 (struct vio_dev*,int ,int ,int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ibmvmc_buffer*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct vio_dev* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ibmvmc_hmc *VAR_6, bool VAR_7)
{
 struct ibmvmc_buffer *VAR_8;
 struct crq_server_adapter *VAR_9;
 struct vio_dev *VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;

 if (!VAR_6 || !VAR_6->adapter)
  return -VAR_0;

 if (VAR_7) {
  if (VAR_6->file_session) {
   struct ibmvmc_file_session *VAR_13 = VAR_6->file_session;

   VAR_13->valid = 0;
   FUNC_6(&VAR_5);
  }
 }

 VAR_9 = VAR_6->adapter;
 VAR_10 = FUNC_5(VAR_9->dev);

 FUNC_3(&VAR_6->lock, VAR_12);
 VAR_6->index = 0;
 VAR_6->state = VAR_2;
 VAR_6->queue_head = 0;
 VAR_6->queue_tail = 0;
 VAR_8 = VAR_6->buffer;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (VAR_8[VAR_11].valid) {
   FUNC_1(VAR_10,
     VAR_3.max_mtu,
     VAR_8[VAR_11].real_addr_local,
     VAR_8[VAR_11].dma_addr_local);
   FUNC_0(VAR_9->dev, "Forgot buffer id 0x%lx\n", VAR_11);
  }
  FUNC_2(&VAR_8[VAR_11], 0, sizeof(struct ibmvmc_buffer));

  VAR_6->queue_outbound_msgs[VAR_11] = VAR_1;
 }

 FUNC_4(&VAR_6->lock, VAR_12);

 return 0;
}
