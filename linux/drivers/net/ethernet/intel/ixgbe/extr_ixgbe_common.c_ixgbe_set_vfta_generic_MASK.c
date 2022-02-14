
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int FUNC_6 (struct ixgbe_hw*,int,int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_4, u32 VAR_5, u32 VAR_6,
      bool VAR_7, bool VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 s32 VAR_13;

 if ((VAR_5 > 4095) || (VAR_6 > 63))
  return VAR_0;
 VAR_9 = VAR_5 / 32;
 VAR_10 = FUNC_0(VAR_5 % 32);
 VAR_11 = FUNC_1(VAR_4, FUNC_2(VAR_9));





 VAR_10 &= VAR_7 ? ~VAR_11 : VAR_11;
 VAR_11 ^= VAR_10;
 if (!(FUNC_1(VAR_4, VAR_2) & VAR_3))
  goto vfta_update;

 VAR_13 = FUNC_6(VAR_4, VAR_5, VAR_8);
 if (VAR_13 < 0) {
  if (VAR_8)
   goto vfta_update;
  return VAR_13;
 }

 VAR_12 = FUNC_1(VAR_4, FUNC_4(VAR_13 * 2 + VAR_6 / 32));


 VAR_12 |= FUNC_0(VAR_6 % 32);
 if (VAR_7)
  goto vlvf_update;


 VAR_12 ^= FUNC_0(VAR_6 % 32);

 if (!VAR_12 &&
     !FUNC_1(VAR_4, FUNC_4(VAR_13 * 2 + 1 - VAR_6 / 32))) {




  if (VAR_10)
   FUNC_5(VAR_4, FUNC_2(VAR_9), VAR_11);


  FUNC_5(VAR_4, FUNC_3(VAR_13), 0);
  FUNC_5(VAR_4, FUNC_4(VAR_13 * 2 + VAR_6 / 32), 0);

  return 0;
 }
 VAR_10 = 0;

vlvf_update:

 FUNC_5(VAR_4, FUNC_4(VAR_13 * 2 + VAR_6 / 32), VAR_12);
 FUNC_5(VAR_4, FUNC_3(VAR_13), VAR_1 | VAR_5);

vfta_update:

 if (VAR_10)
  FUNC_5(VAR_4, FUNC_2(VAR_9), VAR_11);

 return 0;
}
