
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int version; int driver; } ;
struct arc_emac_priv {int drv_version; int drv_name; } ;


 struct arc_emac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
     struct ethtool_drvinfo *VAR_1)
{
 struct arc_emac_priv *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->driver, VAR_2->drv_name, sizeof(VAR_1->driver));
 FUNC_1(VAR_1->version, VAR_2->drv_version, sizeof(VAR_1->version));
}
