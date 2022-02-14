
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct idt_ntb_dev {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct idt_ntb_dev*) ;
 int FUNC_2 (struct idt_ntb_dev*) ;
 int FUNC_3 (struct idt_ntb_dev*) ;
 int FUNC_4 (struct idt_ntb_dev*) ;
 int FUNC_5 (struct idt_ntb_dev*) ;
 struct idt_ntb_dev* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct idt_ntb_dev *VAR_1 = FUNC_6(VAR_0);


 FUNC_1(VAR_1);


 FUNC_5(VAR_1);


 FUNC_2(VAR_1);


 FUNC_3(VAR_1);


 FUNC_4(VAR_1);


 FUNC_0(&VAR_0->dev, "IDT NTB device is removed");


}
