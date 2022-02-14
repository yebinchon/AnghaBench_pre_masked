
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (int,int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_9, u32 VAR_10)
{
 u32 VAR_11 = VAR_10 & VAR_5;
 u32 VAR_12 = VAR_10 & VAR_3;
 u32 VAR_13 = VAR_11 << 5;
 u32 VAR_14 = 200;
 u32 VAR_15 = 0;
 u32 VAR_16;
 u32 VAR_17;

 if (VAR_11 & VAR_1)
  VAR_15 = VAR_2;


 if (VAR_10 & VAR_8)
  VAR_11 |= VAR_8;

 VAR_11 |= VAR_12;
 VAR_13 |= VAR_12 << 2;
 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {



  if (FUNC_3(VAR_9))
   return VAR_0;

  VAR_16 = FUNC_0(VAR_9, FUNC_1(VAR_9));
  if (!(VAR_16 & (VAR_13 | VAR_11 | VAR_15))) {
   VAR_16 |= VAR_11;
   FUNC_2(VAR_9, FUNC_1(VAR_9), VAR_16);
   FUNC_5(VAR_9);
   FUNC_6(5000, 6000);
   return 0;
  }




  FUNC_5(VAR_9);
  FUNC_6(5000, 10000);
 }






 if (FUNC_3(VAR_9))
  return VAR_0;
 VAR_16 = FUNC_0(VAR_9, FUNC_1(VAR_9));
 if (VAR_16 & (VAR_13 | VAR_15)) {
  VAR_16 |= VAR_11;
  FUNC_2(VAR_9, FUNC_1(VAR_9), VAR_16);
  FUNC_5(VAR_9);
  FUNC_6(5000, 6000);
  return 0;
 }





 if (VAR_16 & VAR_11) {
  u32 VAR_18 = VAR_1 | VAR_6 |
       VAR_7 | VAR_4 |
       VAR_8;

  if (VAR_12)
   VAR_18 |= VAR_3;
  FUNC_4(VAR_9, VAR_18);
  FUNC_5(VAR_9);
  return VAR_0;
 }
 FUNC_5(VAR_9);

 return VAR_0;
}
