
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netxen_adapter {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,int,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_5, struct ethtool_drvinfo *VAR_6)
{
 struct netxen_adapter *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;

 FUNC_4(VAR_6->driver, VAR_4,
  sizeof(VAR_6->driver));
 FUNC_4(VAR_6->version, VAR_3,
  sizeof(VAR_6->version));
 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_9 = FUNC_0(VAR_7, VAR_1);
 VAR_10 = FUNC_0(VAR_7, VAR_2);
 FUNC_3(VAR_6->fw_version, sizeof(VAR_6->fw_version),
  "%d.%d.%d", VAR_8, VAR_9, VAR_10);

 FUNC_4(VAR_6->bus_info, FUNC_2(VAR_7->pdev),
  sizeof(VAR_6->bus_info));
}
