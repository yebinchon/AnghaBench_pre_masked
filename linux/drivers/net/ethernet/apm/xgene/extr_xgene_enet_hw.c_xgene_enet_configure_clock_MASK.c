
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int phy_speed; int clk; TYPE_1__* pdev; } ;
struct device {scalar_t__ of_node; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*) ;


 int FUNC_1 (int ,char*,int *,int *) ;
 struct clk* FUNC_2 (int ) ;
 int FUNC_3 (struct clk*,int) ;

__attribute__((used)) static void FUNC_4(struct xgene_enet_pdata *VAR_0)
{
 struct device *VAR_1 = &VAR_0->pdev->dev;

 if (VAR_1->of_node) {
  struct clk *VAR_2 = FUNC_2(VAR_0->clk);

  switch (VAR_0->phy_speed) {
  case 129:
   FUNC_3(VAR_2, 2500000);
   break;
  case 128:
   FUNC_3(VAR_2, 25000000);
   break;
  default:
   FUNC_3(VAR_2, 125000000);
   break;
  }
 }
}
