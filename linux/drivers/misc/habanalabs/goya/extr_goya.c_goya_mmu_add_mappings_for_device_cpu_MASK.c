
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asic_fixed_properties {scalar_t__ dram_base_address; } ;
struct hl_device {int cpu_accessible_dma_address; int dev; int kernel_ctx; struct goya_device* asic_specific; struct asic_fixed_properties asic_prop; } ;
struct goya_device {int hw_cap_initialized; int device_cpu_mmu_mappings_done; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (struct hl_device*,int ,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_7(struct hl_device *VAR_11)
{
 struct asic_fixed_properties *VAR_12 = &VAR_11->asic_prop;
 struct goya_device *VAR_13 = VAR_11->asic_specific;
 s64 VAR_14, VAR_15;
 int VAR_16;

 if (!(VAR_13->hw_cap_initialized & VAR_2))
  return 0;

 for (VAR_14 = 0 ; VAR_14 < VAR_0 ; VAR_14 += VAR_3) {
  VAR_16 = FUNC_5(VAR_11->kernel_ctx, VAR_12->dram_base_address + VAR_14,
    VAR_12->dram_base_address + VAR_14, VAR_3);
  if (VAR_16) {
   FUNC_2(VAR_11->dev, "Map failed for address 0x%llx\n",
    VAR_12->dram_base_address + VAR_14);
   goto unmap;
  }
 }

 if (!(VAR_11->cpu_accessible_dma_address & (VAR_3 - 1))) {
  VAR_16 = FUNC_5(VAR_11->kernel_ctx, VAR_6,
   VAR_11->cpu_accessible_dma_address, VAR_3);

  if (VAR_16) {
   FUNC_2(VAR_11->dev,
    "Map failed for CPU accessible memory\n");
   VAR_14 -= VAR_3;
   goto unmap;
  }
 } else {
  for (VAR_15 = 0 ; VAR_15 < VAR_5 ; VAR_15 += VAR_4) {
   VAR_16 = FUNC_5(VAR_11->kernel_ctx,
    VAR_6 + VAR_15,
    VAR_11->cpu_accessible_dma_address + VAR_15,
    VAR_4);
   if (VAR_16) {
    FUNC_2(VAR_11->dev,
     "Map failed for CPU accessible memory\n");
    VAR_15 -= VAR_4;
    goto unmap_cpu;
   }
  }
 }

 FUNC_4(VAR_11, VAR_7, VAR_1);
 FUNC_4(VAR_11, VAR_9, VAR_1);
 FUNC_1(VAR_8, 0x7FF);
 FUNC_1(VAR_10, 0x7FF);


 FUNC_0(VAR_10);

 VAR_13->device_cpu_mmu_mappings_done = 1;

 return 0;

unmap_cpu:
 for (; VAR_15 >= 0 ; VAR_15 -= VAR_4)
  if (FUNC_6(VAR_11->kernel_ctx,
    VAR_6 + VAR_15,
    VAR_4))
   FUNC_3(VAR_11->dev,
    "failed to unmap address 0x%llx\n",
    VAR_6 + VAR_15);
unmap:
 for (; VAR_14 >= 0 ; VAR_14 -= VAR_3)
  if (FUNC_6(VAR_11->kernel_ctx,
    VAR_12->dram_base_address + VAR_14, VAR_3))
   FUNC_3(VAR_11->dev,
    "failed to unmap address 0x%llx\n",
    VAR_12->dram_base_address + VAR_14);

 return VAR_16;
}
