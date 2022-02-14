
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ethtool_eee {int tx_lpi_timer; int eee_enabled; } ;
struct bcmgenet_priv {struct ethtool_eee eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bcmgenet_priv*) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct bcmgenet_priv*,int ,int ) ;
 int VAR_3 ;
 struct bcmgenet_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct bcmgenet_priv*,int ,struct net_device*,char*) ;
 int FUNC_5 (int ,struct ethtool_eee*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, struct ethtool_eee *VAR_5)
{
 struct bcmgenet_priv *VAR_6 = FUNC_3(VAR_4);
 struct ethtool_eee *VAR_7 = &VAR_6->eee;
 int VAR_8 = 0;

 if (FUNC_0(VAR_6))
  return -VAR_1;

 if (!VAR_4->phydev)
  return -VAR_0;

 VAR_7->eee_enabled = VAR_5->eee_enabled;

 if (!VAR_7->eee_enabled) {
  FUNC_1(VAR_4, 0);
 } else {
  VAR_8 = FUNC_6(VAR_4->phydev, 0);
  if (VAR_8) {
   FUNC_4(VAR_6, VAR_3, VAR_4, "EEE initialization failed\n");
   return VAR_8;
  }

  FUNC_2(VAR_6, VAR_5->tx_lpi_timer, VAR_2);
  FUNC_1(VAR_4, 1);
 }

 return FUNC_5(VAR_4->phydev, VAR_5);
}
