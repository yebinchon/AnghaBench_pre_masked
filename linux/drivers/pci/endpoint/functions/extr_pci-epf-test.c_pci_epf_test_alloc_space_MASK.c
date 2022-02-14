
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_test_reg {int dummy; } ;
struct pci_epf_test {int test_reg_bar; void** reg; struct pci_epc_features* epc_features; } ;
struct pci_epf_bar {int flags; } ;
struct device {int dummy; } ;
struct pci_epf {struct pci_epf_bar* bar; struct device dev; } ;
struct pci_epc_features {int reserved_bar; int align; scalar_t__* bar_fixed_size; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t* VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct pci_epf_test* FUNC_1 (struct pci_epf*) ;
 void* FUNC_2 (struct pci_epf*,size_t,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_epf *VAR_5)
{
 struct pci_epf_test *VAR_6 = FUNC_1(VAR_5);
 struct device *VAR_7 = &VAR_5->dev;
 struct pci_epf_bar *VAR_8;
 void *VAR_9;
 int VAR_10, VAR_11;
 enum pci_barno VAR_12 = VAR_6->test_reg_bar;
 const struct pci_epc_features *VAR_13;
 size_t VAR_14;

 VAR_13 = VAR_6->epc_features;

 if (VAR_13->bar_fixed_size[VAR_12])
  VAR_14 = VAR_4[VAR_12];
 else
  VAR_14 = sizeof(struct pci_epf_test_reg);

 VAR_9 = FUNC_2(VAR_5, VAR_14,
       VAR_12, VAR_13->align);
 if (!VAR_9) {
  FUNC_0(VAR_7, "Failed to allocated register space\n");
  return -VAR_2;
 }
 VAR_6->reg[VAR_12] = VAR_9;

 for (VAR_10 = VAR_0; VAR_10 <= VAR_1; VAR_10 += VAR_11) {
  VAR_8 = &VAR_5->bar[VAR_10];
  VAR_11 = (VAR_8->flags & VAR_3) ? 2 : 1;

  if (VAR_10 == VAR_12)
   continue;

  if (!!(VAR_13->reserved_bar & (1 << VAR_10)))
   continue;

  VAR_9 = FUNC_2(VAR_5, VAR_4[VAR_10], VAR_10,
        VAR_13->align);
  if (!VAR_9)
   FUNC_0(VAR_7, "Failed to allocate space for BAR%d\n",
    VAR_10);
  VAR_6->reg[VAR_10] = VAR_9;
 }

 return 0;
}
