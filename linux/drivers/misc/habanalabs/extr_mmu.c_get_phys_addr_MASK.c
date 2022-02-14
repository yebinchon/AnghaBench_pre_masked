
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hl_ctx {TYPE_2__* hdev; } ;
struct TYPE_6__ {scalar_t__ phys_addr; } ;
struct TYPE_4__ {scalar_t__ mmu_hop_table_size; } ;
struct TYPE_5__ {TYPE_1__ asic_prop; } ;


 scalar_t__ FUNC_0 (struct hl_ctx*) ;
 TYPE_3__* FUNC_1 (struct hl_ctx*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct hl_ctx*) ;

__attribute__((used)) static inline u64 FUNC_3(struct hl_ctx *VAR_0, u64 VAR_1)
{
 u64 VAR_2 = (VAR_0->hdev->asic_prop.mmu_hop_table_size - 1);
 u64 VAR_3 = VAR_1 & ~VAR_2;
 u64 VAR_4 = VAR_1 & VAR_2;
 u64 VAR_5;

 if (VAR_3 != FUNC_0(VAR_0))
  VAR_5 = FUNC_1(VAR_0, VAR_3)->phys_addr;
 else
  VAR_5 = FUNC_2(VAR_0);

 return VAR_5 + VAR_4;
}
