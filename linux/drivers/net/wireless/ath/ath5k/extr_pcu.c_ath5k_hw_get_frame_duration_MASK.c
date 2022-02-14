
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rate {int bitrate; } ;
struct ath5k_hw {int ah_bwmode; int hw; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef int __le16 ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *,int,int,struct ieee80211_rate*) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct ath5k_hw *VAR_8, enum nl80211_band VAR_9,
  int VAR_10, struct ieee80211_rate *VAR_11, bool VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;


 if (!VAR_8->ah_bwmode) {
  __le16 VAR_22 = FUNC_1(VAR_8->hw,
     ((void*)0), VAR_9, VAR_10, VAR_11);


  VAR_21 = FUNC_2(VAR_22);
  if (VAR_12)
   VAR_21 -= 96;

  return VAR_21;
 }

 VAR_17 = VAR_11->bitrate;
 VAR_14 = VAR_2;
 VAR_15 = VAR_0;
 VAR_16 = VAR_3;

 switch (VAR_8->ah_bwmode) {
 case 129:
  VAR_13 = VAR_7;
  VAR_14 = VAR_1;
  break;
 case 130:
  VAR_13 = VAR_5;
  VAR_14 *= 2;
  VAR_16 *= 2;
  VAR_17 = FUNC_0(VAR_17, 2);
  break;
 case 128:
  VAR_13 = VAR_6;
  VAR_14 *= 4;
  VAR_16 *= 4;
  VAR_17 = FUNC_0(VAR_17, 4);
  break;
 default:
  VAR_13 = VAR_4;
  break;
 }

 VAR_18 = VAR_15 + (VAR_10 << 3);

 VAR_20 = VAR_17 * VAR_16;
 VAR_19 = FUNC_0(VAR_18 * 10, VAR_20);

 VAR_21 = VAR_13 + VAR_14 + (VAR_16 * VAR_19);

 return VAR_21;
}
