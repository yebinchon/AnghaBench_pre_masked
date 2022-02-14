
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int n_priv_flags; int erom_version; int fw_version; int regdump_len; int bus_info; int version; int driver; } ;
struct TYPE_2__ {int tp_vers; int fw_vers; } ;
struct adapter {TYPE_1__ params; int pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct net_device*) ;
 struct adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,char*,int,int,int,int,...) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct adapter*,int *) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct adapter *VAR_5 = FUNC_6(VAR_3);
 u32 VAR_6;

 FUNC_10(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_10(VAR_4->version, VAR_1,
  sizeof(VAR_4->version));
 FUNC_10(VAR_4->bus_info, FUNC_7(VAR_5->pdev),
  sizeof(VAR_4->bus_info));
 VAR_4->regdump_len = FUNC_5(VAR_3);

 if (!VAR_5->params.fw_vers)
  FUNC_9(VAR_4->fw_version, "N/A");
 else
  FUNC_8(VAR_4->fw_version, sizeof(VAR_4->fw_version),
    "%u.%u.%u.%u, TP %u.%u.%u.%u",
    FUNC_2(VAR_5->params.fw_vers),
    FUNC_4(VAR_5->params.fw_vers),
    FUNC_3(VAR_5->params.fw_vers),
    FUNC_1(VAR_5->params.fw_vers),
    FUNC_2(VAR_5->params.tp_vers),
    FUNC_4(VAR_5->params.tp_vers),
    FUNC_3(VAR_5->params.tp_vers),
    FUNC_1(VAR_5->params.tp_vers));

 if (!FUNC_11(VAR_5, &VAR_6))
  FUNC_8(VAR_4->erom_version, sizeof(VAR_4->erom_version),
    "%u.%u.%u.%u",
    FUNC_2(VAR_6),
    FUNC_4(VAR_6),
    FUNC_3(VAR_6),
    FUNC_1(VAR_6));
 VAR_4->n_priv_flags = FUNC_0(VAR_2);
}
