
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
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (size_t) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (struct ixgbe_hw*,int ,size_t) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;

s32 FUNC_2(struct ixgbe_hw *VAR_16,
        u16 *VAR_17,
        u16 *VAR_18,
        u8 *VAR_19,
        u8 *VAR_20,
        u8 *VAR_21)
{
 u32 VAR_22;
 u8 VAR_23;





 VAR_22 = VAR_4 | VAR_5 |
       (VAR_2 << VAR_3) |
       VAR_1;
 FUNC_1(VAR_16, VAR_0, VAR_22);


 VAR_22 = 0;
 for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++)
  VAR_22 |= (VAR_21[VAR_23] << (VAR_23 * VAR_11));
 FUNC_1(VAR_16, VAR_10, VAR_22);


 for (VAR_23 = 0; VAR_23 < VAR_12; VAR_23++) {
  VAR_22 = VAR_17[VAR_23];
  VAR_22 |= (u32)(VAR_18[VAR_23]) << VAR_9;
  VAR_22 |= (u32)(VAR_19[VAR_23]) << VAR_6;

  if (VAR_20[VAR_23] == VAR_14)
   VAR_22 |= VAR_7;

  if (VAR_20[VAR_23] == VAR_15)
   VAR_22 |= VAR_8;

  FUNC_1(VAR_16, FUNC_0(VAR_23), VAR_22);
 }





 VAR_22 = VAR_4 | VAR_5 |
       (VAR_2 << VAR_3);
 FUNC_1(VAR_16, VAR_0, VAR_22);

 return 0;
}
