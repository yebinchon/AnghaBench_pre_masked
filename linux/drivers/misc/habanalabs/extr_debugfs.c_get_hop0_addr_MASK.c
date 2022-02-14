
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hl_ctx {int asid; TYPE_2__* hdev; } ;
struct TYPE_3__ {int mmu_hop_table_size; scalar_t__ mmu_pgt_addr; } ;
struct TYPE_4__ {TYPE_1__ asic_prop; } ;



__attribute__((used)) static inline u64 FUNC_0(struct hl_ctx *VAR_0)
{
 return VAR_0->hdev->asic_prop.mmu_pgt_addr +
   (VAR_0->asid * VAR_0->hdev->asic_prop.mmu_hop_table_size);
}
