
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rockchip_pcie {int dummy; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct rockchip_pcie*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rockchip_pcie *VAR_11,
         int VAR_12, int VAR_13, u8 VAR_14,
         u32 VAR_15, u32 VAR_16)
{
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;

 if (VAR_12 >= VAR_3)
  return -VAR_2;
 if (VAR_14 + 1 < 8)
  return -VAR_2;
 if (VAR_14 > 63)
  return -VAR_2;
 if (VAR_12 == 0) {
  if (VAR_0 < (2ULL << VAR_14))
   return -VAR_2;
 }
 if (VAR_12 != 0) {
  if (VAR_1 < (2ULL << VAR_14))
   return -VAR_2;
 }

 VAR_20 = (VAR_12 << VAR_4);

 VAR_17 = VAR_14 & VAR_7;
 VAR_17 |= VAR_15 & VAR_6;
 VAR_18 = VAR_16;
 VAR_19 = (1 << 23 | VAR_13);

 FUNC_0(VAR_11, VAR_17,
       VAR_5 + VAR_20);
 FUNC_0(VAR_11, VAR_18,
       VAR_8 + VAR_20);
 FUNC_0(VAR_11, VAR_19,
       VAR_9 + VAR_20);
 FUNC_0(VAR_11, 0,
       VAR_10 + VAR_20);

 return 0;
}
