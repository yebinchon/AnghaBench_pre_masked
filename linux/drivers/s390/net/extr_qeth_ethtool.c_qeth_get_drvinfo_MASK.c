
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mcl_level; } ;
struct qeth_card {TYPE_1__ info; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 char* FUNC_0 (struct qeth_card*) ;
 char* FUNC_1 (struct qeth_card*) ;
 char* FUNC_2 (struct qeth_card*) ;
 scalar_t__ FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (int ,int,char*,char*,char*,char*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
        struct ethtool_drvinfo *VAR_1)
{
 struct qeth_card *VAR_2 = VAR_0->ml_priv;

 FUNC_5(VAR_1->driver, FUNC_3(VAR_2) ? "qeth_l2" : "qeth_l3",
  sizeof(VAR_1->driver));
 FUNC_5(VAR_1->version, "1.0", sizeof(VAR_1->version));
 FUNC_5(VAR_1->fw_version, VAR_2->info.mcl_level,
  sizeof(VAR_1->fw_version));
 FUNC_4(VAR_1->bus_info, sizeof(VAR_1->bus_info), "%s/%s/%s",
   FUNC_1(VAR_2), FUNC_2(VAR_2), FUNC_0(VAR_2));
}
