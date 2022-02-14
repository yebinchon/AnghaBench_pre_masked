
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct myri10ge_priv {char* fw_version; int pdev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 char* VAR_0 ;
 struct myri10ge_priv* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_1, struct ethtool_drvinfo *VAR_2)
{
 struct myri10ge_priv *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->driver, "myri10ge", sizeof(VAR_2->driver));
 FUNC_2(VAR_2->version, VAR_0, sizeof(VAR_2->version));
 FUNC_2(VAR_2->fw_version, VAR_3->fw_version, sizeof(VAR_2->fw_version));
 FUNC_2(VAR_2->bus_info, FUNC_1(VAR_3->pdev), sizeof(VAR_2->bus_info));
}
