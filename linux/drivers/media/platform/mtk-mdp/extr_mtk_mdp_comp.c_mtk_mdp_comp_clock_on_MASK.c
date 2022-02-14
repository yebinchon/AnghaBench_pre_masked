
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mdp_comp {int id; int type; int * clk; scalar_t__ larb_dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int,int ,int ,...) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct device *VAR_0, struct mtk_mdp_comp *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->larb_dev) {
  VAR_3 = FUNC_4(VAR_1->larb_dev);
  if (VAR_3)
   FUNC_3(VAR_0,
    "failed to get larb, err %d. type:%d id:%d\n",
    VAR_3, VAR_1->type, VAR_1->id);
 }

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->clk); VAR_2++) {
  if (FUNC_1(VAR_1->clk[VAR_2]))
   continue;
  VAR_3 = FUNC_2(VAR_1->clk[VAR_2]);
  if (VAR_3)
   FUNC_3(VAR_0,
   "failed to enable clock, err %d. type:%d id:%d i:%d\n",
    VAR_3, VAR_1->type, VAR_1->id, VAR_2);
 }
}
