
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ active_flowctrl; scalar_t__ active_speed; scalar_t__ active_duplex; int flowctrl; } ;
struct tg3 {int mac_mode; scalar_t__ old_link; int lock; TYPE_1__ link_config; int phy_addr; int mdio_bus; } ;
struct phy_device {scalar_t__ link; scalar_t__ speed; scalar_t__ duplex; scalar_t__ asym_pause; scalar_t__ pause; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct phy_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct tg3* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct tg3*) ;
 int FUNC_6 (struct tg3*) ;
 int FUNC_7 (struct tg3*,int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_19)
{
 u8 VAR_20, VAR_21 = 0;
 u32 VAR_22, VAR_23, VAR_24;
 struct tg3 *VAR_25 = FUNC_2(VAR_19);
 struct phy_device *VAR_26 = FUNC_0(VAR_25->mdio_bus, VAR_25->phy_addr);

 FUNC_3(&VAR_25->lock);

 VAR_22 = VAR_25->mac_mode & ~(VAR_10 |
        VAR_8);

 VAR_20 = VAR_25->link_config.active_flowctrl;

 if (VAR_26->link) {
  VAR_23 = 0;
  VAR_24 = 0;

  if (VAR_26->speed == VAR_14 || VAR_26->speed == VAR_13)
   VAR_22 |= VAR_11;
  else if (VAR_26->speed == VAR_15 ||
    FUNC_5(VAR_25) != VAR_0)
   VAR_22 |= VAR_9;
  else
   VAR_22 |= VAR_11;

  if (VAR_26->duplex == VAR_1)
   VAR_22 |= VAR_8;
  else {
   VAR_23 = FUNC_1(
      VAR_25->link_config.flowctrl);

   if (VAR_26->pause)
    VAR_24 = VAR_3;
   if (VAR_26->asym_pause)
    VAR_24 |= VAR_2;
  }

  FUNC_7(VAR_25, VAR_23, VAR_24);
 } else
  VAR_22 |= VAR_9;

 if (VAR_22 != VAR_25->mac_mode) {
  VAR_25->mac_mode = VAR_22;
  FUNC_9(VAR_7, VAR_25->mac_mode);
  FUNC_10(40);
 }

 if (FUNC_5(VAR_25) == VAR_0) {
  if (VAR_26->speed == VAR_13)
   FUNC_8(VAR_4,
        VAR_5 |
        VAR_6);
  else
   FUNC_8(VAR_4, VAR_6);
 }

 if (VAR_26->speed == VAR_15 && VAR_26->duplex == VAR_1)
  FUNC_8(VAR_12,
       ((2 << VAR_16) |
        (6 << VAR_17) |
        (0xff << VAR_18)));
 else
  FUNC_8(VAR_12,
       ((2 << VAR_16) |
        (6 << VAR_17) |
        (32 << VAR_18)));

 if (VAR_26->link != VAR_25->old_link ||
     VAR_26->speed != VAR_25->link_config.active_speed ||
     VAR_26->duplex != VAR_25->link_config.active_duplex ||
     VAR_20 != VAR_25->link_config.active_flowctrl)
  VAR_21 = 1;

 VAR_25->old_link = VAR_26->link;
 VAR_25->link_config.active_speed = VAR_26->speed;
 VAR_25->link_config.active_duplex = VAR_26->duplex;

 FUNC_4(&VAR_25->lock);

 if (VAR_21)
  FUNC_6(VAR_25);
}
