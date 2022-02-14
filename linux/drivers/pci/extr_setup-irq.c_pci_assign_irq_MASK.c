
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_host_bridge {int (* map_irq ) (struct pci_dev*,int,int) ;int (* swizzle_irq ) (struct pci_dev*,int*) ;} ;
struct pci_dev {int irq; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,char*,...) ;
 struct pci_host_bridge* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;

void FUNC_6(struct pci_dev *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4 = -1;
 int VAR_5 = 0;
 struct pci_host_bridge *VAR_6 = FUNC_1(VAR_2->bus);

 if (!(VAR_6->map_irq)) {
  FUNC_0(VAR_2, "runtime IRQ mapping not provided by arch\n");
  return;
 }







 FUNC_2(VAR_2, VAR_1, &VAR_3);

 if (VAR_3 > 4)
  VAR_3 = 1;

 if (VAR_3) {

  if (VAR_6->swizzle_irq)
   VAR_4 = (*(VAR_6->swizzle_irq))(VAR_2, &VAR_3);





  VAR_5 = (*(VAR_6->map_irq))(VAR_2, VAR_4, VAR_3);
  if (VAR_5 == -1)
   VAR_5 = 0;
 }
 VAR_2->irq = VAR_5;

 FUNC_0(VAR_2, "assign IRQ: got %d\n", VAR_2->irq);



 FUNC_3(VAR_2, VAR_0, VAR_5);
}
