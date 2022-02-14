
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ speed; } ;
struct net_device {int dummy; } ;
struct gbe_slave {scalar_t__ link_interface; int port_num; scalar_t__ open; int mac_control; struct phy_device* phy; } ;
struct gbe_priv {int ale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gbe_slave*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct gbe_priv *VAR_11,
       struct net_device *VAR_12,
       struct gbe_slave *VAR_13,
       int VAR_14)
{
 struct phy_device *VAR_15 = VAR_13->phy;
 u32 VAR_16 = 0;

 if (VAR_14) {
  VAR_16 = VAR_13->mac_control;
  if (VAR_15 && (VAR_15->speed == VAR_7)) {
   VAR_16 |= VAR_3;
   VAR_16 &= ~VAR_4;
  } else if (VAR_15 && (VAR_15->speed == VAR_8)) {
   VAR_16 |= VAR_4;
   VAR_16 &= ~VAR_3;
  }

  FUNC_5(VAR_16, FUNC_0(VAR_13, VAR_10,
       VAR_16));

  FUNC_1(VAR_11->ale, VAR_13->port_num,
         VAR_0,
         VAR_2);

  if (VAR_12 && VAR_13->open &&
      ((VAR_13->link_interface != VAR_6) &&
      (VAR_13->link_interface != VAR_5) &&
      (VAR_13->link_interface != VAR_9)))
   FUNC_3(VAR_12);
 } else {
  FUNC_5(VAR_16, FUNC_0(VAR_13, VAR_10,
       VAR_16));
  FUNC_1(VAR_11->ale, VAR_13->port_num,
         VAR_0,
         VAR_1);
  if (VAR_12 &&
      ((VAR_13->link_interface != VAR_6) &&
      (VAR_13->link_interface != VAR_5) &&
      (VAR_13->link_interface != VAR_9)))
   FUNC_2(VAR_12);
 }

 if (VAR_15)
  FUNC_4(VAR_15);
}
