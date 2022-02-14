
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_pcie*,int,int) ;
 int FUNC_1 (struct dw_pcie*,int ) ;

u8 FUNC_2(struct dw_pcie *VAR_1, u8 VAR_2)
{
 u8 VAR_3;
 u16 VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 VAR_3 = (VAR_4 & 0x00ff);

 return FUNC_0(VAR_1, VAR_3, VAR_2);
}
