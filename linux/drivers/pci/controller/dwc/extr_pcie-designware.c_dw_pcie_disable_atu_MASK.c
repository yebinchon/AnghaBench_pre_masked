
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dummy; } ;
typedef enum dw_pcie_region_type { ____Placeholder_dw_pcie_region_type } dw_pcie_region_type ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dw_pcie*,int ,int) ;

void FUNC_1(struct dw_pcie *VAR_5, int VAR_6,
    enum dw_pcie_region_type VAR_7)
{
 int VAR_8;

 switch (VAR_7) {
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 default:
  return;
 }

 FUNC_0(VAR_5, VAR_4, VAR_8 | VAR_6);
 FUNC_0(VAR_5, VAR_0, (u32)~VAR_1);
}
