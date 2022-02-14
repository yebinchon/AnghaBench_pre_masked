
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_dev_data {int enable_intx; int ack_intr; int isr_on; scalar_t__ irq; int irq_name; } ;
struct pci_dev {scalar_t__ hdr_type; scalar_t__ irq; scalar_t__ msix_enabled; scalar_t__ msi_enabled; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int ,scalar_t__,char*,char*,char*,char*,...) ;
 int FUNC_1 (int *,char*,int ,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,struct pci_dev*) ;
 struct xen_pcibk_dev_data* FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (scalar_t__,int ,int ,int ,struct pci_dev*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_3, int VAR_4)
{
 struct xen_pcibk_dev_data *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_3);
 if (!VAR_5)
  return;


 if (VAR_3->hdr_type != VAR_1)
  return;

 if (VAR_4) {
  VAR_5->enable_intx = 0;
  VAR_5->ack_intr = 0;
 }
 VAR_7 = VAR_5->enable_intx;


 if (!VAR_7 && !VAR_5->isr_on)
  return;





 if (VAR_7)
  VAR_5->irq = VAR_3->irq;





 if (VAR_5->irq == 0)
  goto out;

 FUNC_0(&VAR_3->dev, "%s: #%d %s %s%s %s-> %s\n",
  VAR_5->irq_name,
  VAR_5->irq,
  FUNC_4(VAR_3) ? "on" : "off",
  VAR_3->msi_enabled ? "MSI" : "",
  VAR_3->msix_enabled ? "MSI/X" : "",
  VAR_5->isr_on ? "enable" : "disable",
  VAR_7 ? "enable" : "disable");

 if (VAR_7) {




  if (VAR_3->msi_enabled || VAR_3->msix_enabled)
   goto out;

  VAR_6 = FUNC_5(VAR_5->irq,
    VAR_2, VAR_0,
    VAR_5->irq_name, VAR_3);
  if (VAR_6) {
   FUNC_1(&VAR_3->dev, "%s: failed to install fake IRQ " "handler for IRQ %d! (rc:%d)\n",

    VAR_5->irq_name, VAR_5->irq, VAR_6);
   goto out;
  }
 } else {
  FUNC_2(VAR_5->irq, VAR_3);
  VAR_5->irq = 0;
 }
 VAR_5->isr_on = VAR_7;
 VAR_5->ack_intr = VAR_7;
out:
 FUNC_0(&VAR_3->dev, "%s: #%d %s %s%s %s\n",
  VAR_5->irq_name,
  VAR_5->irq,
  FUNC_4(VAR_3) ? "on" : "off",
  VAR_3->msi_enabled ? "MSI" : "",
  VAR_3->msix_enabled ? "MSI/X" : "",
  VAR_7 ? (VAR_5->isr_on ? "enabled" : "failed to enable") :
   (VAR_5->isr_on ? "failed to disable" : "disabled"));
}
