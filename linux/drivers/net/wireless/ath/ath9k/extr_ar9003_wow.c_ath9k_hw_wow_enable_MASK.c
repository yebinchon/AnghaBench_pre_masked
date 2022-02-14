
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int wow_event_mask; } ;
struct ath_hw {TYPE_1__ wow; } ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (int ) ;
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
 int VAR_42 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_6 (struct ath_hw*,int ,int) ;
 int FUNC_7 (struct ath_hw*,int ) ;
 int FUNC_8 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_9 (struct ath_hw*,int ,int) ;
 int FUNC_10 (struct ath_hw*,int ,int) ;
 scalar_t__ FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (struct ath_hw*) ;
 int FUNC_14 (struct ath_hw*) ;

void FUNC_15(struct ath_hw *VAR_45, u32 VAR_46)
{
 u32 VAR_47;
 u32 VAR_48, VAR_49, VAR_50;

 VAR_47 = VAR_45->wow.wow_event_mask;
 FUNC_9(VAR_45, VAR_4, VAR_8 |
          VAR_9 |
          VAR_7 |
          VAR_12);
 FUNC_6(VAR_45, VAR_4, VAR_12);
 FUNC_9(VAR_45, VAR_39,
      FUNC_2(VAR_42));




 FUNC_9(VAR_45, VAR_28, FUNC_1(VAR_25) |
              FUNC_4(VAR_27) |
              FUNC_3(VAR_26));



 if (VAR_46 & VAR_0)
  FUNC_10(VAR_45, VAR_19, VAR_22);
 else
  FUNC_10(VAR_45, VAR_19, VAR_23);




 if (!VAR_46)
  FUNC_10(VAR_45, VAR_35, VAR_34);
 else
  FUNC_10(VAR_45, VAR_35, VAR_44 * 32);




 FUNC_10(VAR_45, VAR_31, VAR_43 * 1000);




 FUNC_14(VAR_45);




 VAR_48 = FUNC_7(VAR_45, VAR_29);


 VAR_48 &= ~VAR_30;

 if (VAR_46 & VAR_1) {
  VAR_48 &= ~VAR_33;
  VAR_47 |= VAR_32;
 } else {
  VAR_48 |= VAR_33;
 }

 FUNC_10(VAR_45, VAR_29, VAR_48);





 FUNC_8(VAR_45, VAR_13, VAR_14,
        VAR_24);

 if (VAR_46 & VAR_0) {
  VAR_47 |= VAR_20;
  FUNC_9(VAR_45, VAR_18, VAR_21);
 } else {
  FUNC_6(VAR_45, VAR_18, VAR_21);
 }




 VAR_49 = FUNC_7(VAR_45, VAR_39);
 VAR_49 |= VAR_36;

 if (VAR_46 & VAR_2) {
  VAR_49 |= VAR_37;
  VAR_47 |= VAR_38;
 } else {
  VAR_49 &= ~VAR_37;
 }

 FUNC_10(VAR_45, VAR_39, VAR_49);





 FUNC_10(VAR_45, VAR_40,
    VAR_41);




 VAR_50 = FUNC_7(VAR_45, VAR_4);
 VAR_50 |= VAR_10 |
   VAR_8 |
   VAR_9;
 VAR_50 &= ~VAR_5;

 if (FUNC_0(VAR_45)) {





  VAR_50 &= ~VAR_10;
  VAR_50 |= VAR_11;
 }

 FUNC_10(VAR_45, VAR_4, VAR_50);




 FUNC_6(VAR_45, VAR_16, VAR_17);


 FUNC_9(VAR_45, VAR_3, FUNC_5(13));

 FUNC_13(VAR_45);

 if (FUNC_11(VAR_45))
  FUNC_10(VAR_45, VAR_15, 0x2);


 FUNC_6(VAR_45, VAR_6, FUNC_5(5));

 FUNC_12(VAR_45);
 VAR_45->wow.wow_event_mask = VAR_47;
}
