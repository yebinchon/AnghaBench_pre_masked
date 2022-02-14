
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_drvinfo {int fw_version; int bus_info; int version; int driver; } ;
struct TYPE_5__ {int tprev; int fwrev; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct adapter {TYPE_3__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 struct adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2,
    struct ethtool_drvinfo *VAR_3)
{
 struct adapter *VAR_4 = FUNC_4(VAR_2);

 FUNC_7(VAR_3->driver, VAR_1, sizeof(VAR_3->driver));
 FUNC_7(VAR_3->version, VAR_0, sizeof(VAR_3->version));
 FUNC_7(VAR_3->bus_info, FUNC_5(FUNC_8(VAR_2->dev.parent)),
  sizeof(VAR_3->bus_info));
 FUNC_6(VAR_3->fw_version, sizeof(VAR_3->fw_version),
   "%u.%u.%u.%u, TP %u.%u.%u.%u",
   FUNC_1(VAR_4->params.dev.fwrev),
   FUNC_3(VAR_4->params.dev.fwrev),
   FUNC_2(VAR_4->params.dev.fwrev),
   FUNC_0(VAR_4->params.dev.fwrev),
   FUNC_1(VAR_4->params.dev.tprev),
   FUNC_3(VAR_4->params.dev.tprev),
   FUNC_2(VAR_4->params.dev.tprev),
   FUNC_0(VAR_4->params.dev.tprev));
}
