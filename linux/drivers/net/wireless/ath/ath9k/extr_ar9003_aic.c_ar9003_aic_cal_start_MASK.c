
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath9k_hw_aic {int aic_cal_start_time; int aic_cal_state; scalar_t__ aic_caled_chan; scalar_t__* aic_sram; } ;
struct TYPE_2__ {struct ath9k_hw_aic aic; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_0 (struct ath_hw*,scalar_t__,int ) ;
 int FUNC_1 (struct ath_hw*,scalar_t__) ;
 int FUNC_2 (struct ath_hw*,scalar_t__,int ) ;
 int FUNC_3 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct ath_hw*) ;

__attribute__((used)) static u8 FUNC_6(struct ath_hw *VAR_53, u8 VAR_54)
{
 struct ath9k_hw_aic *VAR_55 = &VAR_53->btcoex_hw.aic;
 int VAR_56;


 FUNC_3(VAR_53, (VAR_42 + 0x3000),
    (VAR_51 |
     VAR_52));

 for (VAR_56 = 0; VAR_56 < VAR_50; VAR_56++) {
  FUNC_3(VAR_53, (VAR_43 + 0x3000), 0);
  VAR_55->aic_sram[VAR_56] = 0;
 }

 FUNC_3(VAR_53, VAR_22,
    (FUNC_4(0, VAR_32) |
     FUNC_4(127, VAR_11) |
     FUNC_4(VAR_54, VAR_12) |
     FUNC_4(37, VAR_31) |
     FUNC_4(1, VAR_4) |
     FUNC_4(0, VAR_9) |
     FUNC_4(0x40, VAR_1) |
     FUNC_4(0, VAR_30)));

 FUNC_3(VAR_53, VAR_23,
    (FUNC_4(0, VAR_32) |
     FUNC_4(1, VAR_4) |
     FUNC_4(0, VAR_9) |
     FUNC_4(0x40, VAR_1) |
     FUNC_4(0, VAR_30)));

 FUNC_3(VAR_53, VAR_24,
    (FUNC_4(8, VAR_3) |
     FUNC_4(0, VAR_2) |
     FUNC_4(1, VAR_45) |
     FUNC_4(37, VAR_46) |
     FUNC_4(5, VAR_44) |
     FUNC_4(15, VAR_40) |
     FUNC_4(0, VAR_41)));

 FUNC_3(VAR_53, VAR_25,
    (FUNC_4(15, VAR_40) |
     FUNC_4(0, VAR_41)));

 FUNC_3(VAR_53, VAR_26,
    (FUNC_4(44, VAR_38) |
     FUNC_4(8, VAR_17) |
     FUNC_4(12, VAR_16) |
     FUNC_4(2, VAR_8) |
     FUNC_4(5, VAR_39) |
     FUNC_4(0, VAR_20) |
     FUNC_4(0, VAR_18) |
     FUNC_4(200, VAR_19)));

 FUNC_3(VAR_53, VAR_27,
    (FUNC_4(2, VAR_33) |
     FUNC_4(1, VAR_34) |
     FUNC_4(1, VAR_37) |
     FUNC_4(2, VAR_35) |
     FUNC_4(10, VAR_36) |
     FUNC_4(2, VAR_21) |
     FUNC_4(1, VAR_13) |
     FUNC_4(1, VAR_14)));

 FUNC_3(VAR_53, VAR_28,
    (FUNC_4(2, VAR_15) |
     FUNC_4(3, VAR_6) |
     FUNC_4(0, VAR_10) |
     FUNC_4(2, VAR_5) |
     FUNC_4(1, VAR_7)));

 FUNC_3(VAR_53, VAR_29,
    (FUNC_4(2, VAR_15) |
     FUNC_4(3, VAR_6) |
     FUNC_4(0, VAR_10) |
     FUNC_4(2, VAR_5) |
     FUNC_4(1, VAR_7)));

 FUNC_5(VAR_53);


 FUNC_3(VAR_53, VAR_49,
    (FUNC_1(VAR_53, VAR_49) |
     VAR_48));

 VAR_55->aic_cal_start_time = FUNC_1(VAR_53, VAR_47);


 FUNC_0(VAR_53, VAR_23, VAR_9);
 FUNC_2(VAR_53, VAR_23, VAR_4);
 FUNC_2(VAR_53, VAR_23, VAR_9);

 VAR_55->aic_caled_chan = 0;
 VAR_55->aic_cal_state = VAR_0;

 return VAR_55->aic_cal_state;
}
