
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {struct platform_device* pdev; } ;
struct platform_device {char* name; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 char* VAR_1 ;
 struct xge_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
       struct ethtool_drvinfo *VAR_3)
{
 struct xge_pdata *VAR_4 = FUNC_0(VAR_2);
 struct platform_device *VAR_5 = VAR_4->pdev;

 FUNC_3(VAR_3->driver, "xgene-enet-v2");
 FUNC_3(VAR_3->version, VAR_1);
 FUNC_1(VAR_3->fw_version, VAR_0, "N/A");
 FUNC_2(VAR_3->bus_info, "%s", VAR_5->name);
}
