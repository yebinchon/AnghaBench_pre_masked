
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_dev_data {int handled; scalar_t__ ack_intr; int irq_name; scalar_t__ isr_on; } ;
struct pci_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct xen_pcibk_dev_data* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct pci_dev *VAR_4 = (struct pci_dev *)VAR_3;
 struct xen_pcibk_dev_data *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->isr_on && VAR_5->ack_intr) {
  VAR_5->handled++;
  if ((VAR_5->handled % 1000) == 0) {
   if (FUNC_2(VAR_2)) {
    FUNC_1("%s IRQ line is not shared "
     "with other domains. Turning ISR off\n",
      VAR_5->irq_name);
    VAR_5->ack_intr = 0;
   }
  }
  return VAR_0;
 }
 return VAR_1;
}
