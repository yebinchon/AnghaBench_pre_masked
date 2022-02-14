
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tc35815_local {TYPE_3__* mii_bus; TYPE_2__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {char* name; int * parent; struct net_device* priv; int id; int write; int read; } ;
struct TYPE_8__ {int devfn; int dev; TYPE_1__* bus; } ;
struct TYPE_7__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct tc35815_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4)
{
 struct tc35815_local *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 VAR_5->mii_bus = FUNC_0();
 if (VAR_5->mii_bus == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto err_out;
 }

 VAR_5->mii_bus->name = "tc35815_mii_bus";
 VAR_5->mii_bus->read = VAR_2;
 VAR_5->mii_bus->write = VAR_3;
 FUNC_5(VAR_5->mii_bus->id, VAR_1, "%x",
   (VAR_5->pci_dev->bus->number << 8) | VAR_5->pci_dev->devfn);
 VAR_5->mii_bus->priv = VAR_4;
 VAR_5->mii_bus->parent = &VAR_5->pci_dev->dev;
 VAR_6 = FUNC_2(VAR_5->mii_bus);
 if (VAR_6)
  goto err_out_free_mii_bus;
 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  goto err_out_unregister_bus;
 return 0;

err_out_unregister_bus:
 FUNC_3(VAR_5->mii_bus);
err_out_free_mii_bus:
 FUNC_1(VAR_5->mii_bus);
err_out:
 return VAR_6;
}
