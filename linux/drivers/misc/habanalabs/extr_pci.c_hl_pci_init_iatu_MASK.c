
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct asic_fixed_properties {scalar_t__ pcie_aux_dbi_reg_addr; } ;
struct hl_device {TYPE_1__* asic_funcs; struct asic_fixed_properties asic_prop; } ;
struct TYPE_2__ {scalar_t__ (* set_dram_bar_base ) (struct hl_device*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hl_device*,scalar_t__,int ) ;
 int FUNC_1 (struct hl_device*,int,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct hl_device*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(struct hl_device *VAR_3, u64 VAR_4,
   u64 VAR_5, u64 VAR_6,
   u64 VAR_7)
{
 struct asic_fixed_properties *VAR_8 = &VAR_3->asic_prop;
 u64 VAR_9;
 int VAR_10 = 0;


 VAR_10 = FUNC_1(VAR_3, 0x114, FUNC_2(VAR_4));
 VAR_10 |= FUNC_1(VAR_3, 0x118, FUNC_4(VAR_4));
 VAR_10 |= FUNC_1(VAR_3, 0x100, 0);

 VAR_10 |= FUNC_1(VAR_3, 0x104, 0xC0080000);


 if (!VAR_3->asic_funcs->set_dram_bar_base)
  return -VAR_0;
 if (VAR_3->asic_funcs->set_dram_bar_base(VAR_3, VAR_5) ==
        VAR_2)
  return -VAR_1;



 VAR_9 = VAR_6 + VAR_7 - 1;
 VAR_10 |= FUNC_1(VAR_3, 0x008,
    FUNC_2(VAR_6));
 VAR_10 |= FUNC_1(VAR_3, 0x00C,
    FUNC_4(VAR_6));
 VAR_10 |= FUNC_1(VAR_3, 0x010, FUNC_2(VAR_9));
 VAR_10 |= FUNC_1(VAR_3, 0x014, 0);
 VAR_10 |= FUNC_1(VAR_3, 0x018, 0);
 VAR_10 |= FUNC_1(VAR_3, 0x020, FUNC_4(VAR_9));

 VAR_10 |= FUNC_1(VAR_3, 0x000, 0x00002000);

 VAR_10 |= FUNC_1(VAR_3, 0x004, 0x80000000);


 VAR_10 |= FUNC_0(VAR_3, VAR_8->pcie_aux_dbi_reg_addr, 0);
 VAR_10 |= FUNC_0(VAR_3, VAR_8->pcie_aux_dbi_reg_addr + 4, 0);

 if (VAR_10)
  return -VAR_1;

 return 0;
}
