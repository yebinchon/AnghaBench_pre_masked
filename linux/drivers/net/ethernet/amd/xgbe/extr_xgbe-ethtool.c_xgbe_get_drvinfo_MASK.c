
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_features {int version; } ;
struct xgbe_prv_data {int dev; struct xgbe_hw_features hw_feat; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int fw_version; int bus_info; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct xgbe_prv_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int,char*,int,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6,
        struct ethtool_drvinfo *VAR_7)
{
 struct xgbe_prv_data *VAR_8 = FUNC_2(VAR_6);
 struct xgbe_hw_features *VAR_9 = &VAR_8->hw_feat;

 FUNC_4(VAR_7->driver, VAR_4, sizeof(VAR_7->driver));
 FUNC_4(VAR_7->version, VAR_5, sizeof(VAR_7->version));
 FUNC_4(VAR_7->bus_info, FUNC_1(VAR_8->dev),
  sizeof(VAR_7->bus_info));
 FUNC_3(VAR_7->fw_version, sizeof(VAR_7->fw_version), "%d.%d.%d",
   FUNC_0(VAR_9->version, VAR_1, VAR_3),
   FUNC_0(VAR_9->version, VAR_1, VAR_0),
   FUNC_0(VAR_9->version, VAR_1, VAR_2));
}
