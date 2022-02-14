
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int driver; } ;
struct dpaa2_eth_priv {int dpni_ver_major; int dpni_ver_minor; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct dpaa2_eth_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int,char*,int,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
      struct ethtool_drvinfo *VAR_2)
{
 struct dpaa2_eth_priv *VAR_3 = FUNC_1(VAR_1);

 FUNC_3(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));

 FUNC_2(VAR_2->fw_version, sizeof(VAR_2->fw_version),
   "%u.%u", VAR_3->dpni_ver_major, VAR_3->dpni_ver_minor);

 FUNC_3(VAR_2->bus_info, FUNC_0(VAR_1->dev.parent->parent),
  sizeof(VAR_2->bus_info));
}
