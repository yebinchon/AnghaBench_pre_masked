
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {char* name; } ;
struct net_device {int dummy; } ;
struct fjes_adapter {struct platform_device* plat_dev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 struct fjes_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
        struct ethtool_drvinfo *VAR_3)
{
 struct fjes_adapter *VAR_4 = FUNC_0(VAR_2);
 struct platform_device *VAR_5;

 VAR_5 = VAR_4->plat_dev;

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->version, VAR_1,
  sizeof(VAR_3->version));

 FUNC_2(VAR_3->fw_version, "none", sizeof(VAR_3->fw_version));
 FUNC_1(VAR_3->bus_info, sizeof(VAR_3->bus_info),
   "platform:%s", VAR_5->name);
}
