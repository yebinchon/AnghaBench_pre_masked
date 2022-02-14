
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_card {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 char* VAR_0 ;
 struct spider_net_card* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (int ) ;
 char* VAR_1 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_2,
          struct ethtool_drvinfo *VAR_3)
{
 struct spider_net_card *VAR_4;
 VAR_4 = FUNC_0(VAR_2);


 FUNC_2(VAR_3->driver, VAR_1,
  sizeof(VAR_3->driver));
 FUNC_2(VAR_3->version, VAR_0, sizeof(VAR_3->version));
 FUNC_2(VAR_3->fw_version, "no information",
  sizeof(VAR_3->fw_version));
 FUNC_2(VAR_3->bus_info, FUNC_1(VAR_4->pdev),
  sizeof(VAR_3->bus_info));
}
