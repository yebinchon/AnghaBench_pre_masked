
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int phydev; } ;
struct lan78xx_net {int intf; } ;
struct ethtool_eee {scalar_t__ tx_lpi_timer; scalar_t__ eee_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan78xx_net*,int ,int *) ;
 int FUNC_1 (struct lan78xx_net*,int ,int ) ;
 struct lan78xx_net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct ethtool_eee*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, struct ethtool_eee *VAR_4)
{
 struct lan78xx_net *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_4(VAR_5->intf);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4->eee_enabled) {
  VAR_6 = FUNC_0(VAR_5, VAR_1, &VAR_7);
  VAR_7 |= VAR_2;
  VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_7);

  FUNC_3(VAR_3->phydev, VAR_4);

  VAR_7 = (u32)VAR_4->tx_lpi_timer;
  VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_7);
 } else {
  VAR_6 = FUNC_0(VAR_5, VAR_1, &VAR_7);
  VAR_7 &= ~VAR_2;
  VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_7);
 }

 FUNC_5(VAR_5->intf);

 return 0;
}
