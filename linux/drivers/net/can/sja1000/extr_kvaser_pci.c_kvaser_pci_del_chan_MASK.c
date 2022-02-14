
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1000_priv {int reg_base; struct kvaser_pci* priv; } ;
struct net_device {int name; } ;
struct kvaser_pci {int no_channels; int res_addr; TYPE_1__* pci_dev; int conf_addr; struct net_device** slave_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct sja1000_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct sja1000_priv *VAR_1;
 struct kvaser_pci *VAR_2;
 int VAR_3;

 if (!VAR_0)
  return;
 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = VAR_1->priv;
 if (!VAR_2)
  return;

 FUNC_0(&VAR_2->pci_dev->dev, "Removing device %s\n",
   VAR_0->name);


 FUNC_2(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->no_channels - 1; VAR_3++) {
  if (VAR_2->slave_dev[VAR_3]) {
   FUNC_0(&VAR_2->pci_dev->dev, "Removing device %s\n",
     VAR_2->slave_dev[VAR_3]->name);
   FUNC_5(VAR_2->slave_dev[VAR_3]);
   FUNC_1(VAR_2->slave_dev[VAR_3]);
  }
 }
 FUNC_5(VAR_0);

 FUNC_4(VAR_2->pci_dev, VAR_1->reg_base);
 FUNC_4(VAR_2->pci_dev, VAR_2->conf_addr);
 FUNC_4(VAR_2->pci_dev, VAR_2->res_addr);

 FUNC_1(VAR_0);
}
