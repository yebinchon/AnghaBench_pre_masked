
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_epf_test_reg {int status; } ;
struct pci_epf_test {int test_reg_bar; struct pci_epf_test_reg** reg; struct pci_epf* epf; } ;
struct device {int dummy; } ;
struct pci_epf {int func_no; struct pci_epc* epc; struct device dev; } ;
struct pci_epc {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct pci_epc*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pci_epf_test *VAR_4, u8 VAR_5,
       u16 VAR_6)
{
 struct pci_epf *VAR_7 = VAR_4->epf;
 struct device *VAR_8 = &VAR_7->dev;
 struct pci_epc *VAR_9 = VAR_7->epc;
 enum pci_barno VAR_10 = VAR_4->test_reg_bar;
 struct pci_epf_test_reg *VAR_11 = VAR_4->reg[VAR_10];

 VAR_11->status |= VAR_3;

 switch (VAR_5) {
 case 130:
  FUNC_1(VAR_9, VAR_7->func_no, VAR_0, 0);
  break;
 case 129:
  FUNC_1(VAR_9, VAR_7->func_no, VAR_1, VAR_6);
  break;
 case 128:
  FUNC_1(VAR_9, VAR_7->func_no, VAR_2, VAR_6);
  break;
 default:
  FUNC_0(VAR_8, "Failed to raise IRQ, unknown type\n");
  break;
 }
}
