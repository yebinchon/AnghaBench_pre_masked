
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hl_ctx {TYPE_1__* hdev; int dram_phys_mem; } ;
struct asic_fixed_properties {int dram_end_address; int dram_user_base_address; int va_space_host_end_address; int va_space_host_start_address; int va_space_dram_end_address; int va_space_dram_start_address; } ;
struct TYPE_2__ {scalar_t__ mmu_enable; struct asic_fixed_properties asic_prop; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hl_ctx*,int ,int ,int ,int ) ;

int FUNC_2(struct hl_ctx *VAR_0)
{
 struct asic_fixed_properties *VAR_1 = &VAR_0->hdev->asic_prop;
 u64 VAR_2, VAR_3, VAR_4,
  VAR_5;

 FUNC_0(&VAR_0->dram_phys_mem, 0);
 if (VAR_0->hdev->mmu_enable) {
  VAR_4 = VAR_1->va_space_dram_start_address;
  VAR_5 = VAR_1->va_space_dram_end_address;
  VAR_2 = VAR_1->va_space_host_start_address;
  VAR_3 = VAR_1->va_space_host_end_address;
 } else {
  VAR_4 = VAR_1->dram_user_base_address;
  VAR_5 = VAR_1->dram_end_address;
  VAR_2 = VAR_1->dram_user_base_address;
  VAR_3 = VAR_1->dram_end_address;
 }

 return FUNC_1(VAR_0, VAR_2, VAR_3,
   VAR_4, VAR_5);
}
