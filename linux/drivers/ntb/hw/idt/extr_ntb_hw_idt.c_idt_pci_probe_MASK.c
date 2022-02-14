
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct idt_ntb_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct idt_ntb_dev*) ;
 int FUNC_1 (struct idt_ntb_dev*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct idt_ntb_dev* FUNC_4 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_5 (struct idt_ntb_dev*) ;
 int FUNC_6 (struct idt_ntb_dev*) ;
 int FUNC_7 (struct idt_ntb_dev*) ;
 int FUNC_8 (struct idt_ntb_dev*) ;
 int FUNC_9 (struct idt_ntb_dev*) ;
 int FUNC_10 (struct idt_ntb_dev*) ;
 int FUNC_11 (struct idt_ntb_dev*) ;
 int FUNC_12 (struct idt_ntb_dev*) ;
 int FUNC_13 (struct idt_ntb_dev*) ;
 int FUNC_14 (struct idt_ntb_dev*) ;
 int FUNC_15 (struct idt_ntb_dev*) ;
 int FUNC_16 (struct idt_ntb_dev*) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_0,
    const struct pci_device_id *VAR_1)
{
 struct idt_ntb_dev *VAR_2;
 int VAR_3;


 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 != 0)
  return VAR_3;


 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);


 VAR_3 = FUNC_13(VAR_2);
 if (VAR_3 != 0)
  return VAR_3;


 (void)FUNC_16(VAR_2);


 FUNC_10(VAR_2);


 VAR_3 = FUNC_12(VAR_2);
 if (VAR_3 != 0)
  goto err_deinit_link;


 FUNC_11(VAR_2);


 FUNC_14(VAR_2);


 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3 != 0)
  goto err_deinit_link;


 VAR_3 = FUNC_15(VAR_2);
 if (VAR_3 != 0)
  goto err_deinit_isr;


 (void)FUNC_8(VAR_2);


 FUNC_2(&VAR_0->dev, "IDT NTB device is ready");


 return 0;

err_deinit_isr:
 FUNC_5(VAR_2);
err_deinit_link:
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);

 return VAR_3;
}
