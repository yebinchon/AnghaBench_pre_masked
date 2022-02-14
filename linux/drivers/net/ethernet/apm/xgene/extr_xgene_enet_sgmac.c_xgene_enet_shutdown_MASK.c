
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int clk; TYPE_1__* pdev; } ;
struct device {scalar_t__ of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_pdata *VAR_0)
{
 struct device *VAR_1 = &VAR_0->pdev->dev;

 if (VAR_1->of_node) {
  if (!FUNC_0(VAR_0->clk))
   FUNC_1(VAR_0->clk);
 }
}
