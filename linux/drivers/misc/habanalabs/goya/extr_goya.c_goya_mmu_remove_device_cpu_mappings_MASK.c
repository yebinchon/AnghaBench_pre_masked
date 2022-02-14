
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct asic_fixed_properties {scalar_t__ dram_base_address; } ;
struct hl_device {int cpu_accessible_dma_address; int dev; int kernel_ctx; struct goya_device* asic_specific; struct asic_fixed_properties asic_prop; } ;
struct goya_device {int hw_cap_initialized; int device_cpu_mmu_mappings_done; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_4(struct hl_device *VAR_8)
{
 struct asic_fixed_properties *VAR_9 = &VAR_8->asic_prop;
 struct goya_device *VAR_10 = VAR_8->asic_specific;
 u32 VAR_11, VAR_12;

 if (!(VAR_10->hw_cap_initialized & VAR_1))
  return;

 if (!VAR_10->device_cpu_mmu_mappings_done)
  return;

 FUNC_0(VAR_6, 0);
 FUNC_0(VAR_7, 0);

 if (!(VAR_8->cpu_accessible_dma_address & (VAR_2 - 1))) {
  if (FUNC_3(VAR_8->kernel_ctx, VAR_5,
    VAR_2))
   FUNC_1(VAR_8->dev,
    "Failed to unmap CPU accessible memory\n");
 } else {
  for (VAR_12 = 0 ; VAR_12 < VAR_4 ; VAR_12 += VAR_3)
   if (FUNC_3(VAR_8->kernel_ctx,
     VAR_5 + VAR_12,
     VAR_3))
    FUNC_2(VAR_8->dev,
     "failed to unmap address 0x%llx\n",
     VAR_5 + VAR_12);
 }

 for (VAR_11 = 0 ; VAR_11 < VAR_0 ; VAR_11 += VAR_2)
  if (FUNC_3(VAR_8->kernel_ctx,
    VAR_9->dram_base_address + VAR_11, VAR_2))
   FUNC_2(VAR_8->dev,
     "Failed to unmap address 0x%llx\n",
     VAR_9->dram_base_address + VAR_11);

 VAR_10->device_cpu_mmu_mappings_done = 0;
}
