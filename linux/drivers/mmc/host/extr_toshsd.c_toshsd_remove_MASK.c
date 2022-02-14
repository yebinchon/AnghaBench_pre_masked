
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshsd_host {int mmc; int ioaddr; } ;
struct pci_dev {int irq; } ;


 int FUNC_0 (int ,struct toshsd_host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 struct toshsd_host* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int *) ;
 int FUNC_8 (struct toshsd_host*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct toshsd_host *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(VAR_1->mmc);
 FUNC_8(VAR_1);
 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_5(VAR_0, VAR_1->ioaddr);
 FUNC_6(VAR_0);
 FUNC_1(VAR_1->mmc);
 FUNC_7(VAR_0, ((void*)0));
 FUNC_3(VAR_0);
}
