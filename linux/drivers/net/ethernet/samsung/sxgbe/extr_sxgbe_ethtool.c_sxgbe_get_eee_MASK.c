
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eee; } ;
struct sxgbe_priv_data {int tx_lpi_timer; int eee_active; int eee_enabled; TYPE_1__ hw_cap; } ;
struct net_device {int phydev; } ;
struct ethtool_eee {int tx_lpi_timer; int eee_active; int eee_enabled; } ;


 int VAR_0 ;
 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_eee*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct ethtool_eee *VAR_2)
{
 struct sxgbe_priv_data *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->hw_cap.eee)
  return -VAR_0;

 VAR_2->eee_enabled = VAR_3->eee_enabled;
 VAR_2->eee_active = VAR_3->eee_active;
 VAR_2->tx_lpi_timer = VAR_3->tx_lpi_timer;

 return FUNC_1(VAR_1->phydev, VAR_2);
}
