
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_mdio_pdata {int clk; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct xgene_mdio_pdata*) ;
 int FUNC_6 (struct xgene_mdio_pdata*) ;

__attribute__((used)) static int FUNC_7(struct xgene_mdio_pdata *VAR_0)
{
 int VAR_1;

 if (VAR_0->dev->of_node) {
  FUNC_3(VAR_0->clk);
  FUNC_4(5);
  FUNC_2(VAR_0->clk);
  FUNC_4(5);
  FUNC_3(VAR_0->clk);
  FUNC_4(5);
 } else {




 }

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1) {
  if (VAR_0->dev->of_node)
   FUNC_2(VAR_0->clk);
  return VAR_1;
 }
 FUNC_6(VAR_0);

 return 0;
}
