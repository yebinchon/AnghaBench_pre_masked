
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct greth_private {TYPE_2__* dev; } ;
struct ethtool_drvinfo {int fw_version; int bus_info; int version; int driver; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {char* name; } ;


 char* FUNC_0 (TYPE_2__*) ;
 struct greth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct ethtool_drvinfo *VAR_1)
{
 struct greth_private *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->driver, FUNC_0(VAR_2->dev),
  sizeof(VAR_1->driver));
 FUNC_2(VAR_1->version, "revision: 1.0", sizeof(VAR_1->version));
 FUNC_2(VAR_1->bus_info, VAR_2->dev->bus->name, sizeof(VAR_1->bus_info));
 FUNC_2(VAR_1->fw_version, "N/A", sizeof(VAR_1->fw_version));
}
