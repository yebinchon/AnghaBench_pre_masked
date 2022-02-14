
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct pgt_info {int node; scalar_t__ num_of_ptes; struct hl_ctx* ctx; void* shadow_addr; void* phys_addr; } ;
struct asic_fixed_properties {int mmu_hop_table_size; } ;
struct hl_device {int mmu_pgt_pool; int dev; struct asic_fixed_properties asic_prop; } ;
struct hl_ctx {int mmu_shadow_hash; struct hl_device* hdev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (int ,int *,void*) ;
 int FUNC_4 (struct pgt_info*) ;
 struct pgt_info* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static u64 FUNC_7(struct hl_ctx *VAR_2)
{
 struct hl_device *VAR_3 = VAR_2->hdev;
 struct asic_fixed_properties *VAR_4 = &VAR_3->asic_prop;
 struct pgt_info *VAR_5;
 u64 VAR_6, VAR_7;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return VAR_1;

 VAR_6 = (u64) FUNC_1(VAR_3->mmu_pgt_pool,
     VAR_4->mmu_hop_table_size);
 if (!VAR_6) {
  FUNC_0(VAR_3->dev, "failed to allocate page\n");
  goto pool_add_err;
 }

 VAR_7 = (u64) (uintptr_t) FUNC_6(VAR_4->mmu_hop_table_size,
      VAR_0);
 if (!VAR_7)
  goto shadow_err;

 VAR_5->phys_addr = VAR_6;
 VAR_5->shadow_addr = VAR_7;
 VAR_5->ctx = VAR_2;
 VAR_5->num_of_ptes = 0;
 FUNC_3(VAR_2->mmu_shadow_hash, &VAR_5->node, VAR_7);

 return VAR_7;

shadow_err:
 FUNC_2(VAR_3->mmu_pgt_pool, VAR_6, VAR_4->mmu_hop_table_size);
pool_add_err:
 FUNC_4(VAR_5);

 return VAR_1;
}
