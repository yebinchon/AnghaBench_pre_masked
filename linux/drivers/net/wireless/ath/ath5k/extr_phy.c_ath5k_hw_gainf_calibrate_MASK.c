
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ g_state; scalar_t__ g_f_corr; scalar_t__ g_current; } ;
struct ath5k_eeprom_info {scalar_t__ ee_cck_ofdm_gain_delta; } ;
struct TYPE_3__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {scalar_t__ ah_radio_5ghz_revision; TYPE_2__ ah_gain; int * ah_rf_banks; TYPE_1__ ah_capabilities; } ;
typedef enum ath5k_rfgain { ____Placeholder_ath5k_rfgain } ath5k_rfgain ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (struct ath5k_hw*,int ) ;
 scalar_t__ FUNC_3 (struct ath5k_hw*) ;
 scalar_t__ FUNC_4 (struct ath5k_hw*) ;
 int FUNC_5 (struct ath5k_hw*) ;

enum ath5k_rfgain
FUNC_6(struct ath5k_hw *VAR_11)
{
 u32 VAR_12, VAR_13;
 struct ath5k_eeprom_info *VAR_14 = &VAR_11->ah_capabilities.cap_eeprom;

 if (VAR_11->ah_rf_banks == ((void*)0) ||
 VAR_11->ah_gain.g_state == VAR_7)
  return VAR_7;



 if (VAR_11->ah_gain.g_state != VAR_9)
  goto done;



 VAR_12 = FUNC_2(VAR_11, VAR_1);


 if (!(VAR_12 & VAR_3)) {
  VAR_11->ah_gain.g_current = VAR_12 >> VAR_2;
  VAR_13 = FUNC_1(VAR_12, VAR_4);



  if (VAR_13 == VAR_5) {
   if (VAR_11->ah_radio_5ghz_revision >= VAR_10)
    VAR_11->ah_gain.g_current +=
     VAR_14->ee_cck_ofdm_gain_delta;
   else
    VAR_11->ah_gain.g_current +=
     VAR_0;
  }



  if (VAR_11->ah_radio_5ghz_revision >= VAR_10) {
   FUNC_5(VAR_11);
   VAR_11->ah_gain.g_current =
    VAR_11->ah_gain.g_current >= VAR_11->ah_gain.g_f_corr ?
    (VAR_11->ah_gain.g_current - VAR_11->ah_gain.g_f_corr) :
    0;
  }




  if (FUNC_3(VAR_11) &&
  FUNC_0(&VAR_11->ah_gain) &&
  FUNC_4(VAR_11)) {
   VAR_11->ah_gain.g_state = VAR_8;
  } else {
   VAR_11->ah_gain.g_state = VAR_6;
  }
 }

done:
 return VAR_11->ah_gain.g_state;
}
