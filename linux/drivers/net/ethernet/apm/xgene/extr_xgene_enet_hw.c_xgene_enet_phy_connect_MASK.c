
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int phy_speed; int phy_mode; TYPE_1__* pdev; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct acpi_device {struct phy_device* driver_data; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct acpi_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct xgene_enet_pdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (scalar_t__,char*,int) ;
 struct phy_device* FUNC_5 (struct net_device*,struct device_node*,int *,int ,int ) ;
 scalar_t__ FUNC_6 (struct net_device*,struct phy_device*,int *,int ) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*) ;
 int VAR_5 ;

int FUNC_9(struct net_device *VAR_6)
{
 struct xgene_enet_pdata *VAR_7 = FUNC_2(VAR_6);
 struct device_node *VAR_8;
 struct phy_device *VAR_9;
 struct device *VAR_10 = &VAR_7->pdev->dev;
 int VAR_11;

 if (VAR_10->of_node) {
  for (VAR_11 = 0 ; VAR_11 < 2; VAR_11++) {
   VAR_8 = FUNC_4(VAR_10->of_node, "phy-handle", VAR_11);
   VAR_9 = FUNC_5(VAR_6, VAR_8,
       &VAR_5,
       0, VAR_7->phy_mode);
   FUNC_3(VAR_8);
   if (VAR_9)
    break;
  }

  if (!VAR_9) {
   FUNC_1(VAR_6, "Could not connect to PHY\n");
   return -VAR_0;
  }
 } else {
  return -VAR_0;

 }

 VAR_7->phy_speed = VAR_4;
 FUNC_7(VAR_9, VAR_3);
 FUNC_7(VAR_9, VAR_2);
 FUNC_7(VAR_9, VAR_1);
 FUNC_8(VAR_9);

 return 0;
}
