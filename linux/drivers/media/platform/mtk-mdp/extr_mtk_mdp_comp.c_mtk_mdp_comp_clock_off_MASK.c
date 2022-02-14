
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mdp_comp {scalar_t__ larb_dev; int * clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct device *VAR_0, struct mtk_mdp_comp *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->clk); VAR_2++) {
  if (FUNC_1(VAR_1->clk[VAR_2]))
   continue;
  FUNC_2(VAR_1->clk[VAR_2]);
 }

 if (VAR_1->larb_dev)
  FUNC_3(VAR_1->larb_dev);
}
