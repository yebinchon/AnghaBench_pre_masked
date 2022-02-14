
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ethtool_eee {int tx_lpi_timer; int eee_active; int eee_enabled; } ;
struct bcmgenet_priv {struct ethtool_eee eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bcmgenet_priv*) ;
 int VAR_2 ;
 int FUNC_1 (struct bcmgenet_priv*,int ) ;
 struct bcmgenet_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct ethtool_eee*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, struct ethtool_eee *VAR_4)
{
 struct bcmgenet_priv *VAR_5 = FUNC_2(VAR_3);
 struct ethtool_eee *VAR_6 = &VAR_5->eee;

 if (FUNC_0(VAR_5))
  return -VAR_1;

 if (!VAR_3->phydev)
  return -VAR_0;

 VAR_4->eee_enabled = VAR_6->eee_enabled;
 VAR_4->eee_active = VAR_6->eee_active;
 VAR_4->tx_lpi_timer = FUNC_1(VAR_5, VAR_2);

 return FUNC_3(VAR_3->phydev, VAR_4);
}
