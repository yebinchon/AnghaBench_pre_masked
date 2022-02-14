
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
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,struct idt_ntb_dev*) ;
 int FUNC_2 (struct idt_ntb_dev*,int ) ;
 int FUNC_3 (struct idt_ntb_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_6(struct idt_ntb_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->ntb.pdev;
 u32 VAR_4;


 VAR_4 = FUNC_2(VAR_2, VAR_1) | VAR_0;
 FUNC_3(VAR_2, VAR_1, VAR_4);


 FUNC_1(&VAR_3->dev, FUNC_5(VAR_3, 0), VAR_2);


 FUNC_4(VAR_3);

 FUNC_0(&VAR_3->dev, "NTB interrupts deinitialized");
}
