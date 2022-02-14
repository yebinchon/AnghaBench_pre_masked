
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int flags; } ;
struct ieee80211_channel {scalar_t__ band; } ;
struct ath5k_hw {int ah_bwmode; scalar_t__ ah_version; struct ieee80211_supported_band* sbands; struct ieee80211_channel* ah_current_channel; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


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
 int VAR_12 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*,int,int,struct ieee80211_rate*,int) ;
 int FUNC_5 (struct ath5k_hw*,int) ;
 int FUNC_6 (struct ath5k_hw*,int,int ) ;

int FUNC_7(struct ath5k_hw *VAR_20, unsigned int VAR_21)
{
 struct ieee80211_channel *VAR_22 = VAR_20->ah_current_channel;
 enum nl80211_band VAR_23;
 struct ieee80211_supported_band *VAR_24;
 struct ieee80211_rate *VAR_25;
 u32 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 u32 VAR_31 = FUNC_5(VAR_20, VAR_21);
 u32 VAR_32, VAR_33;

 if (VAR_21 < 6 || VAR_31 > VAR_14)
  return -VAR_15;

 VAR_29 = FUNC_3(VAR_20);
 VAR_30 = FUNC_5(VAR_20, VAR_29 - 2);
 if (VAR_22->band == VAR_19)
  VAR_23 = VAR_19;
 else
  VAR_23 = VAR_18;

 switch (VAR_20->ah_bwmode) {
 case 128:
  VAR_32 = VAR_17;
  break;
 case 129:
  VAR_32 = VAR_16;
  break;
 default:
  VAR_32 = 0;
  break;
 }
 VAR_24 = &VAR_20->sbands[VAR_23];
 VAR_25 = ((void*)0);
 for (VAR_33 = 0; VAR_33 < VAR_24->n_bitrates; VAR_33++) {
  if ((VAR_32 & VAR_24->bitrates[VAR_33].flags) != VAR_32)
   continue;
  VAR_25 = &VAR_24->bitrates[VAR_33];
  break;
 }
 if (FUNC_2(!VAR_25))
  return -VAR_15;

 VAR_26 = FUNC_4(VAR_20, VAR_23, 10, VAR_25, 0);


 VAR_27 = VAR_26 + VAR_29 + 2 * VAR_21;
 VAR_28 = FUNC_5(VAR_20, VAR_27);


 if (VAR_20->ah_version == VAR_0) {
  u32 VAR_34, VAR_35, VAR_36, VAR_37;


  FUNC_6(VAR_20, VAR_31, VAR_13);


  VAR_28 = FUNC_0(VAR_28, VAR_10);


  VAR_34 = VAR_21 + VAR_29;
  VAR_35 = FUNC_5(VAR_20, VAR_34);
  VAR_35 = FUNC_0(VAR_35, VAR_11);


  VAR_36 = VAR_29 + 2 * VAR_21;
  VAR_37 = FUNC_5(VAR_20, VAR_36);


  FUNC_6(VAR_20, (VAR_37 <<
    VAR_7) | VAR_30,
    VAR_6);


  FUNC_6(VAR_20, VAR_35 | VAR_28 |
    (VAR_12 << VAR_9),
    VAR_8);

  return 0;
 }


 FUNC_6(VAR_20, VAR_31, VAR_5);


 FUNC_6(VAR_20, VAR_28, VAR_1);


 FUNC_1(VAR_20, VAR_2,
    VAR_3,
    VAR_29);


 FUNC_6(VAR_20, VAR_30, VAR_4);

 return 0;
}
