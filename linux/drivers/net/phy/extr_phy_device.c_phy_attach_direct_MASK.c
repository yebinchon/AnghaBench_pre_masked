
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct device {TYPE_6__* driver; int kobj; } ;
struct TYPE_16__ {struct device dev; struct mii_bus* bus; } ;
struct phy_device {int sysfs_links; struct net_device* attached_dev; int state; int interface; int dev_flags; TYPE_5__ mdio; int phy_link_change; scalar_t__ is_c45; } ;
struct TYPE_20__ {TYPE_2__* parent; } ;
struct net_device {struct phy_device* phydev; TYPE_9__ dev; } ;
struct module {int dummy; } ;
struct mii_bus {struct module* owner; } ;
typedef int phy_interface_t ;
struct TYPE_17__ {int (* probe ) (struct device*) ;struct module* owner; } ;
struct TYPE_14__ {TYPE_6__ driver; } ;
struct TYPE_19__ {TYPE_3__ mdiodrv; } ;
struct TYPE_15__ {TYPE_6__ driver; } ;
struct TYPE_18__ {TYPE_4__ mdiodrv; } ;
struct TYPE_13__ {TYPE_1__* driver; } ;
struct TYPE_12__ {struct module* owner; } ;
struct TYPE_11__ {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_10__ VAR_3 ;
 int FUNC_0 (TYPE_9__*,char*) ;
 int FUNC_1 (struct device*) ;
 TYPE_8__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct module*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct phy_device*) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (struct phy_device*) ;
 int VAR_6 ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (struct phy_device*,char*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct module*) ;

int FUNC_15(struct net_device *VAR_7, struct phy_device *VAR_8,
        u32 VAR_9, phy_interface_t VAR_10)
{
 struct mii_bus *VAR_11 = VAR_8->mdio.bus;
 struct device *VAR_12 = &VAR_8->mdio.dev;
 struct module *VAR_13 = ((void*)0);
 bool VAR_14 = 0;
 int VAR_15;






 if (VAR_7)
  VAR_13 = VAR_7->dev.parent->driver->owner;
 if (VAR_13 != VAR_11->owner && !FUNC_14(VAR_11->owner)) {
  FUNC_10(VAR_8, "failed to get the bus module\n");
  return -VAR_1;
 }

 FUNC_2(VAR_12);




 if (!VAR_12->driver) {
  if (VAR_8->is_c45)
   VAR_12->driver = &VAR_4.mdiodrv.driver;
  else
   VAR_12->driver = &VAR_5.mdiodrv.driver;

  VAR_14 = 1;
 }

 if (!FUNC_14(VAR_12->driver->owner)) {
  FUNC_10(VAR_8, "failed to get the device driver module\n");
  VAR_15 = -VAR_1;
  goto error_put_device;
 }

 if (VAR_14) {
  VAR_15 = VAR_12->driver->probe(VAR_12);
  if (VAR_15 >= 0)
   VAR_15 = FUNC_1(VAR_12);

  if (VAR_15)
   goto error_module_put;
 }

 if (VAR_8->attached_dev) {
  FUNC_0(&VAR_7->dev, "PHY already attached\n");
  VAR_15 = -VAR_0;
  goto error;
 }

 VAR_8->phy_link_change = VAR_6;
 if (VAR_7) {
  VAR_8->attached_dev = VAR_7;
  VAR_7->phydev = VAR_8;
 }
 VAR_8->sysfs_links = 0;

 FUNC_9(VAR_8);

 if (!VAR_8->attached_dev) {
  VAR_15 = FUNC_13(&VAR_8->mdio.dev.kobj,
     &VAR_3.attr);
  if (VAR_15)
   FUNC_10(VAR_8, "error creating 'phy_standalone' sysfs entry\n");
 }

 VAR_8->dev_flags = VAR_9;

 VAR_8->interface = VAR_10;

 VAR_8->state = VAR_2;




 if (VAR_7)
  FUNC_4(VAR_8->attached_dev);





 VAR_15 = FUNC_6(VAR_8);
 if (VAR_15)
  goto error;

 FUNC_8(VAR_8);
 FUNC_7(VAR_8);

 return VAR_15;

error:

 FUNC_5(VAR_8);
 return VAR_15;

error_module_put:
 FUNC_3(VAR_12->driver->owner);
error_put_device:
 FUNC_11(VAR_12);
 if (VAR_13 != VAR_11->owner)
  FUNC_3(VAR_11->owner);
 return VAR_15;
}
