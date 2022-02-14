
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {int base_address; int irq; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (struct service_processor*) ;
 int FUNC_5 (struct service_processor*) ;
 int FUNC_6 (struct service_processor*) ;
 scalar_t__ FUNC_7 (struct service_processor*,int ) ;
 int FUNC_8 (struct service_processor*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct service_processor*) ;
 int FUNC_11 (struct pci_dev*) ;
 struct service_processor* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_1)
{
 struct service_processor *VAR_2 = FUNC_12(VAR_1);

 FUNC_0("Unregistering UART\n");
 FUNC_8(VAR_2);
 FUNC_0("Sending OS down message\n");
 if (FUNC_7(VAR_2, VAR_0))
  FUNC_2("failed to get response to 'Send OS State' command\n");
 FUNC_0("Disabling heartbeats\n");
 FUNC_6(VAR_2);
 FUNC_0("Disabling interrupts\n");
 FUNC_1(VAR_2->base_address);
 FUNC_0("Freeing SP irq\n");
 FUNC_3(VAR_2->irq, (void *)VAR_2);
 FUNC_0("Cleaning up\n");
 FUNC_5(VAR_2);
 FUNC_9(VAR_2->base_address);
 FUNC_4(VAR_2);
 FUNC_10(VAR_2);
 FUNC_13(VAR_1);
 FUNC_11(VAR_1);
}
