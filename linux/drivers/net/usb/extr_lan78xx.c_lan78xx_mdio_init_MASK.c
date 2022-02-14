
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lan78xx_net {int chipid; TYPE_4__* mdiobus; int net; TYPE_3__* udev; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {char* name; int phy_mask; int id; int write; int read; void* priv; } ;
struct TYPE_8__ {int of_node; } ;
struct TYPE_9__ {int devnum; TYPE_2__ dev; TYPE_1__* bus; } ;
struct TYPE_7__ {int busnum; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;
 struct device_node* FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_4__*,struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (int ,int ,char*,int,int) ;

__attribute__((used)) static int FUNC_8(struct lan78xx_net *VAR_4)
{
 struct device_node *VAR_5;
 int VAR_6;

 VAR_4->mdiobus = FUNC_0();
 if (!VAR_4->mdiobus) {
  FUNC_3(VAR_4->net, "can't allocate MDIO bus\n");
  return -VAR_0;
 }

 VAR_4->mdiobus->priv = (void *)VAR_4;
 VAR_4->mdiobus->read = VAR_2;
 VAR_4->mdiobus->write = VAR_3;
 VAR_4->mdiobus->name = "lan78xx-mdiobus";

 FUNC_7(VAR_4->mdiobus->id, VAR_1, "usb-%03d:%03d",
   VAR_4->udev->bus->busnum, VAR_4->udev->devnum);

 switch (VAR_4->chipid) {
 case 130:
 case 128:

  VAR_4->mdiobus->phy_mask = ~(1 << 1);
  break;
 case 129:

  VAR_4->mdiobus->phy_mask = ~(0xFF);
  break;
 }

 VAR_5 = FUNC_4(VAR_4->udev->dev.of_node, "mdio");
 VAR_6 = FUNC_5(VAR_4->mdiobus, VAR_5);
 FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_4->net, "can't register MDIO bus\n");
  goto exit1;
 }

 FUNC_2(VAR_4->net, "registered mdiobus bus %s\n", VAR_4->mdiobus->id);
 return 0;
exit1:
 FUNC_1(VAR_4->mdiobus);
 return VAR_6;
}
