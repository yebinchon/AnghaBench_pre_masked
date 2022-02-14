
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int mmu_pgt_pool; int mmu_shadow_hop0; int mmu_enable; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct hl_device *VAR_0)
{
 if (!VAR_0->mmu_enable)
  return;

 FUNC_1(VAR_0->mmu_shadow_hop0);
 FUNC_0(VAR_0->mmu_pgt_pool);


}
