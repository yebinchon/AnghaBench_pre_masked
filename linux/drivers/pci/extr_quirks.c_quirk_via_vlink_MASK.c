
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int irq; int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,char*,int,int) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 u8 VAR_4, VAR_5;


 if (VAR_2 == -1)
  return;

 VAR_5 = VAR_3->irq;


 if (!VAR_5 || VAR_5 > 15)
  return;


 if (VAR_3->bus->number != 0 || FUNC_0(VAR_3->devfn) > VAR_1 ||
     FUNC_0(VAR_3->devfn) < VAR_2)
  return;





 FUNC_2(VAR_3, VAR_0, &VAR_4);
 if (VAR_5 != VAR_4) {
  FUNC_1(VAR_3, "VIA VLink IRQ fixup, from %d to %d\n",
   VAR_4, VAR_5);
  FUNC_4(15);
  FUNC_3(VAR_3, VAR_0, VAR_5);
 }
}
