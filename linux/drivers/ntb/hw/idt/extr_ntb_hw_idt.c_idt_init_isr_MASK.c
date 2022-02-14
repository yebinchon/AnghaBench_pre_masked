
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct idt_ntb_dev {TYPE_1__ ntb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int,int *,int ,int ,int ,struct idt_ntb_dev*) ;
 int FUNC_3 (struct idt_ntb_dev*,int ) ;
 int FUNC_4 (struct idt_ntb_dev*,int ,int) ;
 int VAR_6 ;
 int FUNC_5 (struct pci_dev*,int,int,int) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_8(struct idt_ntb_dev *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->ntb.pdev;
 u32 VAR_9;
 int VAR_10;


 VAR_10 = FUNC_5(VAR_8, 1, 1, VAR_5 | VAR_4);
 if (VAR_10 != 1) {
  FUNC_1(&VAR_8->dev, "Failed to allocate IRQ vector");
  return VAR_10;
 }


 VAR_10 = FUNC_7(VAR_8, 0);
 if (VAR_10 < 0) {
  FUNC_1(&VAR_8->dev, "Failed to get IRQ vector");
  goto err_free_vectors;
 }


 VAR_10 = FUNC_2(&VAR_8->dev, VAR_10, ((void*)0), VAR_6,
     VAR_2, VAR_3, VAR_7);
 if (VAR_10 != 0) {
  FUNC_1(&VAR_8->dev, "Failed to set MSI IRQ handler, %d", VAR_10);
  goto err_free_vectors;
 }


 VAR_9 = FUNC_3(VAR_7, VAR_1) & ~VAR_0;
 FUNC_4(VAR_7, VAR_1, VAR_9);


 FUNC_0(&VAR_8->dev, "NTB interrupts initialized");

 return 0;

err_free_vectors:
 FUNC_6(VAR_8);

 return VAR_10;
}
