
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {scalar_t__ enet_id; int port_id; TYPE_1__* pdev; int clk; scalar_t__ mdio_driver; } ;
struct device {scalar_t__ of_node; } ;
typedef int acpi_status ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct xgene_enet_pdata*) ;
 int FUNC_8 (struct xgene_enet_pdata*) ;
 int FUNC_9 (struct xgene_enet_pdata*,int ,int ) ;
 int FUNC_10 (struct xgene_enet_pdata*) ;

__attribute__((used)) static int FUNC_11(struct xgene_enet_pdata *VAR_4)
{
 struct device *VAR_5 = &VAR_4->pdev->dev;

 if (!FUNC_10(VAR_4))
  return -VAR_0;

 if (VAR_4->mdio_driver && VAR_4->enet_id == VAR_3) {
  FUNC_7(VAR_4);
  return 0;
 }

 if (VAR_4->enet_id == VAR_3)
  FUNC_9(VAR_4, VAR_2, VAR_1);

 if (VAR_5->of_node) {
  if (!FUNC_2(VAR_4->clk)) {
   FUNC_5(VAR_4->clk);
   FUNC_6(5);
   FUNC_4(VAR_4->clk);
   FUNC_6(5);
   FUNC_5(VAR_4->clk);
   FUNC_6(5);
  }
 } else {
 }

 if (!VAR_4->port_id) {
  FUNC_8(VAR_4);
  FUNC_7(VAR_4);
 }

 return 0;
}
