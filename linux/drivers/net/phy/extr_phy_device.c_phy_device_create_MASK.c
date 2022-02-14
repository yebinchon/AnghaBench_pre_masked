
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct phy_c45_device_ids {int* device_ids; int devices_in_package; } ;
struct TYPE_3__ {int * type; int * bus; int * parent; } ;
struct mdio_device {int addr; TYPE_1__ dev; int device_remove; int device_free; int flags; int bus_match; struct mii_bus* bus; } ;
struct phy_device {int duplex; int is_c45; int phy_id; int state_queue; int lock; int state; int irq; struct phy_c45_device_ids c45_ids; int autoneg; int interface; scalar_t__ link; scalar_t__ asym_pause; scalar_t__ pause; scalar_t__ speed; struct mdio_device mdio; } ;
struct mii_bus {int id; int * irq; int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct phy_device* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct phy_device*) ;
 struct phy_device* FUNC_6 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct phy_device*,int) ;
 int VAR_12 ;

struct phy_device *FUNC_9(struct mii_bus *VAR_13, int VAR_14, int VAR_15,
         bool VAR_16,
         struct phy_c45_device_ids *VAR_17)
{
 struct phy_device *VAR_18;
 struct mdio_device *VAR_19;
 int VAR_20 = 0;


 VAR_18 = FUNC_6(sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return FUNC_1(-VAR_1);

 VAR_19 = &VAR_18->mdio;
 VAR_19->dev.parent = &VAR_13->dev;
 VAR_19->dev.bus = &VAR_8;
 VAR_19->dev.type = &VAR_7;
 VAR_19->bus = VAR_13;
 VAR_19->bus_match = VAR_9;
 VAR_19->addr = VAR_14;
 VAR_19->flags = VAR_3;
 VAR_19->device_free = VAR_10;
 VAR_19->device_remove = VAR_11;

 VAR_18->speed = 0;
 VAR_18->duplex = -1;
 VAR_18->pause = 0;
 VAR_18->asym_pause = 0;
 VAR_18->link = 0;
 VAR_18->interface = VAR_6;

 VAR_18->autoneg = VAR_0;

 VAR_18->is_c45 = VAR_16;
 VAR_18->phy_id = VAR_15;
 if (VAR_17)
  VAR_18->c45_ids = *VAR_17;
 VAR_18->irq = VAR_13->irq[VAR_14];
 FUNC_3(&VAR_19->dev, VAR_5, VAR_13->id, VAR_14);

 VAR_18->state = VAR_4;

 FUNC_7(&VAR_18->lock);
 FUNC_2(&VAR_18->state_queue, VAR_12);
 if (VAR_16 && VAR_17) {
  const int VAR_21 = FUNC_0(VAR_17->device_ids);
  int VAR_22;

  for (VAR_22 = 1; VAR_22 < VAR_21; VAR_22++) {
   if (!(VAR_17->devices_in_package & (1 << VAR_22)))
    continue;

   VAR_20 = FUNC_8(VAR_18,
      VAR_17->device_ids[VAR_22]);
   if (VAR_20)
    break;
  }
 } else {
  VAR_20 = FUNC_8(VAR_18, VAR_15);
 }

 if (!VAR_20) {
  FUNC_4(&VAR_19->dev);
 } else {
  FUNC_5(VAR_18);
  VAR_18 = FUNC_1(VAR_20);
 }

 return VAR_18;
}
