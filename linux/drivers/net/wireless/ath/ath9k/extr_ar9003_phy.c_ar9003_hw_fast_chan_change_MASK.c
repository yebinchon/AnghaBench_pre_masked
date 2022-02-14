
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_hw {int modes_index; int iniCckfirJapan2484; int iniModesFastClock; int ini_modes_rxgain_bb_postamble; int ini_modes_rxgain_bb_core; int iniModesTxGain; int ini_radio_post_sys2ant; int * iniRadio; int * iniBB; int * iniMac; int * iniSOC; } ;
struct ath9k_channel {int channel; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 scalar_t__ FUNC_4 (struct ath_hw*,struct ath9k_channel*) ;
 scalar_t__ FUNC_5 (struct ath9k_channel*) ;
 int FUNC_6 (int *,int,unsigned int) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,int *,int) ;
 int FUNC_9 (struct ath_hw*,struct ath9k_channel*) ;

__attribute__((used)) static int FUNC_10(struct ath_hw *VAR_1,
          struct ath9k_channel *VAR_2,
          u8 *VAR_3)
{
 unsigned int VAR_4 = 0;
 u32 VAR_5, VAR_6;

 if (FUNC_3(VAR_2))
  VAR_5 = FUNC_5(VAR_2) ? 2 : 1;
 else
  VAR_5 = FUNC_5(VAR_2) ? 3 : 4;

 VAR_6 = FUNC_1(VAR_1) ? 1 : VAR_5;

 if (VAR_5 == VAR_1->modes_index) {
  *VAR_3 = 0;
  goto set_rfmode;
 }

 FUNC_8(VAR_1, &VAR_1->iniSOC[VAR_0], VAR_5);
 FUNC_8(VAR_1, &VAR_1->iniMac[VAR_0], VAR_5);
 FUNC_8(VAR_1, &VAR_1->iniBB[VAR_0], VAR_5);
 FUNC_8(VAR_1, &VAR_1->iniRadio[VAR_0], VAR_5);

 if (FUNC_0(VAR_1))
  FUNC_8(VAR_1, &VAR_1->ini_radio_post_sys2ant,
       VAR_5);

 FUNC_6(&VAR_1->iniModesTxGain, VAR_6, VAR_4);

 if (FUNC_0(VAR_1)) {



  if (FUNC_7(VAR_1) == 2) {
   FUNC_6(&VAR_1->ini_modes_rxgain_bb_core,
     1, VAR_4);
   FUNC_6(&VAR_1->ini_modes_rxgain_bb_postamble,
     VAR_5, VAR_4);
  }
 }





 if (FUNC_4(VAR_1, VAR_2))
  FUNC_6(&VAR_1->iniModesFastClock, VAR_5, VAR_4);

 if (FUNC_2(VAR_1))
  FUNC_6(&VAR_1->iniModesFastClock, 1, VAR_4);




 if (VAR_2->channel == 2484)
  FUNC_8(VAR_1, &VAR_1->iniCckfirJapan2484, 1);

 VAR_1->modes_index = VAR_5;
 *VAR_3 = 1;

set_rfmode:
 FUNC_9(VAR_1, VAR_2);
 return 0;
}
