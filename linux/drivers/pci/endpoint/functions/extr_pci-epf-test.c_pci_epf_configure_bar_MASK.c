
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_bar {int flags; } ;
struct pci_epf {struct pci_epf_bar* bar; } ;
struct pci_epc_features {int bar_fixed_64bit; scalar_t__* bar_fixed_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void FUNC_0(struct pci_epf *VAR_4,
      const struct pci_epc_features *VAR_5)
{
 struct pci_epf_bar *VAR_6;
 bool VAR_7;
 int VAR_8;

 for (VAR_8 = VAR_0; VAR_8 <= VAR_1; VAR_8++) {
  VAR_6 = &VAR_4->bar[VAR_8];
  VAR_7 = !!(VAR_5->bar_fixed_64bit & (1 << VAR_8));
  if (VAR_7)
   VAR_6->flags |= VAR_2;
  if (VAR_5->bar_fixed_size[VAR_8])
   VAR_3[VAR_8] = VAR_5->bar_fixed_size[VAR_8];
 }
}
