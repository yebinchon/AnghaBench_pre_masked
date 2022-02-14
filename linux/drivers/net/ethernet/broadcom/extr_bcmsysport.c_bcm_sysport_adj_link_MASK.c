
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ link; scalar_t__ duplex; int speed; scalar_t__ pause; } ;
struct net_device {struct phy_device* phydev; } ;
struct bcm_sysport_priv {scalar_t__ old_link; scalar_t__ old_duplex; scalar_t__ old_pause; scalar_t__ is_lite; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;




 int VAR_10 ;
 struct bcm_sysport_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ) ;
 int FUNC_3 (struct bcm_sysport_priv*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_11)
{
 struct bcm_sysport_priv *VAR_12 = FUNC_0(VAR_11);
 struct phy_device *VAR_13 = VAR_11->phydev;
 unsigned int VAR_14 = 0;
 u32 VAR_15 = 0, VAR_16;

 if (VAR_12->old_link != VAR_13->link) {
  VAR_14 = 1;
  VAR_12->old_link = VAR_13->link;
 }

 if (VAR_12->old_duplex != VAR_13->duplex) {
  VAR_14 = 1;
  VAR_12->old_duplex = VAR_13->duplex;
 }

 if (VAR_12->is_lite)
  goto out;

 switch (VAR_13->speed) {
 case 128:
  VAR_15 = VAR_5;
  break;
 case 129:
  VAR_15 = VAR_4;
  break;
 case 130:
  VAR_15 = VAR_3;
  break;
 case 131:
  VAR_15 = VAR_2;
  break;
 default:
  break;
 }
 VAR_15 <<= VAR_7;

 if (VAR_13->duplex == VAR_9)
  VAR_15 |= VAR_0;

 if (VAR_12->old_pause != VAR_13->pause) {
  VAR_14 = 1;
  VAR_12->old_pause = VAR_13->pause;
 }

 if (!VAR_13->pause)
  VAR_15 |= VAR_1 | VAR_8;

 if (!VAR_14)
  return;

 if (VAR_13->link) {
  VAR_16 = FUNC_2(VAR_12, VAR_10);
  VAR_16 &= ~((VAR_6 << VAR_7) |
   VAR_0 | VAR_1 |
   VAR_8);
  VAR_16 |= VAR_15;
  FUNC_3(VAR_12, VAR_16, VAR_10);
 }
out:
 if (VAR_14)
  FUNC_1(VAR_13);
}
