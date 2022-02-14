
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {TYPE_1__* pdev; int clk; } ;
struct device {scalar_t__ of_node; } ;
typedef int acpi_status ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct xgene_enet_pdata*) ;
 int FUNC_7 (struct xgene_enet_pdata*) ;
 int FUNC_8 (struct xgene_enet_pdata*) ;

__attribute__((used)) static int FUNC_9(struct xgene_enet_pdata *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;

 if (!FUNC_8(VAR_1))
  return -VAR_0;

 if (VAR_2->of_node) {
  FUNC_4(VAR_1->clk);
  FUNC_5(5);
  FUNC_3(VAR_1->clk);
  FUNC_5(5);
  FUNC_4(VAR_1->clk);
  FUNC_5(5);
 } else {
 }

 FUNC_7(VAR_1);
 FUNC_6(VAR_1);

 return 0;
}
