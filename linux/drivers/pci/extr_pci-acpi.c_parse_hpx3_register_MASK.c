
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; } ;
struct hpx_type3 {int reg_mask_or; int reg_mask_and; int reg_offset; int match_value; int match_mask_and; int match_offset; int dvsec_rev; int dvsec_id; int pci_exp_vendor_id; int pci_exp_cap_ver; int pci_exp_cap_id; int config_space_location; int function_type; int device_type; } ;



__attribute__((used)) static void FUNC_0(struct hpx_type3 *VAR_0,
    union acpi_object *VAR_1)
{
 VAR_0->device_type = VAR_1[0].integer.value;
 VAR_0->function_type = VAR_1[1].integer.value;
 VAR_0->config_space_location = VAR_1[2].integer.value;
 VAR_0->pci_exp_cap_id = VAR_1[3].integer.value;
 VAR_0->pci_exp_cap_ver = VAR_1[4].integer.value;
 VAR_0->pci_exp_vendor_id = VAR_1[5].integer.value;
 VAR_0->dvsec_id = VAR_1[6].integer.value;
 VAR_0->dvsec_rev = VAR_1[7].integer.value;
 VAR_0->match_offset = VAR_1[8].integer.value;
 VAR_0->match_mask_and = VAR_1[9].integer.value;
 VAR_0->match_value = VAR_1[10].integer.value;
 VAR_0->reg_offset = VAR_1[11].integer.value;
 VAR_0->reg_mask_and = VAR_1[12].integer.value;
 VAR_0->reg_mask_or = VAR_1[13].integer.value;
}
