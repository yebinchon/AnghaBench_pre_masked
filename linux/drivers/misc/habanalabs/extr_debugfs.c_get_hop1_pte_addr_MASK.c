
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct hl_ctx {TYPE_2__* hdev; } ;
struct TYPE_3__ {int mmu_pte_size; } ;
struct TYPE_4__ {TYPE_1__ asic_prop; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u64 FUNC_0(struct hl_ctx *VAR_2, u64 VAR_3,
  u64 VAR_4)
{
 return VAR_3 + VAR_2->hdev->asic_prop.mmu_pte_size *
   ((VAR_4 & VAR_0) >> VAR_1);
}
