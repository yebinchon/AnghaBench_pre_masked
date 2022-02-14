
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_pcie*,int) ;

__attribute__((used)) static u8 FUNC_1(struct dw_pcie *VAR_1, u8 VAR_2,
      u8 VAR_3)
{
 u8 VAR_4, VAR_5;
 u16 VAR_6;

 if (!VAR_2)
  return 0;

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 VAR_4 = (VAR_6 & 0x00ff);

 if (VAR_4 > VAR_0)
  return 0;

 if (VAR_4 == VAR_3)
  return VAR_2;

 VAR_5 = (VAR_6 & 0xff00) >> 8;
 return FUNC_1(VAR_1, VAR_5, VAR_3);
}
