
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {scalar_t__ reg_base; } ;
struct plx_pci_card {scalar_t__ conf_addr; int (* reset_func ) (struct pci_dev*) ;struct net_device** net_dev; } ;
struct pci_dev {scalar_t__ device; int dev; } ;
struct net_device {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct plx_pci_card*) ;
 struct sja1000_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct plx_pci_card* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,scalar_t__) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_5)
{
 struct plx_pci_card *VAR_6 = FUNC_6(VAR_5);
 struct net_device *VAR_7;
 struct sja1000_priv *VAR_8;
 int VAR_9 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7 = VAR_6->net_dev[VAR_9];
  if (!VAR_7)
   continue;

  FUNC_0(&VAR_5->dev, "Removing %s\n", VAR_7->name);
  FUNC_9(VAR_7);
  VAR_8 = FUNC_4(VAR_7);
  if (VAR_8->reg_base)
   FUNC_7(VAR_5, VAR_8->reg_base);
  FUNC_1(VAR_7);
 }

 VAR_6->reset_func(VAR_5);





 if (VAR_5->device != VAR_1 &&
     VAR_5->device != VAR_0)
  FUNC_2(0x0, VAR_6->conf_addr + VAR_3);
 else
  FUNC_2(0x0, VAR_6->conf_addr + VAR_2);

 if (VAR_6->conf_addr)
  FUNC_7(VAR_5, VAR_6->conf_addr);

 FUNC_3(VAR_6);

 FUNC_5(VAR_5);
}
