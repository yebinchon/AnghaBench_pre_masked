
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 char* VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
          struct ethtool_drvinfo *VAR_2)
{
 FUNC_1(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));
 FUNC_1(VAR_2->version, "1.00", sizeof(VAR_2->version));
 FUNC_1(VAR_2->bus_info, FUNC_0(VAR_1->dev.parent),
  sizeof(VAR_2->bus_info));
}
