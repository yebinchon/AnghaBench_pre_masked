
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int mode; int address; int features; TYPE_6__* def; } ;
struct emac_instance {TYPE_5__* phy_dev; TYPE_4__ phy; TYPE_1__* ofdev; int phy_mode; int ndev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {int * ops; int name; int phy_id_mask; int phy_id; } ;
struct TYPE_9__ {int addr; } ;
struct TYPE_11__ {int interface; TYPE_3__ mdio; int supported; TYPE_2__* drv; } ;
struct TYPE_8__ {int name; int phy_id_mask; int phy_id; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 TYPE_6__* FUNC_1 (int *,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 TYPE_5__* FUNC_3 (int ,struct device_node*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct emac_instance *VAR_5,
          struct device_node *VAR_6)
{
 VAR_5->phy.def = FUNC_1(&VAR_5->ofdev->dev, sizeof(*VAR_5->phy.def),
        VAR_2);
 if (!VAR_5->phy.def)
  return -VAR_1;

 VAR_5->phy_dev = FUNC_3(VAR_5->ndev, VAR_6, &VAR_3,
          0, VAR_5->phy_mode);
 if (!VAR_5->phy_dev) {
  FUNC_0(&VAR_5->ofdev->dev, "failed to connect to PHY.\n");
  return -VAR_0;
 }

 VAR_5->phy.def->phy_id = VAR_5->phy_dev->drv->phy_id;
 VAR_5->phy.def->phy_id_mask = VAR_5->phy_dev->drv->phy_id_mask;
 VAR_5->phy.def->name = VAR_5->phy_dev->drv->name;
 VAR_5->phy.def->ops = &VAR_4;
 FUNC_2(&VAR_5->phy.features,
      VAR_5->phy_dev->supported);
 VAR_5->phy.address = VAR_5->phy_dev->mdio.addr;
 VAR_5->phy.mode = VAR_5->phy_dev->interface;
 return 0;
}
