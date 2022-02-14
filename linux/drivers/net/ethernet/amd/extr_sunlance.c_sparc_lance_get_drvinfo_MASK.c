
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int version; int driver; } ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, struct ethtool_drvinfo *VAR_1)
{
 FUNC_0(VAR_1->driver, "sunlance", sizeof(VAR_1->driver));
 FUNC_0(VAR_1->version, "2.02", sizeof(VAR_1->version));
}
