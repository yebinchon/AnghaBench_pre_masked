
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eee; } ;
struct stmmac_priv {int phylink; int tx_lpi_timer; int eee_active; int eee_enabled; TYPE_1__ dma_cap; } ;
struct net_device {int dummy; } ;
struct ethtool_eee {int tx_lpi_timer; int eee_active; int eee_enabled; } ;


 int VAR_0 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_eee*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
         struct ethtool_eee *VAR_2)
{
 struct stmmac_priv *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->dma_cap.eee)
  return -VAR_0;

 VAR_2->eee_enabled = VAR_3->eee_enabled;
 VAR_2->eee_active = VAR_3->eee_active;
 VAR_2->tx_lpi_timer = VAR_3->tx_lpi_timer;

 return FUNC_1(VAR_3->phylink, VAR_2);
}
