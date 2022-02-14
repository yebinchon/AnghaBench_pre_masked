
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {int center_freq; } ;
struct ath5k_hw {int ah_cal_mask; } ;


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
 int FUNC_0 (struct ath5k_hw*,int ,int) ;
 int FUNC_1 (struct ath5k_hw*,int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct ath5k_hw*,char*,int ) ;
 int FUNC_4 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_5 (struct ath5k_hw*,int ) ;
 int FUNC_6 (struct ath5k_hw*,int,int ) ;
 int FUNC_7 (struct ath5k_hw*,int ,int,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int
FUNC_10(struct ath5k_hw *VAR_22,
  struct ieee80211_channel *VAR_23)
{
 u32 VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28;

 if (!(VAR_22->ah_cal_mask & VAR_2))
  return 0;




 FUNC_1(VAR_22, VAR_3,
  VAR_5 | VAR_4);
 VAR_27 = FUNC_5(VAR_22, VAR_0);
 FUNC_6(VAR_22, VAR_27 & ~VAR_1, VAR_0);

 FUNC_9(2000, 2500);




 FUNC_1(VAR_22, VAR_11, VAR_17);
 FUNC_8(10);
 VAR_28 = FUNC_4(VAR_22, VAR_23);




 FUNC_6(VAR_22, VAR_7, VAR_6);
 FUNC_9(1000, 1500);

 FUNC_0(VAR_22, VAR_11, VAR_17);

 if (VAR_28)
  return VAR_28;






 VAR_24 = FUNC_5(VAR_22, VAR_20);
 VAR_25 = FUNC_5(VAR_22, VAR_12);
 VAR_26 = FUNC_5(VAR_22, VAR_8);


 FUNC_6(VAR_22, (VAR_24 & ~(VAR_21)) |
  FUNC_2(-1, VAR_21), VAR_20);

 FUNC_6(VAR_22, (VAR_25 & ~(VAR_13 |
   VAR_14)) |
  FUNC_2(-1, VAR_13) |
  FUNC_2(-127, VAR_14), VAR_12);

 FUNC_6(VAR_22, (VAR_26 & ~(VAR_9 |
   VAR_10)) |
  FUNC_2(2, VAR_9) |
  FUNC_2(12, VAR_10), VAR_8);

 FUNC_8(20);

 FUNC_1(VAR_22, VAR_11, VAR_17);
 FUNC_8(10);
 FUNC_6(VAR_22, VAR_19, VAR_18);
 FUNC_0(VAR_22, VAR_11, VAR_17);

 FUNC_9(1000, 1500);




 FUNC_1(VAR_22, VAR_15, VAR_16);

 VAR_28 = FUNC_7(VAR_22, VAR_15,
   VAR_16, 0, 0);


 FUNC_6(VAR_22, VAR_24, VAR_20);
 FUNC_6(VAR_22, VAR_25, VAR_12);
 FUNC_6(VAR_22, VAR_26, VAR_8);

 if (VAR_28) {
  FUNC_3(VAR_22, "calibration timeout (%uMHz)\n",
    VAR_23->center_freq);
  return VAR_28;
 }




 FUNC_0(VAR_22, VAR_3,
  VAR_5 | VAR_4);
 FUNC_6(VAR_22, VAR_27, VAR_0);

 return 0;
}
