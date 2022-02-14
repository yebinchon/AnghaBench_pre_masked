
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int* high_water; int* low_water; int pause_time; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ fc; TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

s32 FUNC_7(struct ixgbe_hw *VAR_14, u8 VAR_15, u8 *VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19, VAR_20;
 u8 VAR_21 = 0;


 FUNC_6(VAR_14, VAR_0, VAR_1);


 VAR_20 = FUNC_4(VAR_14, VAR_5);
 VAR_20 |= VAR_6;






 VAR_20 &= ~(VAR_9 | VAR_7);

 if (VAR_14->mac.type >= VAR_13)
  VAR_20 |= VAR_15 << VAR_10;

 if (VAR_15)
  VAR_20 |= VAR_8;

 FUNC_6(VAR_14, VAR_5, VAR_20);

 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
  if (VAR_16[VAR_17] > VAR_21)
   VAR_21 = VAR_16[VAR_17];
 }



 for (VAR_17 = 0; VAR_17 <= VAR_21; VAR_17++) {
  int VAR_22 = 0;

  for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
   if ((VAR_16[VAR_18] == VAR_17) && (VAR_15 & FUNC_0(VAR_18))) {
    VAR_22 = 1;
    break;
   }
  }

  if (VAR_22) {
   VAR_20 = (VAR_14->fc.high_water[VAR_17] << 10) | VAR_2;
   VAR_19 = (VAR_14->fc.low_water[VAR_17] << 10) | VAR_3;
   FUNC_6(VAR_14, FUNC_2(VAR_17), VAR_19);
  } else {






   VAR_20 = FUNC_4(VAR_14, FUNC_5(VAR_17)) - 24576;
   FUNC_6(VAR_14, FUNC_2(VAR_17), 0);
  }

  FUNC_6(VAR_14, FUNC_1(VAR_17), VAR_20);
 }

 for (; VAR_17 < VAR_11; VAR_17++) {
  FUNC_6(VAR_14, FUNC_2(VAR_17), 0);
  FUNC_6(VAR_14, FUNC_1(VAR_17), 0);
 }


 VAR_20 = VAR_14->fc.pause_time * 0x00010001;
 for (VAR_17 = 0; VAR_17 < (VAR_11 / 2); VAR_17++)
  FUNC_6(VAR_14, FUNC_3(VAR_17), VAR_20);


 FUNC_6(VAR_14, VAR_4, VAR_14->fc.pause_time / 2);

 return 0;
}
