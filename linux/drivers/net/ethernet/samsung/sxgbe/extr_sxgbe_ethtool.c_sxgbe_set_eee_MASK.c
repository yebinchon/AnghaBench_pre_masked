
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_priv_data {int tx_lpi_timer; scalar_t__ eee_enabled; } ;
struct net_device {int phydev; } ;
struct ethtool_eee {int tx_lpi_timer; scalar_t__ eee_enabled; } ;


 int VAR_0 ;
 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_eee*) ;
 int FUNC_2 (struct sxgbe_priv_data*) ;
 scalar_t__ FUNC_3 (struct sxgbe_priv_data*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
    struct ethtool_eee *VAR_2)
{
 struct sxgbe_priv_data *VAR_3 = FUNC_0(VAR_1);

 VAR_3->eee_enabled = VAR_2->eee_enabled;

 if (!VAR_3->eee_enabled) {
  FUNC_2(VAR_3);
 } else {




  VAR_3->eee_enabled = FUNC_3(VAR_3);
  if (!VAR_3->eee_enabled)
   return -VAR_0;


  VAR_3->tx_lpi_timer = VAR_2->tx_lpi_timer;
 }

 return FUNC_1(VAR_1->phydev, VAR_2);
}
