
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct ath5k_eeprom_info {int* ee_noise_floor_thr; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {int ah_noise_floor; int ah_cal_mask; int ah_current_channel; TYPE_1__ ah_capabilities; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath5k_hw*,int ,int) ;
 int FUNC_1 (struct ath5k_hw*,int ,int,int) ;
 int VAR_7 ;
 int FUNC_2 (struct ath5k_hw*,int ,char*,...) ;
 int VAR_8 ;
 size_t FUNC_3 (struct ath5k_hw*,int ) ;
 int FUNC_4 (struct ath5k_hw*) ;
 int FUNC_5 (struct ath5k_hw*) ;
 int FUNC_6 (struct ath5k_hw*,int ) ;
 int FUNC_7 (struct ath5k_hw*,int,int ) ;
 int FUNC_8 (struct ath5k_hw*,int ,int,int ,int) ;
 int FUNC_9 (struct ath5k_hw*,int) ;

void
FUNC_10(struct ath5k_hw *VAR_9)
{
 struct ath5k_eeprom_info *VAR_10 = &VAR_9->ah_capabilities.cap_eeprom;
 u32 VAR_11;
 s16 VAR_12, VAR_13;
 u8 VAR_14;


 if (FUNC_6(VAR_9, VAR_1) & VAR_2) {
  FUNC_2(VAR_9, VAR_8,
   "NF did not complete in calibration window\n");

  return;
 }

 VAR_9->ah_cal_mask |= VAR_0;

 VAR_14 = FUNC_3(VAR_9, VAR_9->ah_current_channel);


 VAR_12 = FUNC_5(VAR_9);
 VAR_13 = VAR_10->ee_noise_floor_thr[VAR_14];

 if (VAR_12 > VAR_13) {
  FUNC_2(VAR_9, VAR_8,
   "noise floor failure detected; "
   "read %d, threshold %d\n",
   VAR_12, VAR_13);

  VAR_12 = VAR_7;
 }

 FUNC_9(VAR_9, VAR_12);
 VAR_12 = FUNC_4(VAR_9);


 VAR_11 = FUNC_6(VAR_9, VAR_5) & ~VAR_6;
 VAR_11 |= (VAR_12 * 2) & VAR_6;
 FUNC_7(VAR_9, VAR_11, VAR_5);

 FUNC_1(VAR_9, VAR_1, VAR_2,
  ~(VAR_3 | VAR_4));

 FUNC_8(VAR_9, VAR_1, VAR_2,
  0, 0);







 VAR_11 = (VAR_11 & ~VAR_6) | ((-50 * 2) & VAR_6);
 FUNC_7(VAR_9, VAR_11, VAR_5);
 FUNC_0(VAR_9, VAR_1,
  VAR_3 |
  VAR_4 |
  VAR_2);

 VAR_9->ah_noise_floor = VAR_12;

 VAR_9->ah_cal_mask &= ~VAR_0;

 FUNC_2(VAR_9, VAR_8,
  "noise floor calibrated: %d\n", VAR_12);
}
