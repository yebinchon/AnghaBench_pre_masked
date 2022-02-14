
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smsc9420_pdata {TYPE_3__* mii_bus; int dev; TYPE_2__* pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int phy_mask; int write; int read; struct smsc9420_pdata* priv; int id; int name; } ;
struct TYPE_8__ {int devfn; TYPE_1__* bus; } ;
struct TYPE_7__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct smsc9420_pdata* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct smsc9420_pdata*,int ,int ,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_7)
{
 struct smsc9420_pdata *VAR_8 = FUNC_4(VAR_7);
 int VAR_9 = -VAR_2;

 VAR_8->mii_bus = FUNC_0();
 if (!VAR_8->mii_bus) {
  VAR_9 = -VAR_1;
  goto err_out_1;
 }
 VAR_8->mii_bus->name = VAR_0;
 FUNC_7(VAR_8->mii_bus->id, VAR_3, "%x",
  (VAR_8->pdev->bus->number << 8) | VAR_8->pdev->devfn);
 VAR_8->mii_bus->priv = VAR_8;
 VAR_8->mii_bus->read = VAR_5;
 VAR_8->mii_bus->write = VAR_6;


 VAR_8->mii_bus->phy_mask = ~(1 << 1);

 if (FUNC_2(VAR_8->mii_bus)) {
  FUNC_5(VAR_8, VAR_4, VAR_8->dev, "Error registering mii bus\n");
  goto err_out_free_bus_2;
 }

 if (FUNC_6(VAR_7) < 0) {
  FUNC_5(VAR_8, VAR_4, VAR_8->dev, "Error probing mii bus\n");
  goto err_out_unregister_bus_3;
 }

 return 0;

err_out_unregister_bus_3:
 FUNC_3(VAR_8->mii_bus);
err_out_free_bus_2:
 FUNC_1(VAR_8->mii_bus);
err_out_1:
 return VAR_9;
}
