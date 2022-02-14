
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dev; } ;
struct fec_enet_private {TYPE_3__* pdev; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct TYPE_4__ {char* name; } ;


 char* FUNC_0 (int *) ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
     struct ethtool_drvinfo *VAR_1)
{
 struct fec_enet_private *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->driver, VAR_2->pdev->dev.driver->name,
  sizeof(VAR_1->driver));
 FUNC_2(VAR_1->version, "Revision: 1.0", sizeof(VAR_1->version));
 FUNC_2(VAR_1->bus_info, FUNC_0(&VAR_0->dev), sizeof(VAR_1->bus_info));
}
