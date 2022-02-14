
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {char* name; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct cpsw_common {int dev; } ;


 struct cpsw_common* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,int) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
        struct ethtool_drvinfo *VAR_1)
{
 struct cpsw_common *VAR_2 = FUNC_0(VAR_0);
 struct platform_device *VAR_3 = FUNC_2(VAR_2->dev);

 FUNC_1(VAR_1->driver, "cpsw", sizeof(VAR_1->driver));
 FUNC_1(VAR_1->version, "1.0", sizeof(VAR_1->version));
 FUNC_1(VAR_1->bus_info, VAR_3->name, sizeof(VAR_1->bus_info));
}
