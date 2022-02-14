
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_drvinfo {int fw_version; int bus_info; int driver; } ;
struct device {TYPE_2__* driver; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
        struct ethtool_drvinfo *VAR_1)
{
 struct device *VAR_2 = VAR_0->dev.parent;

 FUNC_2(VAR_1->driver, VAR_2->driver->name, sizeof(VAR_1->driver));
 FUNC_2(VAR_1->bus_info, FUNC_1(VAR_2), sizeof(VAR_1->bus_info));
 FUNC_0(VAR_0, VAR_1->fw_version, sizeof(VAR_1->fw_version));
}
