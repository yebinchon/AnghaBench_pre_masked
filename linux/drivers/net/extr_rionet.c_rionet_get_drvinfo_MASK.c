
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rionet_private {TYPE_1__* mport; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_2__ {char* name; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 struct rionet_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
          struct ethtool_drvinfo *VAR_3)
{
 struct rionet_private *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_1(VAR_3->fw_version, "n/a", sizeof(VAR_3->fw_version));
 FUNC_1(VAR_3->bus_info, VAR_4->mport->name, sizeof(VAR_3->bus_info));
}
