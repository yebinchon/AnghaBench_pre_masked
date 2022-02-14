
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct cx88_core {int pci_irqmask; int name; } ;
struct TYPE_9__ {int active; } ;
struct cx8802_dev {TYPE_2__* pci; struct cx88_core* core; TYPE_1__ mpegq; int slock; int pci_lat; int pci_rev; } ;
struct TYPE_10__ {int irq; int revision; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,struct cx8802_dev*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int ,int ,int ,int ,unsigned long long) ;
 int FUNC_12 (int ,int ,int ,int ,struct cx8802_dev*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct cx8802_dev *VAR_5)
{
 struct cx88_core *VAR_6 = VAR_5->core;
 int VAR_7;


 if (FUNC_3(VAR_5->pci))
  return -VAR_0;
 FUNC_9(VAR_5->pci);
 VAR_7 = FUNC_7(VAR_5->pci, FUNC_0(32));
 if (VAR_7) {
  FUNC_10("Oops: no 32bit PCI DMA ???\n");
  return -VAR_0;
 }

 VAR_5->pci_rev = VAR_5->pci->revision;
 FUNC_5(VAR_5->pci, VAR_3, &VAR_5->pci_lat);
 FUNC_11("found at %s, rev: %d, irq: %d, latency: %d, mmio: 0x%llx\n",
  FUNC_4(VAR_5->pci), VAR_5->pci_rev, VAR_5->pci->irq,
  VAR_5->pci_lat,
  (unsigned long long)FUNC_6(VAR_5->pci, 0));


 FUNC_13(&VAR_5->slock);


 FUNC_1(&VAR_5->mpegq.active);


 VAR_7 = FUNC_12(VAR_5->pci->irq, VAR_4,
     VAR_1, VAR_5->core->name, VAR_5);
 if (VAR_7 < 0) {
  FUNC_10("can't get IRQ %d\n", VAR_5->pci->irq);
  return VAR_7;
 }
 FUNC_2(VAR_2, VAR_6->pci_irqmask);


 FUNC_8(VAR_5->pci, VAR_5);
 return 0;
}
