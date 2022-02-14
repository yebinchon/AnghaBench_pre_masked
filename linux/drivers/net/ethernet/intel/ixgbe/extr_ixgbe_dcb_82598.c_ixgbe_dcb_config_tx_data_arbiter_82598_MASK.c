
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;

s32 FUNC_3(struct ixgbe_hw *VAR_13,
      u16 *VAR_14,
      u16 *VAR_15,
      u8 *VAR_16,
      u8 *VAR_17)
{
 u32 VAR_18;
 u8 VAR_19;

 VAR_18 = FUNC_0(VAR_13, VAR_2);

 VAR_18 &= ~VAR_3;

 VAR_18 |= (VAR_4 | VAR_5);

 FUNC_2(VAR_13, VAR_2, VAR_18);


 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_18 = VAR_14[VAR_19];
  VAR_18 |= (u32)(VAR_15[VAR_19]) << VAR_9;
  VAR_18 |= (u32)(VAR_16[VAR_19]) << VAR_6;

  if (VAR_17[VAR_19] == VAR_11)
   VAR_18 |= VAR_7;

  if (VAR_17[VAR_19] == VAR_12)
   VAR_18 |= VAR_8;

  FUNC_2(VAR_13, FUNC_1(VAR_19), VAR_18);
 }


 VAR_18 = FUNC_0(VAR_13, VAR_0);
 VAR_18 |= VAR_1;
 FUNC_2(VAR_13, VAR_0, VAR_18);

 return 0;
}
