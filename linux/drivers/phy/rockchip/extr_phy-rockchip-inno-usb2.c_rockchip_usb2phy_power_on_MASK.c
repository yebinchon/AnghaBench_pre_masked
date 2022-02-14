
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rockchip_usb2phy_port {int suspended; TYPE_1__* port_cfg; TYPE_3__* phy; } ;
struct rockchip_usb2phy {int clk480m; } ;
struct regmap {int dummy; } ;
struct TYPE_5__ {int parent; } ;
struct phy {TYPE_2__ dev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int phy_sus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct rockchip_usb2phy* FUNC_2 (int ) ;
 struct regmap* FUNC_3 (struct rockchip_usb2phy*) ;
 struct rockchip_usb2phy_port* FUNC_4 (struct phy*) ;
 int FUNC_5 (struct regmap*,int *,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_0)
{
 struct rockchip_usb2phy_port *VAR_1 = FUNC_4(VAR_0);
 struct rockchip_usb2phy *VAR_2 = FUNC_2(VAR_0->dev.parent);
 struct regmap *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_1(&VAR_1->phy->dev, "port power on\n");

 if (!VAR_1->suspended)
  return 0;

 VAR_4 = FUNC_0(VAR_2->clk480m);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_3, &VAR_1->port_cfg->phy_sus, 0);
 if (VAR_4)
  return VAR_4;


 FUNC_6(1500, 2000);

 VAR_1->suspended = 0;
 return 0;
}
