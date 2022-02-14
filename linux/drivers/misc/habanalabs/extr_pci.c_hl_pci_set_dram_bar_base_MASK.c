
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct asic_fixed_properties {scalar_t__ pcie_aux_dbi_reg_addr; } ;
struct hl_device {int dev; struct asic_fixed_properties asic_prop; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hl_device*,scalar_t__,int ) ;
 int FUNC_2 (struct hl_device*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int FUNC_5(struct hl_device *VAR_1, u8 VAR_2, u8 VAR_3,
    u64 VAR_4)
{
 struct asic_fixed_properties *VAR_5 = &VAR_1->asic_prop;
 u32 VAR_6;
 int VAR_7;

 switch (VAR_2) {
 case 0:
  VAR_6 = 0x100;
  break;
 case 1:
  VAR_6 = 0x300;
  break;
 case 2:
  VAR_6 = 0x500;
  break;
 default:
  FUNC_0(VAR_1->dev, "Invalid inbound region %d\n",
   VAR_2);
  return -VAR_0;
 }

 if (VAR_3 != 0 && VAR_3 != 2 && VAR_3 != 4) {
  FUNC_0(VAR_1->dev, "Invalid PCI BAR %d\n", VAR_3);
  return -VAR_0;
 }


 VAR_7 = FUNC_2(VAR_1, VAR_6 + 0x14, FUNC_3(VAR_4));
 VAR_7 |= FUNC_2(VAR_1, VAR_6 + 0x18, FUNC_4(VAR_4));
 VAR_7 |= FUNC_2(VAR_1, VAR_6 + 0x0, 0);

 VAR_7 |= FUNC_2(VAR_1, VAR_6 + 0x4, 0xC0080000 | (VAR_3 << 8));


 VAR_7 |= FUNC_1(VAR_1, VAR_5->pcie_aux_dbi_reg_addr, 0);
 VAR_7 |= FUNC_1(VAR_1, VAR_5->pcie_aux_dbi_reg_addr + 4, 0);

 if (VAR_7)
  FUNC_0(VAR_1->dev, "failed to map DRAM bar to 0x%08llx\n",
   VAR_4);

 return VAR_7;
}
