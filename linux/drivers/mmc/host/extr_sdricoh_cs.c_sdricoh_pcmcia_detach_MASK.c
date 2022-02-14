
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdricoh_host {int pci_dev; int iobase; } ;
struct pcmcia_device {int dev; struct mmc_host* priv; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mmc_host*) ;
 struct sdricoh_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_7(struct pcmcia_device *VAR_0)
{
 struct mmc_host *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_0->dev, "detach\n");


 if (VAR_1) {
  struct sdricoh_host *VAR_2 = FUNC_2(VAR_1);
  FUNC_3(VAR_1);
  FUNC_5(VAR_2->pci_dev, VAR_2->iobase);
  FUNC_4(VAR_2->pci_dev);
  FUNC_1(VAR_1);
 }
 FUNC_6(VAR_0);

}
