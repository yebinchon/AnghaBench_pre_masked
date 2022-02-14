
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chan_centers {int synth_center; } ;
struct ath_hw {TYPE_1__* eep_ops; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_2__ {int (* get_spur_channel ) (struct ath_hw*,int,int) ;} ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ,int ) ;
 int FUNC_6 (struct ath_hw*,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int) ;
 int FUNC_8 (int,int) ;
 int VAR_24 ;
 int FUNC_9 (struct ath_hw*,struct ath9k_channel*,int) ;
 int FUNC_10 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;
 int FUNC_11 (struct ath_hw*,int,int) ;

__attribute__((used)) static void FUNC_12(struct ath_hw *VAR_25,
        struct ath9k_channel *VAR_26)
{
 int VAR_27 = VAR_3;
 int VAR_28;
 int VAR_29;
 int VAR_30, VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 int VAR_35, VAR_36;
 int VAR_37;
 struct chan_centers VAR_38;

 int VAR_39;
 bool VAR_40 = FUNC_2(VAR_26);

 FUNC_10(VAR_25, VAR_26, &VAR_38);
 VAR_28 = VAR_38.synth_center;

 for (VAR_37 = 0; VAR_37 < VAR_2; VAR_37++) {
  VAR_39 = VAR_25->eep_ops->get_spur_channel(VAR_25, VAR_37, VAR_40);

  if (VAR_3 == VAR_39)
   break;

  if (VAR_40)
   VAR_39 = (VAR_39 / 10) + VAR_0;
  else
   VAR_39 = (VAR_39 / 10) + VAR_1;

  VAR_39 = VAR_39 - VAR_28;

  if (FUNC_3(VAR_26)) {
   if ((VAR_39 > -VAR_23) &&
       (VAR_39 < VAR_23)) {
    VAR_27 = VAR_39;
    break;
   }
  } else if ((VAR_39 > -VAR_22) &&
      (VAR_39 < VAR_22)) {
   VAR_27 = VAR_39;
   break;
  }
 }

 if (VAR_3 == VAR_27) {
  FUNC_5(VAR_25, VAR_4,
       VAR_5);
  return;
 } else {
  FUNC_5(VAR_25, VAR_4,
       VAR_5);
 }

 VAR_29 = VAR_27 * 320;

 VAR_35 = FUNC_6(VAR_25, FUNC_0(0));

 FUNC_1(VAR_25);

 VAR_36 = VAR_35 | (VAR_21 |
   VAR_20 |
   VAR_18 |
   VAR_19);
 FUNC_7(VAR_25, FUNC_0(0), VAR_36);

 VAR_36 = (VAR_11 |
    VAR_9 |
    VAR_12 |
    VAR_10 |
    FUNC_8(VAR_24, VAR_13));
 FUNC_7(VAR_25, VAR_8, VAR_36);

 if (FUNC_3(VAR_26)) {
  if (VAR_27 < 0) {
   VAR_31 = 1;
   VAR_30 = VAR_27 + 10;
  } else {
   VAR_31 = 0;
   VAR_30 = VAR_27 - 10;
  }
 } else {
  VAR_31 = 0;
  VAR_30 = VAR_27;
 }

 if (FUNC_3(VAR_26))
  VAR_33 =
   ((VAR_27 * 262144) /
    10) & VAR_15;
 else
  VAR_33 =
   ((VAR_27 * 524288) /
    10) & VAR_15;

 VAR_34 = FUNC_2(VAR_26) ? 44 : 40;
 VAR_32 = ((VAR_30 * 2048) / VAR_34) & 0x3ff;

 VAR_36 = (VAR_17 |
    FUNC_8(VAR_32, VAR_16) |
    FUNC_8(VAR_33, VAR_15));
 FUNC_7(VAR_25, VAR_14, VAR_36);

 VAR_36 = VAR_31 << VAR_7;
 FUNC_7(VAR_25, VAR_6, VAR_36);

 FUNC_9(VAR_25, VAR_26, VAR_29);

 FUNC_4(VAR_25);
}
