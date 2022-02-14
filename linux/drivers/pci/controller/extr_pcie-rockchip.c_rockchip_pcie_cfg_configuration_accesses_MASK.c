
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rockchip_pcie*,int ) ;
 int FUNC_1 (struct rockchip_pcie*,int,int ) ;

void FUNC_2(
  struct rockchip_pcie *VAR_9, u32 VAR_10)
{
 u32 VAR_11;


 FUNC_1(VAR_9, 0x0, VAR_4);

 FUNC_1(VAR_9,
       (VAR_6 + VAR_7),
       VAR_0);
 FUNC_1(VAR_9, VAR_5,
       VAR_1);
 VAR_11 = FUNC_0(VAR_9, VAR_2);
 VAR_11 &= ~(VAR_8);
 VAR_11 |= (VAR_10 | (0x1 << 23));
 FUNC_1(VAR_9, VAR_11, VAR_2);
 FUNC_1(VAR_9, 0x0, VAR_3);
}
