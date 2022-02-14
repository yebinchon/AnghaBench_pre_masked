
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pgt_info {scalar_t__ shadow_addr; int node; int phys_addr; } ;
typedef struct pgt_info u64 ;
struct TYPE_2__ {int mmu_hop_table_size; } ;
struct hl_device {TYPE_1__ asic_prop; int mmu_pgt_pool; } ;
struct hl_ctx {struct hl_device* hdev; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct pgt_info* FUNC_1 (struct hl_ctx*,struct pgt_info) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pgt_info*) ;

__attribute__((used)) static void FUNC_4(struct hl_ctx *VAR_0, u64 VAR_1)
{
 struct hl_device *VAR_2 = VAR_0->hdev;
 struct pgt_info *VAR_3 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_2->mmu_pgt_pool, VAR_3->phys_addr,
   VAR_2->asic_prop.mmu_hop_table_size);
 FUNC_2(&VAR_3->node);
 FUNC_3((u64 *) (uintptr_t) VAR_3->shadow_addr);
 FUNC_3(VAR_3);
}
