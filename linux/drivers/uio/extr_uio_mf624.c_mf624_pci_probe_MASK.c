
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {char* name; char* version; TYPE_1__* mem; int irqcontrol; int handler; int irq_flags; int irq; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct TYPE_2__ {int internal_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct uio_info*) ;
 struct uio_info* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct pci_dev*,int,TYPE_1__*,char*) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*,char*) ;
 int FUNC_8 (struct pci_dev*,struct uio_info*) ;
 scalar_t__ FUNC_9 (int *,struct uio_info*) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct uio_info *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct uio_info), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 if (FUNC_5(VAR_6))
  goto out_free;

 if (FUNC_7(VAR_6, "mf624"))
  goto out_disable;

 VAR_8->name = "mf624";
 VAR_8->version = "0.0.1";




 if (FUNC_3(VAR_6, 0, &VAR_8->mem[0], "PCI chipset, interrupts, status "
       "bits, special functions"))
  goto out_release;

 if (FUNC_3(VAR_6, 2, &VAR_8->mem[1], "ADC, DAC, DIO"))
  goto out_unmap0;


 if (FUNC_3(VAR_6, 4, &VAR_8->mem[2], "Counter/timer chip"))
  goto out_unmap1;

 VAR_8->irq = VAR_6->irq;
 VAR_8->irq_flags = VAR_3;
 VAR_8->handler = VAR_4;

 VAR_8->irqcontrol = VAR_5;

 if (FUNC_9(&VAR_6->dev, VAR_8))
  goto out_unmap2;

 FUNC_8(VAR_6, VAR_8);

 return 0;

out_unmap2:
 FUNC_0(VAR_8->mem[2].internal_addr);
out_unmap1:
 FUNC_0(VAR_8->mem[1].internal_addr);
out_unmap0:
 FUNC_0(VAR_8->mem[0].internal_addr);

out_release:
 FUNC_6(VAR_6);

out_disable:
 FUNC_4(VAR_6);

out_free:
 FUNC_1(VAR_8);
 return -VAR_0;
}
