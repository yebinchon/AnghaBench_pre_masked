
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {int hw_value; } ;
struct ath_common {int clockrate; } ;
struct ath5k_hw {int ah_bwmode; scalar_t__ ah_version; scalar_t__ ah_radio; scalar_t__ ah_mac_srev; struct ieee80211_channel* ah_current_channel; } ;


 scalar_t__ VAR_0 ;



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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath5k_hw*,int ,int ,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct ath_common* FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*,int ) ;
 int FUNC_5 (struct ath5k_hw*,int,int ) ;

__attribute__((used)) static void
FUNC_6(struct ath5k_hw *VAR_26)
{
 struct ieee80211_channel *VAR_27 = VAR_26->ah_current_channel;
 struct ath_common *VAR_28 = FUNC_3(VAR_26);
 u32 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;




 switch (VAR_27->hw_value) {
 case 130:
  VAR_33 = 40;
  break;
 case 129:
  VAR_33 = 22;
  break;
 case 128:
 default:
  VAR_33 = 44;
  break;
 }



 switch (VAR_26->ah_bwmode) {
 case 132:
  VAR_33 *= 2;
  break;
 case 133:
  VAR_33 /= 2;
  break;
 case 131:
  VAR_33 /= 4;
  break;
 default:
  break;
 }

 VAR_28->clockrate = VAR_33;





 VAR_32 = VAR_33 - 1;
 VAR_32 = FUNC_1(VAR_32, VAR_19);


 if (VAR_26->ah_version != VAR_0)
  FUNC_2(VAR_26, VAR_1,
     VAR_2,
     VAR_33);


 if ((VAR_26->ah_radio == VAR_15) ||
     (VAR_26->ah_radio == VAR_14) ||
     (VAR_26->ah_radio == VAR_16) ||
     (VAR_26->ah_radio == VAR_12) ||
     (VAR_26->ah_radio == VAR_13))

  VAR_34 = 40 - 1;
 else
  VAR_34 = 32 - 1;
 VAR_34 = FUNC_1(VAR_34, VAR_20);




 VAR_29 = FUNC_4(VAR_26, VAR_21);
 VAR_30 = FUNC_0(VAR_29, VAR_25);
 VAR_31 = FUNC_0(VAR_29, VAR_23);




 VAR_35 = VAR_5;






 if (VAR_26->ah_version == VAR_0) {

  VAR_30 = VAR_8;
  VAR_31 = VAR_3;
 }

 if (VAR_26->ah_mac_srev < VAR_17) {







  VAR_30 = FUNC_1(VAR_30, VAR_24);
  VAR_31 = FUNC_1(VAR_31, VAR_22);
 } else
 switch (VAR_26->ah_bwmode) {
 case 133:
  VAR_30 = FUNC_1(VAR_30 * 2,
    VAR_25);
  VAR_31 = FUNC_1(VAR_4,
    VAR_23);
  VAR_35 = VAR_6;
  break;
 case 131:
  VAR_30 = FUNC_1(VAR_30 * 4,
    VAR_25);
  VAR_31 = FUNC_1(VAR_4,
    VAR_23);
  VAR_35 = VAR_7;
  break;
 case 132:
  VAR_30 = VAR_9;
  VAR_31 = FUNC_1(VAR_31 / 2,
    VAR_23);
  VAR_35 = VAR_5;
  break;
 default:
  break;
 }

 VAR_29 = (VAR_32 | VAR_34 | VAR_30 | VAR_31);
 FUNC_5(VAR_26, VAR_29, VAR_18);


 if (VAR_26->ah_radio == VAR_15) {
  FUNC_2(VAR_26, VAR_10,
     VAR_11,
     VAR_35);
 }
}
