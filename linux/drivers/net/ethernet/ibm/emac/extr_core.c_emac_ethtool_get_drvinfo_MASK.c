
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct emac_instance {int cell_index; TYPE_2__* ofdev; } ;
struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 char* VAR_0 ;
 struct emac_instance* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,char*,int,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
         struct ethtool_drvinfo *VAR_2)
{
 struct emac_instance *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->driver, "ibm_emac", sizeof(VAR_2->driver));
 FUNC_2(VAR_2->version, VAR_0, sizeof(VAR_2->version));
 FUNC_1(VAR_2->bus_info, sizeof(VAR_2->bus_info), "PPC 4xx EMAC-%d %pOF",
   VAR_3->cell_index, VAR_3->ofdev->dev.of_node);
}
