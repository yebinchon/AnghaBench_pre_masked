
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imgu_mmu_info {int dummy; } ;
struct imgu_mmu {scalar_t__ base; int l1pt; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct imgu_mmu*,int) ;
 int FUNC_2 (struct imgu_mmu*) ;
 struct imgu_mmu* FUNC_3 (struct imgu_mmu_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(struct imgu_mmu_info *VAR_1)
{
 struct imgu_mmu *VAR_2 = FUNC_3(VAR_1);
 u32 VAR_3;

 FUNC_1(VAR_2, 1);

 VAR_3 = FUNC_0(FUNC_4(VAR_2->l1pt));
 FUNC_5(VAR_3, VAR_2->base + VAR_0);

 FUNC_2(VAR_2);
 FUNC_1(VAR_2, 0);
}
