
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int tx_lpi_timer; int eee_enabled; int phylink; } ;
struct net_device {int dummy; } ;
struct ethtool_eee {int tx_lpi_timer; int eee_enabled; } ;


 int VAR_0 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_eee*) ;
 int FUNC_2 (struct stmmac_priv*) ;
 int FUNC_3 (struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
         struct ethtool_eee *VAR_2)
{
 struct stmmac_priv *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (!VAR_2->eee_enabled) {
  FUNC_2(VAR_3);
 } else {




  VAR_2->eee_enabled = FUNC_3(VAR_3);
  if (!VAR_2->eee_enabled)
   return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_3->phylink, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3->eee_enabled = VAR_2->eee_enabled;
 VAR_3->tx_lpi_timer = VAR_2->tx_lpi_timer;
 return 0;
}
