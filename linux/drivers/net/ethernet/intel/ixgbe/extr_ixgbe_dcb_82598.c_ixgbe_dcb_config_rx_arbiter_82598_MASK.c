
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_14 ;
 size_t VAR_15 ;

s32 FUNC_3(struct ixgbe_hw *VAR_16,
     u16 *VAR_17,
     u16 *VAR_18,
     u8 *VAR_19)
{
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 u32 VAR_22 = 0;
 u8 VAR_23 = 0;

 VAR_20 = FUNC_0(VAR_16, VAR_10) | VAR_11;
 FUNC_2(VAR_16, VAR_10, VAR_20);

 VAR_20 = FUNC_0(VAR_16, VAR_4);

 VAR_20 &= ~VAR_5;

 VAR_20 |= VAR_7;

 VAR_20 |= VAR_6;

 FUNC_2(VAR_16, VAR_4, VAR_20);


 for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
  VAR_21 = VAR_17[VAR_23];
  VAR_22 = VAR_18[VAR_23];

  VAR_20 = VAR_21 | (VAR_22 << VAR_9);

  if (VAR_19[VAR_23] == VAR_15)
   VAR_20 |= VAR_8;

  FUNC_2(VAR_16, FUNC_1(VAR_23), VAR_20);
 }

 VAR_20 = FUNC_0(VAR_16, VAR_0);
 VAR_20 |= VAR_3;
 VAR_20 |= VAR_2;
 VAR_20 |= VAR_1;
 FUNC_2(VAR_16, VAR_0, VAR_20);

 VAR_20 = FUNC_0(VAR_16, VAR_12);

 VAR_20 &= ~VAR_13;
 FUNC_2(VAR_16, VAR_12, VAR_20);

 return 0;
}
