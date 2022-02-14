
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mii_bus {char* name; int phy_mask; int * parent; int reset; int write; int read; struct bgmac* priv; int id; } ;
struct TYPE_3__ {struct bcma_device* core; } ;
struct bgmac {int phyaddr; TYPE_1__ bcma; } ;
struct bcma_device {int core_unit; int dev; TYPE_2__* bus; } ;
struct TYPE_4__ {int num; } ;


 int VAR_0 ;
 struct mii_bus* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 struct mii_bus* FUNC_2 () ;
 int FUNC_3 (struct mii_bus*) ;
 int FUNC_4 (struct mii_bus*) ;
 int FUNC_5 (int ,char*,char*,int,int) ;

struct mii_bus *FUNC_6(struct bgmac *VAR_4)
{
 struct bcma_device *VAR_5 = VAR_4->bcma.core;
 struct mii_bus *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2();
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_6->name = "bcma_mdio mii bus";
 FUNC_5(VAR_6->id, "%s-%d-%d", "bcma_mdio", VAR_5->bus->num,
  VAR_5->core_unit);
 VAR_6->priv = VAR_4;
 VAR_6->read = VAR_1;
 VAR_6->write = VAR_2;
 VAR_6->reset = VAR_3;
 VAR_6->parent = &VAR_5->dev;
 VAR_6->phy_mask = ~(1 << VAR_4->phyaddr);

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "Registration of mii bus failed\n");
  goto err_free_bus;
 }

 return VAR_6;

err_free_bus:
 FUNC_3(VAR_6);
err:
 return FUNC_0(VAR_7);
}
