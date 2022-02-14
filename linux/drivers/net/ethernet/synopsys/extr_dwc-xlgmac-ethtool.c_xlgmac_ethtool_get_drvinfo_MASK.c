
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int version; } ;
struct xlgmac_pdata {int dev; int drv_ver; int drv_name; TYPE_1__ hw_feat; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int fw_version; int bus_info; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 struct xlgmac_pdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int,char*,int,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6,
           struct ethtool_drvinfo *VAR_7)
{
 struct xlgmac_pdata *VAR_8 = FUNC_2(VAR_6);
 u32 VAR_9 = VAR_8->hw_feat.version;
 u32 VAR_10, VAR_11, VAR_12;

 FUNC_4(VAR_7->driver, VAR_8->drv_name, sizeof(VAR_7->driver));
 FUNC_4(VAR_7->version, VAR_8->drv_ver, sizeof(VAR_7->version));
 FUNC_4(VAR_7->bus_info, FUNC_1(VAR_8->dev),
  sizeof(VAR_7->bus_info));




 VAR_10 = FUNC_0(VAR_9, VAR_3,
          VAR_2);
 VAR_11 = FUNC_0(VAR_9, VAR_1,
        VAR_0);
 VAR_12 = FUNC_0(VAR_9, VAR_5,
          VAR_4);
 FUNC_3(VAR_7->fw_version, sizeof(VAR_7->fw_version),
   "S.D.U: %x.%x.%x", VAR_10, VAR_11, VAR_12);
}
