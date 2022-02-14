
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_mmu_info {int dummy; } ;
struct imgu_mmu {scalar_t__ dummy_page; int dummy_l2pt; int l2pts; int l1pt; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct imgu_mmu*,int) ;
 int FUNC_3 (struct imgu_mmu*) ;
 int FUNC_4 (struct imgu_mmu*) ;
 struct imgu_mmu* FUNC_5 (struct imgu_mmu_info*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct imgu_mmu_info *VAR_0)
{
 struct imgu_mmu *VAR_1 = FUNC_5(VAR_0);


 FUNC_2(VAR_1, 1);
 FUNC_3(VAR_1);

 FUNC_1(VAR_1->l1pt);
 FUNC_6(VAR_1->l2pts);
 FUNC_1(VAR_1->dummy_l2pt);
 FUNC_0((unsigned long)VAR_1->dummy_page);
 FUNC_4(VAR_1);
}
