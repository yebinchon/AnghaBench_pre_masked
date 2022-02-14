
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tran_int_desc {int dummy; } ;
struct pci_dev {int devfn; } ;
struct msi_domain_info {struct hv_pcibus_device* data; } ;
struct msi_desc {int dummy; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int * chip_data; } ;
struct hv_pcibus_device {int dummy; } ;
struct hv_pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct hv_pci_dev* FUNC_1 (struct hv_pcibus_device*,int ) ;
 int FUNC_2 (struct hv_pci_dev*,struct tran_int_desc*) ;
 struct tran_int_desc* FUNC_3 (struct irq_data*) ;
 struct msi_desc* FUNC_4 (struct irq_data*) ;
 struct irq_data* FUNC_5 (struct irq_domain*,unsigned int) ;
 int FUNC_6 (struct tran_int_desc*) ;
 struct pci_dev* FUNC_7 (struct msi_desc*) ;
 int FUNC_8 (struct hv_pci_dev*) ;

__attribute__((used)) static void FUNC_9(struct irq_domain *VAR_0, struct msi_domain_info *VAR_1,
   unsigned int VAR_2)
{
 struct hv_pcibus_device *VAR_3;
 struct hv_pci_dev *VAR_4;
 struct pci_dev *VAR_5;
 struct tran_int_desc *VAR_6;
 struct irq_data *VAR_7 = FUNC_5(VAR_0, VAR_2);
 struct msi_desc *VAR_8 = FUNC_4(VAR_7);

 VAR_5 = FUNC_7(VAR_8);
 VAR_3 = VAR_1->data;
 VAR_6 = FUNC_3(VAR_7);
 if (!VAR_6)
  return;

 VAR_7->chip_data = ((void*)0);
 VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_5->devfn));
 if (!VAR_4) {
  FUNC_6(VAR_6);
  return;
 }

 FUNC_2(VAR_4, VAR_6);
 FUNC_8(VAR_4);
}
