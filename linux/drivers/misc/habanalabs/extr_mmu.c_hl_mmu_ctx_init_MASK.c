
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int mmu_enable; } ;
struct hl_ctx {int mmu_shadow_hash; int mmu_phys_hash; int mmu_lock; struct hl_device* hdev; } ;


 int FUNC_0 (struct hl_ctx*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct hl_ctx *VAR_0)
{
 struct hl_device *VAR_1 = VAR_0->hdev;

 if (!VAR_1->mmu_enable)
  return 0;

 FUNC_2(&VAR_0->mmu_lock);
 FUNC_1(VAR_0->mmu_phys_hash);
 FUNC_1(VAR_0->mmu_shadow_hash);

 return FUNC_0(VAR_0);
}
