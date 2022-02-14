
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_drvinfo {int bus_info; int driver; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
      struct ethtool_drvinfo *VAR_1)
{
 FUNC_1(VAR_1->driver, "netsec", sizeof(VAR_1->driver));
 FUNC_1(VAR_1->bus_info, FUNC_0(VAR_0->dev.parent),
  sizeof(VAR_1->bus_info));
}
