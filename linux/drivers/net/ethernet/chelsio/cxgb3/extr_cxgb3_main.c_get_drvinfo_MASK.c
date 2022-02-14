
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int fw_version; int bus_info; int version; int driver; } ;
struct adapter {int pdev; int stats_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 struct port_info* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,char*,char*,int,int,int,int,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct adapter*,scalar_t__*) ;
 int FUNC_14 (struct adapter*,scalar_t__*) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct port_info *VAR_4 = FUNC_7(VAR_2);
 struct adapter *VAR_5 = VAR_4->adapter;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;

 FUNC_10(&VAR_5->stats_lock);
 FUNC_13(VAR_5, &VAR_6);
 FUNC_14(VAR_5, &VAR_7);
 FUNC_11(&VAR_5->stats_lock);

 FUNC_12(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_12(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_12(VAR_3->bus_info, FUNC_8(VAR_5->pdev),
  sizeof(VAR_3->bus_info));
 if (VAR_6)
  FUNC_9(VAR_3->fw_version, sizeof(VAR_3->fw_version),
    "%s %u.%u.%u TP %u.%u.%u",
    FUNC_3(VAR_6) ? "T" : "N",
    FUNC_0(VAR_6),
    FUNC_2(VAR_6),
    FUNC_1(VAR_6),
    FUNC_4(VAR_7),
    FUNC_6(VAR_7),
    FUNC_5(VAR_7));
}
