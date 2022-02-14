
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
        struct ethtool_drvinfo *VAR_2)
{
 FUNC_0(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));
 FUNC_0(VAR_2->version, "0.1", sizeof(VAR_2->version));
 FUNC_0(VAR_2->bus_info, "platform", sizeof(VAR_2->bus_info));
}
