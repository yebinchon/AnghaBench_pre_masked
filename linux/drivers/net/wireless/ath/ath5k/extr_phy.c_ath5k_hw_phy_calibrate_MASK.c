
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {scalar_t__ hw_value; int center_freq; } ;
struct ath5k_hw {scalar_t__ ah_radio; int ah_cal_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*) ;

int
FUNC_5(struct ath5k_hw *VAR_7,
  struct ieee80211_channel *VAR_8)
{
 int VAR_9;

 if (VAR_7->ah_radio == VAR_3)
  return FUNC_2(VAR_7, VAR_8);

 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_7, VAR_6,
   "No I/Q correction performed (%uMHz)\n",
   VAR_8->center_freq);



  VAR_9 = 0;
 }



 if ((VAR_7->ah_cal_mask & VAR_0) &&
     (VAR_7->ah_radio == VAR_4 ||
      VAR_7->ah_radio == VAR_5) &&
     VAR_8->hw_value != VAR_2)
  FUNC_1(VAR_7);


 if (!(VAR_7->ah_cal_mask & VAR_1))
  FUNC_4(VAR_7);

 return VAR_9;
}
