
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ link; scalar_t__ speed; scalar_t__ duplex; } ;
struct net_device {struct phy_device* phydev; } ;
struct arc_emac_priv {scalar_t__ link; scalar_t__ speed; scalar_t__ duplex; int (* set_mac_speed ) (struct arc_emac_priv*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct arc_emac_priv*,int ) ;
 int FUNC_1 (struct arc_emac_priv*,int ,unsigned int) ;
 struct arc_emac_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct arc_emac_priv*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 struct arc_emac_priv *VAR_4 = FUNC_2(VAR_3);
 struct phy_device *VAR_5 = VAR_3->phydev;
 unsigned int VAR_6, VAR_7 = 0;

 if (VAR_4->link != VAR_5->link) {
  VAR_4->link = VAR_5->link;
  VAR_7 = 1;
 }

 if (VAR_4->speed != VAR_5->speed) {
  VAR_4->speed = VAR_5->speed;
  VAR_7 = 1;
  if (VAR_4->set_mac_speed)
   VAR_4->set_mac_speed(VAR_4, VAR_4->speed);
 }

 if (VAR_4->duplex != VAR_5->duplex) {
  VAR_6 = FUNC_0(VAR_4, VAR_2);

  if (VAR_5->duplex == VAR_0)
   VAR_6 |= VAR_1;
  else
   VAR_6 &= ~VAR_1;

  FUNC_1(VAR_4, VAR_2, VAR_6);
  VAR_4->duplex = VAR_5->duplex;
  VAR_7 = 1;
 }

 if (VAR_7)
  FUNC_3(VAR_5);
}
