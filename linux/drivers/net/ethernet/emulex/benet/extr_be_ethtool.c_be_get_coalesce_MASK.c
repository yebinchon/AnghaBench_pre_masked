
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int use_adaptive_tx_coalesce; int use_adaptive_rx_coalesce; int tx_coalesce_usecs_low; int tx_coalesce_usecs_high; int tx_coalesce_usecs; int rx_coalesce_usecs_low; int rx_coalesce_usecs_high; int rx_coalesce_usecs; } ;
struct be_aic_obj {int min_eqd; int max_eqd; int prev_eqd; } ;
struct be_adapter {int aic_enabled; struct be_aic_obj* aic_obj; } ;


 struct be_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
      struct ethtool_coalesce *VAR_1)
{
 struct be_adapter *VAR_2 = FUNC_0(VAR_0);
 struct be_aic_obj *VAR_3 = &VAR_2->aic_obj[0];

 VAR_1->rx_coalesce_usecs = VAR_3->prev_eqd;
 VAR_1->rx_coalesce_usecs_high = VAR_3->max_eqd;
 VAR_1->rx_coalesce_usecs_low = VAR_3->min_eqd;

 VAR_1->tx_coalesce_usecs = VAR_3->prev_eqd;
 VAR_1->tx_coalesce_usecs_high = VAR_3->max_eqd;
 VAR_1->tx_coalesce_usecs_low = VAR_3->min_eqd;

 VAR_1->use_adaptive_rx_coalesce = VAR_2->aic_enabled;
 VAR_1->use_adaptive_tx_coalesce = VAR_2->aic_enabled;

 return 0;
}
