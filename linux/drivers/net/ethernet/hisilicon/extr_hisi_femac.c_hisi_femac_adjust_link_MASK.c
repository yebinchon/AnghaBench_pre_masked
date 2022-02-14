
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ duplex; scalar_t__ speed; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;
struct hisi_femac_priv {int link_status; scalar_t__ port_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct hisi_femac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6)
{
 struct hisi_femac_priv *VAR_7 = FUNC_0(VAR_6);
 struct phy_device *VAR_8 = VAR_6->phydev;
 u32 VAR_9 = 0;

 if (VAR_8->link)
  VAR_9 |= VAR_3;
 if (VAR_8->duplex == VAR_0)
  VAR_9 |= VAR_2;
 if (VAR_8->speed == VAR_5)
  VAR_9 |= VAR_4;

 if ((VAR_9 != VAR_7->link_status) &&
     ((VAR_9 | VAR_7->link_status) & VAR_3)) {
  FUNC_2(VAR_9, VAR_7->port_base + VAR_1);
  VAR_7->link_status = VAR_9;
  FUNC_1(VAR_8);
 }
}
