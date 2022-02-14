
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct module {int dummy; } ;
struct TYPE_6__ {int * groups; int * class; int parent; } ;
struct mii_bus {scalar_t__ state; int phy_mask; TYPE_1__ dev; struct phy_device* reset_gpiod; struct mdio_device** mdio_map; int * name; int (* reset ) (struct mii_bus*) ;int reset_delay_us; int id; int mdio_lock; int parent; struct module* owner; int * write; int * read; } ;
struct mdio_device {int (* device_free ) (struct mdio_device*) ;int (* device_remove ) (struct mdio_device*) ;} ;
typedef struct phy_device gpio_desc ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct phy_device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 struct phy_device* FUNC_7 (TYPE_1__*,char*,int ) ;
 int FUNC_8 (struct phy_device*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct phy_device* FUNC_9 (struct mii_bus*,int) ;
 int FUNC_10 (struct mii_bus*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,int *) ;
 int FUNC_14 (struct mii_bus*) ;
 int FUNC_15 (struct mdio_device*) ;
 int FUNC_16 (struct mdio_device*) ;
 int FUNC_17 (int ) ;

int FUNC_18(struct mii_bus *VAR_9, struct module *VAR_10)
{
 struct mdio_device *VAR_11;
 int VAR_12, VAR_13;
 struct gpio_desc *VAR_14;

 if (((void*)0) == VAR_9 || ((void*)0) == VAR_9->name ||
     ((void*)0) == VAR_9->read || ((void*)0) == VAR_9->write)
  return -VAR_0;

 FUNC_0(VAR_9->state != VAR_3 &&
        VAR_9->state != VAR_5);

 VAR_9->owner = VAR_10;
 VAR_9->dev.parent = VAR_9->parent;
 VAR_9->dev.class = &VAR_7;
 VAR_9->dev.groups = ((void*)0);
 FUNC_4(&VAR_9->dev, "%s", VAR_9->id);

 VAR_13 = FUNC_6(&VAR_9->dev);
 if (VAR_13) {
  FUNC_12("mii_bus %s failed to register\n", VAR_9->id);
  return -VAR_0;
 }

 FUNC_11(&VAR_9->mdio_lock);


 VAR_14 = FUNC_7(&VAR_9->dev, "reset", VAR_2);
 if (FUNC_1(VAR_14)) {
  FUNC_3(&VAR_9->dev, "mii_bus %s couldn't get reset GPIO\n",
   VAR_9->id);
  FUNC_5(&VAR_9->dev);
  return FUNC_2(VAR_14);
 } else if (VAR_14) {
  VAR_9->reset_gpiod = VAR_14;

  FUNC_8(VAR_14, 1);
  FUNC_17(VAR_9->reset_delay_us);
  FUNC_8(VAR_14, 0);
 }

 if (VAR_9->reset)
  VAR_9->reset(VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  if ((VAR_9->phy_mask & (1 << VAR_12)) == 0) {
   struct phy_device *VAR_15;

   VAR_15 = FUNC_9(VAR_9, VAR_12);
   if (FUNC_1(VAR_15) && (FUNC_2(VAR_15) != -VAR_1)) {
    VAR_13 = FUNC_2(VAR_15);
    goto error;
   }
  }
 }

 FUNC_10(VAR_9, VAR_8);

 VAR_9->state = VAR_4;
 FUNC_13("%s: probed\n", VAR_9->name);
 return 0;

error:
 while (--VAR_12 >= 0) {
  VAR_11 = VAR_9->mdio_map[VAR_12];
  if (!VAR_11)
   continue;

  VAR_11->device_remove(VAR_11);
  VAR_11->device_free(VAR_11);
 }


 if (VAR_9->reset_gpiod)
  FUNC_8(VAR_9->reset_gpiod, 1);

 FUNC_5(&VAR_9->dev);
 return VAR_13;
}
