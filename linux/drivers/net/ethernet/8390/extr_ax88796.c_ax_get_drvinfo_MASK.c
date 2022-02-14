
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int name; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
      struct ethtool_drvinfo *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_1(VAR_2->dev.parent);

 FUNC_0(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_0(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_0(VAR_3->bus_info, VAR_4->name, sizeof(VAR_3->bus_info));
}
