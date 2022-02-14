
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibmvmc_hmc {int index; int session; int state; struct crq_server_adapter* adapter; } ;
struct TYPE_6__ {scalar_t__ rsvd; } ;
struct TYPE_5__ {int buffer_id; } ;
struct TYPE_4__ {scalar_t__ rsvd; } ;
struct ibmvmc_crq_msg {int valid; TYPE_3__ var3; scalar_t__ rsvd; TYPE_2__ var2; int hmc_index; int hmc_session; TYPE_1__ var1; scalar_t__ status; int type; } ;
struct ibmvmc_buffer {int id; scalar_t__ dma_addr_remote; scalar_t__ dma_addr_local; scalar_t__ size; } ;
struct crq_server_adapter {int dev; scalar_t__ riobn; scalar_t__ liobn; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (struct crq_server_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ibmvmc_buffer *VAR_3,
       struct ibmvmc_hmc *VAR_4)
{
 struct ibmvmc_crq_msg VAR_5;
 struct crq_server_adapter *VAR_6;
 __be64 *VAR_7 = (__be64 *)&VAR_5;
 int VAR_8 = 0;

 if (!VAR_4 || !VAR_4->adapter)
  return -VAR_0;

 VAR_6 = VAR_4->adapter;

 FUNC_2(VAR_6->dev, "send_open: 0x%lx 0x%lx 0x%lx 0x%lx 0x%lx\n",
  (unsigned long)VAR_3->size, (unsigned long)VAR_6->liobn,
  (unsigned long)VAR_3->dma_addr_local,
  (unsigned long)VAR_6->riobn,
  (unsigned long)VAR_3->dma_addr_remote);

 VAR_8 = FUNC_4(VAR_3->size,
    VAR_6->liobn,
    VAR_3->dma_addr_local,
    VAR_6->riobn,
    VAR_3->dma_addr_remote);
 if (VAR_8) {
  FUNC_3(VAR_6->dev, "Error: In send_open, h_copy_rdma rc 0x%x\n",
   VAR_8);
  return -VAR_0;
 }

 VAR_4->state = VAR_2;

 VAR_5.valid = 0x80;
 VAR_5.type = VAR_1;
 VAR_5.status = 0;
 VAR_5.var1.rsvd = 0;
 VAR_5.hmc_session = VAR_4->session;
 VAR_5.hmc_index = VAR_4->index;
 VAR_5.var2.buffer_id = FUNC_1(VAR_3->id);
 VAR_5.rsvd = 0;
 VAR_5.var3.rsvd = 0;

 FUNC_5(VAR_6, FUNC_0(VAR_7[0]),
   FUNC_0(VAR_7[1]));

 return VAR_8;
}
