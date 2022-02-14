
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct dw_mci {int regs; int * pdata; int * dev; int irq_flags; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dw_mci* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct dw_mci*) ;
 int VAR_4 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,struct dw_mci*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int,int ) ;
 int * FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_5,
       const struct pci_device_id *VAR_6)
{
 struct dw_mci *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_0(&VAR_5->dev, sizeof(struct dw_mci), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->irq = VAR_5->irq;
 VAR_7->irq_flags = VAR_2;
 VAR_7->dev = &VAR_5->dev;
 VAR_7->pdata = &VAR_4;

 VAR_8 = FUNC_6(VAR_5, 1 << VAR_3, FUNC_2(VAR_5));
 if (VAR_8)
  return VAR_8;

 VAR_7->regs = FUNC_7(VAR_5)[VAR_3];

 FUNC_4(VAR_5);

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_5, VAR_7);

 return 0;
}
