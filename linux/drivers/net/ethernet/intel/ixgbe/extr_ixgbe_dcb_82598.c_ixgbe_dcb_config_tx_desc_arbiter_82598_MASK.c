
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
 int FUNC_1 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;

s32 FUNC_3(struct ixgbe_hw *VAR_11,
      u16 *VAR_12,
      u16 *VAR_13,
      u8 *VAR_14,
      u8 *VAR_15)
{
 u32 VAR_16, VAR_17;
 u8 VAR_18;

 VAR_16 = FUNC_0(VAR_11, VAR_0);


 VAR_16 &= ~VAR_1;
 VAR_16 |= VAR_3;


 VAR_16 |= (0x4 << VAR_2);

 FUNC_2(VAR_11, VAR_0, VAR_16);


 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  VAR_17 = VAR_13[VAR_18];
  VAR_16 = VAR_17 << VAR_7;
  VAR_16 |= VAR_12[VAR_18];
  VAR_16 |= (u32)(VAR_14[VAR_18]) << VAR_4;

  if (VAR_15[VAR_18] == VAR_9)
   VAR_16 |= VAR_5;

  if (VAR_15[VAR_18] == VAR_10)
   VAR_16 |= VAR_6;

  FUNC_2(VAR_11, FUNC_1(VAR_18), VAR_16);
 }

 return 0;
}
