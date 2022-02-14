
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct phy_driver {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct mdio_device {struct device dev; } ;
struct TYPE_5__ {int read_status; } ;
struct gmii2rgmii {TYPE_2__ conv_phy_drv; TYPE_1__* phy_dev; TYPE_2__* phy_drv; struct mdio_device* mdio; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {TYPE_2__* drv; int mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 struct gmii2rgmii* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *,struct gmii2rgmii*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (struct device_node*,char*,int ) ;
 TYPE_1__* FUNC_7 (struct device_node*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct mdio_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node, *VAR_8;
 struct gmii2rgmii *VAR_9;

 VAR_9 = FUNC_2(VAR_6, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_6(VAR_7, "phy-handle", 0);
 if (!VAR_8) {
  FUNC_0(VAR_6, "Couldn't parse phy-handle\n");
  return -VAR_0;
 }

 VAR_9->phy_dev = FUNC_7(VAR_8);
 FUNC_5(VAR_8);
 if (!VAR_9->phy_dev) {
  FUNC_1(VAR_6, "Couldn't find phydev\n");
  return -VAR_2;
 }

 if (!VAR_9->phy_dev->drv) {
  FUNC_1(VAR_6, "Attached phy not ready\n");
  return -VAR_2;
 }

 VAR_9->mdio = VAR_5;
 VAR_9->phy_drv = VAR_9->phy_dev->drv;
 FUNC_4(&VAR_9->conv_phy_drv, VAR_9->phy_dev->drv,
        sizeof(struct phy_driver));
 VAR_9->conv_phy_drv.read_status = VAR_4;
 FUNC_3(&VAR_9->phy_dev->mdio, VAR_9);
 VAR_9->phy_dev->drv = &VAR_9->conv_phy_drv;

 return 0;
}
