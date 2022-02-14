
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(u8 VAR_14, u8 VAR_15, u8 VAR_16)
{
 static int VAR_17[2];
 int VAR_18 = 0;
 unsigned long VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;

 FUNC_0(VAR_14 > 1);
 FUNC_0(VAR_16 > 63);
 FUNC_0((VAR_14 == 0) && (VAR_15 > VAR_2));

 if (!VAR_16 && !VAR_17[VAR_14])
  return -VAR_1;

 if (VAR_14 == 0) {
  VAR_23 = VAR_5;
  VAR_22 = (VAR_5 | VAR_9);
  VAR_21 = ((VAR_15 << VAR_10) |
   (VAR_16 << VAR_6));
 } else {
  VAR_23 = VAR_7;
  VAR_22 = (VAR_7 | VAR_11 |
   VAR_4);
  VAR_21 = ((VAR_15 << VAR_12) |
   (VAR_16 << VAR_8));
 }
 VAR_21 &= VAR_22;

 FUNC_2(&VAR_13, VAR_19);

 VAR_20 = FUNC_1(VAR_3);
 if (VAR_20 & VAR_23) {
  if (VAR_16) {
   if ((VAR_20 & VAR_22) != VAR_21) {
    VAR_18 = -VAR_0;
    goto unlock_and_return;
   }
  } else {
   if ((VAR_20 & VAR_22 & ~VAR_23) != VAR_21) {
    VAR_18 = -VAR_1;
    goto unlock_and_return;
   }
  }
 }
 FUNC_4((VAR_21 | (VAR_20 & ~VAR_22)), VAR_3);
 VAR_17[VAR_14] += (VAR_16 ? 1 : -1);

unlock_and_return:
 FUNC_3(&VAR_13, VAR_19);

 return VAR_18;
}
