
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct usbnet {TYPE_1__* udev; struct aqc111_data* driver_priv; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct aqc111_data {scalar_t__ autoneg; scalar_t__ advertised_speed; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_3__ {int speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct usbnet*,scalar_t__,scalar_t__) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_10,
         const struct ethtool_link_ksettings *VAR_11)
{
 struct usbnet *VAR_12 = FUNC_1(VAR_10);
 struct aqc111_data *VAR_13 = VAR_12->driver_priv;
 enum usb_device_speed VAR_14 = VAR_12->udev->speed;
 u8 VAR_15 = VAR_11->base.autoneg;
 u32 VAR_16 = VAR_11->base.speed;

 if (VAR_15 == VAR_1) {
  if (VAR_13->autoneg != VAR_1) {
   VAR_13->autoneg = VAR_1;
   VAR_13->advertised_speed =
     (VAR_14 == VAR_9) ?
      VAR_7 : VAR_5;
   FUNC_0(VAR_12, VAR_13->autoneg,
          VAR_13->advertised_speed);
  }
 } else {
  if (VAR_16 != VAR_4 &&
      VAR_16 != VAR_5 &&
      VAR_16 != VAR_6 &&
      VAR_16 != VAR_7 &&
      VAR_16 != VAR_8)
   return -VAR_3;

  if (VAR_11->base.duplex != VAR_2)
   return -VAR_3;

  if (VAR_14 != VAR_9 && VAR_16 > VAR_5)
   return -VAR_3;

  VAR_13->autoneg = VAR_0;
  if (VAR_16 != VAR_8)
   VAR_13->advertised_speed = VAR_16;

  FUNC_0(VAR_12, VAR_13->autoneg,
         VAR_13->advertised_speed);
 }

 return 0;
}
