
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int version; int bus_info; int driver; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_1, struct ethtool_drvinfo *VAR_2)
{
 FUNC_0(VAR_2->driver, "Lantiq ETOP", sizeof(VAR_2->driver));
 FUNC_0(VAR_2->bus_info, "internal", sizeof(VAR_2->bus_info));
 FUNC_0(VAR_2->version, VAR_0, sizeof(VAR_2->version));
}
