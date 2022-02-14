
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct asic_fixed_properties {scalar_t__ va_space_dram_start_address; scalar_t__ va_space_dram_end_address; scalar_t__ va_space_host_start_address; scalar_t__ va_space_host_end_address; } ;
struct hl_device {scalar_t__ dram_supports_virtual_memory; int mmu_enable; struct asic_fixed_properties asic_prop; } ;



__attribute__((used)) static bool FUNC_0(struct hl_device *VAR_0, u64 VAR_1)
{
 struct asic_fixed_properties *VAR_2 = &VAR_0->asic_prop;

 if (!VAR_0->mmu_enable)
  goto out;

 if (VAR_0->dram_supports_virtual_memory &&
   VAR_1 >= VAR_2->va_space_dram_start_address &&
   VAR_1 < VAR_2->va_space_dram_end_address)
  return 1;

 if (VAR_1 >= VAR_2->va_space_host_start_address &&
   VAR_1 < VAR_2->va_space_host_end_address)
  return 1;
out:
 return 0;
}
