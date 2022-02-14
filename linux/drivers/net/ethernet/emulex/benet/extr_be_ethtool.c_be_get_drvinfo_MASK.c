
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct be_adapter {char* fw_ver; char* fw_on_flash; int pdev; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int ) ;
 struct be_adapter* FUNC_1 (struct net_device*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,char*,char*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3,
      struct ethtool_drvinfo *VAR_4)
{
 struct be_adapter *VAR_5 = FUNC_1(VAR_3);

 FUNC_4(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_4(VAR_4->version, VAR_1, sizeof(VAR_4->version));
 if (!FUNC_0(VAR_5->fw_ver, VAR_5->fw_on_flash, VAR_2))
  FUNC_4(VAR_4->fw_version, VAR_5->fw_ver,
   sizeof(VAR_4->fw_version));
 else
  FUNC_3(VAR_4->fw_version, sizeof(VAR_4->fw_version),
    "%s [%s]", VAR_5->fw_ver, VAR_5->fw_on_flash);

 FUNC_4(VAR_4->bus_info, FUNC_2(VAR_5->pdev),
  sizeof(VAR_4->bus_info));
}
