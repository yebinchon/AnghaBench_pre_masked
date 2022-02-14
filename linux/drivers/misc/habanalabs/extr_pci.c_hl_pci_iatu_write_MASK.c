
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asic_fixed_properties {scalar_t__ pcie_dbi_base_address; scalar_t__ pcie_aux_dbi_reg_addr; } ;
struct hl_device {struct asic_fixed_properties asic_prop; } ;


 int VAR_0 ;
 int FUNC_0 (struct hl_device*,scalar_t__,int) ;

int FUNC_1(struct hl_device *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct asic_fixed_properties *VAR_4 = &VAR_1->asic_prop;
 u32 VAR_5;
 int VAR_6;

 VAR_5 = VAR_2 & 0xFFF;

 VAR_6 = FUNC_0(VAR_1, VAR_4->pcie_aux_dbi_reg_addr, 0x00300000);
 VAR_6 |= FUNC_0(VAR_1, VAR_4->pcie_dbi_base_address + VAR_5,
    VAR_3);

 if (VAR_6)
  return -VAR_0;

 return 0;
}
