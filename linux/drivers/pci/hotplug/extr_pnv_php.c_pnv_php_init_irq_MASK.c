
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct pnv_php_slot {int flags; int irq; int name; int dn; int wq; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,char*,...) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;
 int FUNC_5 (struct pnv_php_slot*,int) ;
 int VAR_9 ;
 int FUNC_6 (int,int ,int ,int ,struct pnv_php_slot*) ;

__attribute__((used)) static void FUNC_7(struct pnv_php_slot *VAR_10, int VAR_11)
{
 struct pci_dev *VAR_12 = VAR_10->pdev;
 u32 VAR_13 = 0;
 u16 VAR_14, VAR_15;
 int VAR_16;


 VAR_10->wq = FUNC_0("pciehp-%s", 0, 0, VAR_10->name);
 if (!VAR_10->wq) {
  FUNC_2(VAR_12, "Cannot alloc workqueue\n");
  FUNC_5(VAR_10, 1);
  return;
 }


 VAR_16 = FUNC_1(VAR_10->dn, "ibm,slot-broken-pdc",
       &VAR_13);
 if (!VAR_16 && VAR_13)
  VAR_10->flags |= VAR_8;


 FUNC_3(VAR_12, VAR_5, &VAR_14);
 if (VAR_10->flags & VAR_8)
  VAR_14 |= VAR_6;
 else
  VAR_14 |= (VAR_7 | VAR_6);
 FUNC_4(VAR_12, VAR_5, VAR_14);


 VAR_16 = FUNC_6(VAR_11, VAR_9, VAR_0,
     VAR_10->name, VAR_10);
 if (VAR_16) {
  FUNC_5(VAR_10, 1);
  FUNC_2(VAR_12, "Error %d enabling IRQ %d\n", VAR_16, VAR_11);
  return;
 }


 FUNC_3(VAR_12, VAR_1, &VAR_15);
 if (VAR_10->flags & VAR_8) {
  VAR_15 &= ~VAR_4;
  VAR_15 |= (VAR_3 |
    VAR_2);
 } else {
  VAR_15 |= (VAR_3 |
    VAR_4 |
    VAR_2);
 }
 FUNC_4(VAR_12, VAR_1, VAR_15);


 VAR_10->irq = VAR_11;
}
