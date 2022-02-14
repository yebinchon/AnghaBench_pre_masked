
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asic_fixed_properties {void* psoc_pci_pll_div_factor; void* psoc_pci_pll_od; void* psoc_pci_pll_nf; void* psoc_pci_pll_nr; } ;
struct hl_device {struct asic_fixed_properties asic_prop; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct hl_device *VAR_4)
{
 struct asic_fixed_properties *VAR_5 = &VAR_4->asic_prop;

 VAR_5->psoc_pci_pll_nr = FUNC_0(VAR_2);
 VAR_5->psoc_pci_pll_nf = FUNC_0(VAR_1);
 VAR_5->psoc_pci_pll_od = FUNC_0(VAR_3);
 VAR_5->psoc_pci_pll_div_factor = FUNC_0(VAR_0);
}
