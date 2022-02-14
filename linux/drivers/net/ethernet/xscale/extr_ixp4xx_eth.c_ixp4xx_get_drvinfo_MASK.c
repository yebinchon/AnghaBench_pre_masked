
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int* firmware; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int driver; } ;


 char* VAR_0 ;
 struct port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,char*,int,int,int,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          struct ethtool_drvinfo *VAR_2)
{
 struct port *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));
 FUNC_1(VAR_2->fw_version, sizeof(VAR_2->fw_version), "%u:%u:%u:%u",
   VAR_3->firmware[0], VAR_3->firmware[1],
   VAR_3->firmware[2], VAR_3->firmware[3]);
 FUNC_2(VAR_2->bus_info, "internal", sizeof(VAR_2->bus_info));
}
