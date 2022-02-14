
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (size_t) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*,int ,size_t) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;

s32 FUNC_2(struct ixgbe_hw *VAR_12,
          u16 *VAR_13,
          u16 *VAR_14,
          u8 *VAR_15,
          u8 *VAR_16,
          u8 *VAR_17)
{
 u32 VAR_18 = 0;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 u8 VAR_21 = 0;





 VAR_18 = VAR_3 | VAR_2 | VAR_1;
 FUNC_1(VAR_12, VAR_0, VAR_18);


 VAR_18 = 0;
 for (VAR_21 = 0; VAR_21 < VAR_10; VAR_21++)
  VAR_18 |= (VAR_17[VAR_21] << (VAR_21 * VAR_8));
 FUNC_1(VAR_12, VAR_7, VAR_18);


 for (VAR_21 = 0; VAR_21 < VAR_9; VAR_21++) {
  VAR_19 = VAR_13[VAR_21];
  VAR_20 = VAR_14[VAR_21];
  VAR_18 = VAR_19 | (VAR_20 << VAR_6);

  VAR_18 |= (u32)(VAR_15[VAR_21]) << VAR_4;

  if (VAR_16[VAR_21] == VAR_11)
   VAR_18 |= VAR_5;

  FUNC_1(VAR_12, FUNC_0(VAR_21), VAR_18);
 }





 VAR_18 = VAR_3 | VAR_2;
 FUNC_1(VAR_12, VAR_0, VAR_18);

 return 0;
}
