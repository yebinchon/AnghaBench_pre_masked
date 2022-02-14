
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {scalar_t__ msi_cap; int irq; int dev; } ;
struct TYPE_2__ {int is_64; int maskbit; int multi_cap; int multiple; int default_irq; scalar_t__ entry_nr; scalar_t__ is_virtual; scalar_t__ is_msix; } ;
struct msi_desc {int masked; scalar_t__ mask_pos; TYPE_1__ msi_attrib; } ;
struct irq_affinity_desc {int dummy; } ;
struct irq_affinity {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 struct msi_desc* FUNC_1 (int *,int,struct irq_affinity_desc*) ;
 int FUNC_2 (int ) ;
 struct irq_affinity_desc* FUNC_3 (int,struct irq_affinity*) ;
 int FUNC_4 (struct irq_affinity_desc*) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static struct msi_desc *
FUNC_7(struct pci_dev *VAR_6, int VAR_7, struct irq_affinity *VAR_8)
{
 struct irq_affinity_desc *VAR_9 = ((void*)0);
 struct msi_desc *VAR_10;
 u16 VAR_11;

 if (VAR_8)
  VAR_9 = FUNC_3(VAR_7, VAR_8);


 VAR_10 = FUNC_1(&VAR_6->dev, VAR_7, VAR_9);
 if (!VAR_10)
  goto out;

 FUNC_6(VAR_6, VAR_6->msi_cap + VAR_0, &VAR_11);

 VAR_10->msi_attrib.is_msix = 0;
 VAR_10->msi_attrib.is_64 = !!(VAR_11 & VAR_1);
 VAR_10->msi_attrib.is_virtual = 0;
 VAR_10->msi_attrib.entry_nr = 0;
 VAR_10->msi_attrib.maskbit = !!(VAR_11 & VAR_2);
 VAR_10->msi_attrib.default_irq = VAR_6->irq;
 VAR_10->msi_attrib.multi_cap = (VAR_11 & VAR_3) >> 1;
 VAR_10->msi_attrib.multiple = FUNC_2(FUNC_0(VAR_7));

 if (VAR_11 & VAR_1)
  VAR_10->mask_pos = VAR_6->msi_cap + VAR_5;
 else
  VAR_10->mask_pos = VAR_6->msi_cap + VAR_4;


 if (VAR_10->msi_attrib.maskbit)
  FUNC_5(VAR_6, VAR_10->mask_pos, &VAR_10->masked);

out:
 FUNC_4(VAR_9);
 return VAR_10;
}
