
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ionic_lif {struct ionic* ionic; } ;
struct TYPE_3__ {int fw_version; } ;
struct TYPE_4__ {TYPE_1__ dev_info; } ;
struct ionic {TYPE_2__ idev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ionic*) ;
 struct ionic_lif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
         struct ethtool_drvinfo *VAR_3)
{
 struct ionic_lif *VAR_4 = FUNC_1(VAR_2);
 struct ionic *VAR_5 = VAR_4->ionic;

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_2(VAR_3->fw_version, VAR_5->idev.dev_info.fw_version,
  sizeof(VAR_3->fw_version));
 FUNC_2(VAR_3->bus_info, FUNC_0(VAR_5),
  sizeof(VAR_3->bus_info));
}
