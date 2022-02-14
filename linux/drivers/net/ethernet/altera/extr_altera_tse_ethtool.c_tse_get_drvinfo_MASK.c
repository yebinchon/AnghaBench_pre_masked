
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct altera_tse_private {TYPE_1__* mac_dev; } ;
struct TYPE_2__ {int megacore_revision; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct altera_tse_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,char*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
       struct ethtool_drvinfo *VAR_2)
{
 struct altera_tse_private *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = FUNC_0(&VAR_3->mac_dev->megacore_revision);

 FUNC_4(VAR_2->driver, "altera_tse");
 FUNC_4(VAR_2->version, "v8.0");
 FUNC_2(VAR_2->fw_version, VAR_0, "v%d.%d",
   VAR_4 & 0xFFFF, (VAR_4 & 0xFFFF0000) >> 16);
 FUNC_3(VAR_2->bus_info, "platform");
}
