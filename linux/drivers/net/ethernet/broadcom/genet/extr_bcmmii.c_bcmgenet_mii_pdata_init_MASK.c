
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unimac_mdio_pdata {int phy_mask; } ;
struct device {struct bcmgenet_platform_data* platform_data; } ;
struct bcmgenet_priv {TYPE_1__* pdev; } ;
struct bcmgenet_platform_data {scalar_t__ phy_interface; int phy_address; scalar_t__ mdio_enabled; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct bcmgenet_priv *VAR_2,
        struct unimac_mdio_pdata *VAR_3)
{
 struct device *VAR_4 = &VAR_2->pdev->dev;
 struct bcmgenet_platform_data *VAR_5 = VAR_4->platform_data;

 if (VAR_5->phy_interface != VAR_0 && VAR_5->mdio_enabled) {



  if (VAR_5->phy_address >= 0 && VAR_5->phy_address < VAR_1)
   VAR_3->phy_mask = 1 << VAR_5->phy_address;
  else
   VAR_3->phy_mask = 0;
 }
}
