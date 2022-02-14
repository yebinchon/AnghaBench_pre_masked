
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rockchip_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct rockchip_pcie*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rockchip_pcie *VAR_8,
         int VAR_9, u8 VAR_10,
         u32 VAR_11, u32 VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 if (VAR_9 > VAR_2)
  return -VAR_0;
 if (VAR_10 + 1 < VAR_3)
  return -VAR_0;
 if (VAR_10 > 63)
  return -VAR_0;

 VAR_15 = (VAR_9 << VAR_1);

 VAR_13 = VAR_10 & VAR_5;
 VAR_13 |= (VAR_11 << 8) & VAR_4;
 VAR_14 = VAR_12;

 FUNC_0(VAR_8, VAR_13, VAR_6 + VAR_15);
 FUNC_0(VAR_8, VAR_14, VAR_7 + VAR_15);

 return 0;
}
