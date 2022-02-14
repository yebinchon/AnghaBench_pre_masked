
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
        struct ethtool_drvinfo *VAR_3)
{
 FUNC_0(VAR_3->driver, VAR_0,
  sizeof(VAR_3->driver));
 FUNC_0(VAR_3->version, VAR_1,
  sizeof(VAR_3->version));
 FUNC_0(VAR_3->fw_version, "N/A", sizeof(VAR_3->fw_version));
 FUNC_0(VAR_3->bus_info, "platform", sizeof(VAR_3->bus_info));
}
