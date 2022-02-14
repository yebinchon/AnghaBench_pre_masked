
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct lan78xx_net {int intf; } ;
struct ethtool_eee {int eee_enabled; int eee_active; int advertised; int lp_advertised; int tx_lpi_enabled; int tx_lpi_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan78xx_net*,int ,int*) ;
 struct lan78xx_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*,struct ethtool_eee*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, struct ethtool_eee *VAR_4)
{
 struct lan78xx_net *VAR_5 = FUNC_1(VAR_3);
 struct phy_device *VAR_6 = VAR_3->phydev;
 int VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_3(VAR_5->intf);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_4);
 if (VAR_7 < 0)
  goto exit;

 VAR_7 = FUNC_0(VAR_5, VAR_1, &VAR_8);
 if (VAR_8 & VAR_2) {
  VAR_4->eee_enabled = 1;
  VAR_4->eee_active = !!(VAR_4->advertised &
           VAR_4->lp_advertised);
  VAR_4->tx_lpi_enabled = 1;

  VAR_7 = FUNC_0(VAR_5, VAR_0, &VAR_8);
  VAR_4->tx_lpi_timer = VAR_8;
 } else {
  VAR_4->eee_enabled = 0;
  VAR_4->eee_active = 0;
  VAR_4->tx_lpi_enabled = 0;
  VAR_4->tx_lpi_timer = 0;
 }

 VAR_7 = 0;
exit:
 FUNC_4(VAR_5->intf);

 return VAR_7;
}
