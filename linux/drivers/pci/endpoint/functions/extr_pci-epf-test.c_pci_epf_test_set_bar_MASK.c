
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_test {int test_reg_bar; int * reg; struct pci_epc_features* epc_features; } ;
struct pci_epf_bar {int flags; } ;
struct device {int dummy; } ;
struct pci_epf {int func_no; struct pci_epf_bar* bar; struct device dev; struct pci_epc* epc; } ;
struct pci_epc_features {int reserved_bar; } ;
struct pci_epc {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct pci_epf_test* FUNC_1 (struct pci_epf*) ;
 int FUNC_2 (struct pci_epc*,int ,struct pci_epf_bar*) ;
 int FUNC_3 (struct pci_epf*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pci_epf *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6;
 struct pci_epf_bar *VAR_7;
 struct pci_epc *VAR_8 = VAR_3->epc;
 struct device *VAR_9 = &VAR_3->dev;
 struct pci_epf_test *VAR_10 = FUNC_1(VAR_3);
 enum pci_barno VAR_11 = VAR_10->test_reg_bar;
 const struct pci_epc_features *VAR_12;

 VAR_12 = VAR_10->epc_features;

 for (VAR_4 = VAR_0; VAR_4 <= VAR_1; VAR_4 += VAR_5) {
  VAR_7 = &VAR_3->bar[VAR_4];





  VAR_5 = (VAR_7->flags & VAR_2) ? 2 : 1;

  if (!!(VAR_12->reserved_bar & (1 << VAR_4)))
   continue;

  VAR_6 = FUNC_2(VAR_8, VAR_3->func_no, VAR_7);
  if (VAR_6) {
   FUNC_3(VAR_3, VAR_10->reg[VAR_4], VAR_4);
   FUNC_0(VAR_9, "Failed to set BAR%d\n", VAR_4);
   if (VAR_4 == VAR_11)
    return VAR_6;
  }
 }

 return 0;
}
