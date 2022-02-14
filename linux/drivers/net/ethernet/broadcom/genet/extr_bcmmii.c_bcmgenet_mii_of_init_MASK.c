
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct phy_device {TYPE_2__ mdio; scalar_t__ link; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct bcmgenet_priv {int phy_interface; int internal_phy; int phy_dn; TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,int ) ;
 struct phy_device* FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct bcmgenet_priv *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->pdev->dev.of_node;
 struct device *VAR_4 = &VAR_2->pdev->dev;
 struct phy_device *VAR_5;
 int VAR_6;
 int VAR_7;


 VAR_2->phy_dn = FUNC_3(VAR_3, "phy-handle", 0);




 if (!VAR_2->phy_dn && FUNC_5(VAR_3)) {
  VAR_7 = FUNC_6(VAR_3);
  if (VAR_7)
   return VAR_7;

  VAR_2->phy_dn = FUNC_2(VAR_3);
 }


 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4, "invalid PHY mode property\n");
  return VAR_6;
 }

 VAR_2->phy_interface = VAR_6;





 if (VAR_2->phy_interface == VAR_0)
  VAR_2->internal_phy = 1;


 if (VAR_6 == VAR_1) {
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5) {
   VAR_5->link = 0;
   FUNC_7(&VAR_5->mdio.dev);
  }
 }

 return 0;
}
