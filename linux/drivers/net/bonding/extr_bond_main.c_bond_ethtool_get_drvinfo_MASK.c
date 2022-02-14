
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
         struct ethtool_drvinfo *VAR_4)
{
 FUNC_1(VAR_4->driver, VAR_1, sizeof(VAR_4->driver));
 FUNC_1(VAR_4->version, VAR_2, sizeof(VAR_4->version));
 FUNC_0(VAR_4->fw_version, sizeof(VAR_4->fw_version), "%d",
   VAR_0);
}
