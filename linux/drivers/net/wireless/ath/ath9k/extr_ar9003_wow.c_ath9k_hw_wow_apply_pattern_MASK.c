
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int max_patterns; int wow_event_mask2; int wow_event_mask; } ;
struct ath_hw {TYPE_1__ wow; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (struct ath_hw*,int ,int,int) ;
 int FUNC_12 (struct ath_hw*,int ,int ) ;
 int FUNC_13 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_14 (int*,int *,int) ;

int FUNC_15(struct ath_hw *VAR_13, u8 *VAR_14,
          u8 *VAR_15, int VAR_16,
          int VAR_17)
{
 int VAR_18;
 u32 VAR_19, VAR_20;
 u32 VAR_21, VAR_22;

 if (VAR_16 >= VAR_13->wow.max_patterns)
  return -VAR_8;

 if (VAR_16 < VAR_10)
  FUNC_12(VAR_13, VAR_6, FUNC_10(VAR_16));
 else
  FUNC_12(VAR_13, VAR_0, FUNC_10(VAR_16 - 8));

 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18 += 4) {
  FUNC_14(&VAR_19, VAR_14, 4);
  FUNC_13(VAR_13, (FUNC_9(VAR_16) + VAR_18),
     VAR_19);
  VAR_14 += 4;
 }

 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18 += 4) {
  FUNC_14(&VAR_20, VAR_15, 4);
  FUNC_13(VAR_13, (FUNC_8(VAR_16) + VAR_18), VAR_20);
  VAR_15 += 4;
 }

 if (VAR_16 < VAR_10)
  VAR_13->wow.wow_event_mask |=
   FUNC_10(VAR_16 + VAR_7);
 else
  VAR_13->wow.wow_event_mask2 |=
   FUNC_10((VAR_16 - 8) + VAR_7);

 if (VAR_16 < 4) {
  VAR_21 = (VAR_17 & VAR_5) <<
         FUNC_0(VAR_16);
  VAR_22 = FUNC_4(VAR_16);
  FUNC_11(VAR_13, VAR_1, VAR_21, VAR_22);
 } else if (VAR_16 < 8) {
  VAR_21 = (VAR_17 & VAR_5) <<
         FUNC_1(VAR_16);
  VAR_22 = FUNC_5(VAR_16);
  FUNC_11(VAR_13, VAR_2, VAR_21, VAR_22);
 } else if (VAR_16 < 12) {
  VAR_21 = (VAR_17 & VAR_5) <<
         FUNC_2(VAR_16);
  VAR_22 = FUNC_6(VAR_16);
  FUNC_11(VAR_13, VAR_3, VAR_21, VAR_22);
 } else if (VAR_16 < VAR_9) {
  VAR_21 = (VAR_17 & VAR_5) <<
         FUNC_3(VAR_16);
  VAR_22 = FUNC_7(VAR_16);
  FUNC_11(VAR_13, VAR_4, VAR_21, VAR_22);
 }

 return 0;
}
