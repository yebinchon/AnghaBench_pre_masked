
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int center_freq; } ;
struct ath5k_hw {int ah_radio; struct ieee80211_channel* ah_current_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;




 int FUNC_1 (struct ath5k_hw*,char*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_3 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_4 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_5 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_6 (struct ath5k_hw*,struct ieee80211_channel*) ;

__attribute__((used)) static int
FUNC_7(struct ath5k_hw *VAR_4,
  struct ieee80211_channel *VAR_5)
{
 int VAR_6;




 if (!FUNC_2(VAR_4, VAR_5)) {
  FUNC_1(VAR_4,
   "channel frequency (%u MHz) out of supported "
   "band range\n",
   VAR_5->center_freq);
  return -VAR_3;
 }




 switch (VAR_4->ah_radio) {
 case 129:
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_5(VAR_4, VAR_5);
  break;
 case 131:
 case 130:
  VAR_6 = FUNC_3(VAR_4, VAR_5);
  break;
 default:
  VAR_6 = FUNC_6(VAR_4, VAR_5);
  break;
 }

 if (VAR_6)
  return VAR_6;


 if (VAR_5->center_freq == 2484) {
  FUNC_0(VAR_4, VAR_0,
    VAR_1);
 } else {
  FUNC_0(VAR_4, VAR_0,
    VAR_2);
 }

 VAR_4->ah_current_channel = VAR_5;

 return 0;
}
