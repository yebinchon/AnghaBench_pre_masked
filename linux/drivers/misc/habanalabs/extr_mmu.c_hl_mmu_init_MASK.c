
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asic_fixed_properties {int mmu_hop_table_size; int max_asid; scalar_t__ mmu_hop0_tables_total_size; scalar_t__ mmu_pgt_size; scalar_t__ mmu_pgt_addr; } ;
struct hl_device {int mmu_pgt_pool; int mmu_shadow_hop0; int dev; int mmu_enable; struct asic_fixed_properties asic_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

int FUNC_6(struct hl_device *VAR_3)
{
 struct asic_fixed_properties *VAR_4 = &VAR_3->asic_prop;
 int VAR_5;

 if (!VAR_3->mmu_enable)
  return 0;



 VAR_3->mmu_pgt_pool =
   FUNC_3(FUNC_0(VAR_4->mmu_hop_table_size), -1);

 if (!VAR_3->mmu_pgt_pool) {
  FUNC_1(VAR_3->dev, "Failed to create page gen pool\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_3->mmu_pgt_pool, VAR_4->mmu_pgt_addr +
   VAR_4->mmu_hop0_tables_total_size,
   VAR_4->mmu_pgt_size - VAR_4->mmu_hop0_tables_total_size,
   -1);
 if (VAR_5) {
  FUNC_1(VAR_3->dev, "Failed to add memory to page gen pool\n");
  goto err_pool_add;
 }

 VAR_3->mmu_shadow_hop0 = FUNC_5(VAR_4->max_asid,
     VAR_4->mmu_hop_table_size,
     VAR_1 | VAR_2);
 if (!VAR_3->mmu_shadow_hop0) {
  VAR_5 = -VAR_0;
  goto err_pool_add;
 }

 return 0;

err_pool_add:
 FUNC_4(VAR_3->mmu_pgt_pool);

 return VAR_5;
}
