
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ibmvmc_crq_msg {size_t hmc_session; size_t hmc_index; } ;
struct ibmvmc_buffer {int dma_addr_local; int real_addr_local; scalar_t__ valid; int id; } ;
struct crq_server_adapter {int dev; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {size_t max_hmc_index; int max_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;
 struct ibmvmc_buffer* FUNC_4 (struct crq_server_adapter*,size_t) ;
 int FUNC_5 (struct crq_server_adapter*,int ,size_t,size_t,int ) ;
 int FUNC_6 (struct ibmvmc_buffer*,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct crq_server_adapter *VAR_6,
        struct ibmvmc_crq_msg *VAR_7)
{
 struct ibmvmc_buffer *VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 u16 VAR_11 = 0;
 unsigned long VAR_12;
 int VAR_13 = 0;

 if (!VAR_7)
  return -1;

 VAR_10 = VAR_7->hmc_session;
 VAR_9 = VAR_7->hmc_index;

 if (VAR_9 > VAR_5.max_hmc_index) {
  FUNC_2(VAR_6->dev, "rem_buffer: invalid hmc_index = 0x%x\n",
    VAR_9);
  FUNC_5(VAR_6, VAR_1,
         VAR_10, VAR_9, VAR_11);
  return -1;
 }

 FUNC_7(&VAR_4[VAR_9].lock, VAR_12);
 VAR_8 = FUNC_4(VAR_6, VAR_9);
 if (!VAR_8) {
  FUNC_1(VAR_6->dev, "rem_buffer: no buffer to remove\n");
  FUNC_8(&VAR_4[VAR_9].lock, VAR_12);
  FUNC_5(VAR_6, VAR_2,
         VAR_10, VAR_9,
         VAR_0);
  return -1;
 }

 VAR_11 = VAR_8->id;

 if (VAR_8->valid)
  FUNC_3(FUNC_9(VAR_6->dev),
    VAR_5.max_mtu,
    VAR_8->real_addr_local,
    VAR_8->dma_addr_local);

 FUNC_6(VAR_8, 0, sizeof(struct ibmvmc_buffer));
 FUNC_8(&VAR_4[VAR_9].lock, VAR_12);

 FUNC_0(VAR_6->dev, "rem_buffer: removed buffer 0x%x.\n", VAR_11);
 FUNC_5(VAR_6, VAR_3, VAR_10,
        VAR_9, VAR_11);

 return VAR_13;
}
