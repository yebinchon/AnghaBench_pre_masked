
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct asic_fixed_properties {int dram_end_address; int dram_user_base_address; int va_space_dram_end_address; int va_space_dram_start_address; } ;
struct hl_device {scalar_t__ mmu_enable; struct asic_fixed_properties asic_prop; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hl_device *VAR_0, u64 VAR_1,
  u32 VAR_2)
{
 struct asic_fixed_properties *VAR_3 = &VAR_0->asic_prop;
 u64 VAR_4, VAR_5;

 if (VAR_0->mmu_enable) {
  VAR_4 = VAR_3->va_space_dram_start_address;
  VAR_5 = VAR_3->va_space_dram_end_address;
 } else {
  VAR_4 = VAR_3->dram_user_base_address;
  VAR_5 = VAR_3->dram_end_address;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5);
}
