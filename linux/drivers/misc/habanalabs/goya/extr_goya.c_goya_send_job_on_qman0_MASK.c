
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct packet_msg_prot {int addr; void* value; void* ctl; } ;
struct hl_device {TYPE_1__* asic_funcs; int dev; scalar_t__ pldm; } ;
struct hl_cs_job {int job_cb_size; struct hl_cb* patched_cb; } ;
struct hl_cb {int kernel_address; int bus_address; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int* (* asic_dma_pool_zalloc ) (struct hl_device*,int,int ,int *) ;int (* asic_dma_pool_free ) (struct hl_device*,void*,int ) ;int (* is_device_idle ) (struct hl_device*,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct hl_device*,int) ;
 int FUNC_5 (struct hl_device*,int ) ;
 int FUNC_6 (struct hl_device*,int ,int,int ) ;
 int FUNC_7 (struct hl_device*,int*,int,int,int,int,int) ;
 int FUNC_8 (struct hl_device*,int *,int *) ;
 int* FUNC_9 (struct hl_device*,int,int ,int *) ;
 int FUNC_10 (struct hl_device*,void*,int ) ;

__attribute__((used)) static int FUNC_11(struct hl_device *VAR_12, struct hl_cs_job *VAR_13)
{
 struct packet_msg_prot *VAR_14;
 u32 *VAR_15;
 dma_addr_t VAR_16;
 struct hl_cb *VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20;

 if (VAR_12->pldm)
  VAR_19 = VAR_7;
 else
  VAR_19 = VAR_10;

 if (!VAR_12->asic_funcs->is_device_idle(VAR_12, ((void*)0), ((void*)0))) {
  FUNC_3(VAR_12->dev,
   "Can't send driver job on QMAN0 because the device is not idle\n");
  return -VAR_0;
 }

 VAR_15 = VAR_12->asic_funcs->asic_dma_pool_zalloc(VAR_12, 4, VAR_3,
       &VAR_16);
 if (!VAR_15) {
  FUNC_2(VAR_12->dev,
   "Failed to allocate fence memory for QMAN0\n");
  return -VAR_1;
 }

 FUNC_4(VAR_12, 1);

 VAR_17 = VAR_13->patched_cb;

 VAR_14 = (struct packet_msg_prot *) (uintptr_t) (VAR_17->kernel_address +
   VAR_13->job_cb_size - sizeof(struct packet_msg_prot));

 VAR_18 = (VAR_11 << VAR_6) |
   (1 << VAR_4) |
   (1 << VAR_5);
 VAR_14->ctl = FUNC_0(VAR_18);
 VAR_14->value = FUNC_0(VAR_8);
 VAR_14->addr = FUNC_1(VAR_16);

 VAR_20 = FUNC_6(VAR_12, VAR_9,
     VAR_13->job_cb_size, VAR_17->bus_address);
 if (VAR_20) {
  FUNC_2(VAR_12->dev, "Failed to send CB on QMAN0, %d\n", VAR_20);
  goto free_fence_ptr;
 }

 VAR_20 = FUNC_7(VAR_12, VAR_15, VAR_18,
    (VAR_18 == VAR_8), 1000,
    VAR_19, 1);

 FUNC_5(VAR_12, VAR_9);

 if (VAR_20 == -VAR_2) {
  FUNC_2(VAR_12->dev, "QMAN0 Job timeout (0x%x)\n", VAR_18);
  goto free_fence_ptr;
 }

free_fence_ptr:
 VAR_12->asic_funcs->asic_dma_pool_free(VAR_12, (void *) VAR_15,
     VAR_16);

 FUNC_4(VAR_12, 0);

 return VAR_20;
}
