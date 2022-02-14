
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int msi_enabled; int irq; int dev; } ;
struct TYPE_2__ {int multi_cap; } ;
struct msi_desc {int irq; int list; TYPE_1__ msi_attrib; } ;
struct irq_affinity {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct msi_desc*,unsigned int,unsigned int) ;
 struct msi_desc* FUNC_5 (struct pci_dev*,int,struct irq_affinity*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*,int,int ) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_2, int VAR_3,
          struct irq_affinity *VAR_4)
{
 struct msi_desc *VAR_5;
 int VAR_6;
 unsigned VAR_7;

 FUNC_8(VAR_2, 0);

 VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;


 VAR_7 = FUNC_3(VAR_5->msi_attrib.multi_cap);
 FUNC_4(VAR_5, VAR_7, VAR_7);

 FUNC_2(&VAR_5->list, FUNC_0(&VAR_2->dev));


 VAR_6 = FUNC_9(VAR_2, VAR_3, VAR_1);
 if (VAR_6) {
  FUNC_4(VAR_5, VAR_7, ~VAR_7);
  FUNC_1(VAR_2);
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_2);
 if (VAR_6) {
  FUNC_4(VAR_5, VAR_7, ~VAR_7);
  FUNC_1(VAR_2);
  return VAR_6;
 }

 VAR_6 = FUNC_11(VAR_2);
 if (VAR_6) {
  FUNC_4(VAR_5, VAR_7, ~VAR_7);
  FUNC_1(VAR_2);
  return VAR_6;
 }


 FUNC_7(VAR_2, 0);
 FUNC_8(VAR_2, 1);
 VAR_2->msi_enabled = 1;

 FUNC_10(VAR_2);
 VAR_2->irq = VAR_5->irq;
 return 0;
}
