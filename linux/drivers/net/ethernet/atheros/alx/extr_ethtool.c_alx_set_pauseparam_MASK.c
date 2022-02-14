
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ rx_pause; scalar_t__ tx_pause; } ;
struct alx_hw {int adv_cfg; int flowctrl; } ;
struct alx_priv {struct alx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct alx_hw*,int) ;
 int FUNC_2 (struct alx_hw*,int,int) ;
 struct alx_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
         struct ethtool_pauseparam *VAR_5)
{
 struct alx_priv *VAR_6 = FUNC_3(VAR_4);
 struct alx_hw *VAR_7 = &VAR_6->hw;
 int VAR_8 = 0;
 bool VAR_9 = 0;
 u8 VAR_10 = 0;

 if (VAR_5->tx_pause)
  VAR_10 |= VAR_3;
 if (VAR_5->rx_pause)
  VAR_10 |= VAR_2;
 if (VAR_5->autoneg)
  VAR_10 |= VAR_1;

 FUNC_0();


 if (VAR_7->adv_cfg & VAR_0) {
  if (!((VAR_10 ^ VAR_7->flowctrl) & VAR_1))
   VAR_9 = 1;
  if (VAR_10 & VAR_7->flowctrl & VAR_1 &&
      (VAR_10 ^ VAR_7->flowctrl) & (VAR_2 | VAR_3))
   VAR_9 = 1;
 }

 if (VAR_9) {
  VAR_8 = FUNC_2(VAR_7, VAR_7->adv_cfg, VAR_10);
  if (VAR_8)
   return VAR_8;
 }


 if ((VAR_10 ^ VAR_7->flowctrl) & (VAR_2 | VAR_3))
  FUNC_1(VAR_7, VAR_10);

 VAR_7->flowctrl = VAR_10;

 return 0;
}
