
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct device *VAR_4 = VAR_2->dev.parent;

 FUNC_1(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_1(VAR_3->bus_info, FUNC_0(VAR_4), sizeof(VAR_3->bus_info));
}
