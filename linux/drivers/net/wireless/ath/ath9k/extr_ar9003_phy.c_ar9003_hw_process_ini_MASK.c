
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int modes_index; int txchainmask; int rxchainmask; int iniCckfirJapan2484; int iniAdditional; int iniModesFastClock; int iniModesTxGain; int ini_modes_rxgain_xlna; int ini_modes_rx_gain_bounds; int ini_modes_rxgain_bb_postamble; int ini_modes_rxgain_bb_core; int iniModesRxGain; int ini_radio_post_sys2ant; int * iniRadio; int * iniBB; int * iniMac; int * iniSOC; } ;
struct ath9k_channel {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct ath9k_channel*) ;
 scalar_t__ FUNC_5 (struct ath_hw*,struct ath9k_channel*) ;
 scalar_t__ FUNC_6 (struct ath9k_channel*) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_8 (int *,int,unsigned int) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*,int *,int) ;
 int FUNC_13 (struct ath_hw*,int ,int ) ;
 int FUNC_14 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_15 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_16 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_17 (struct ath_hw*,struct ath9k_channel*,int) ;

__attribute__((used)) static int FUNC_18(struct ath_hw *VAR_5,
     struct ath9k_channel *VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8;
 u32 VAR_9;

 if (FUNC_4(VAR_6))
  VAR_9 = FUNC_6(VAR_6) ? 2 : 1;
 else
  VAR_9 = FUNC_6(VAR_6) ? 3 : 4;




 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  FUNC_12(VAR_5, &VAR_5->iniSOC[VAR_8], VAR_9);
  FUNC_12(VAR_5, &VAR_5->iniMac[VAR_8], VAR_9);
  FUNC_12(VAR_5, &VAR_5->iniBB[VAR_8], VAR_9);
  FUNC_12(VAR_5, &VAR_5->iniRadio[VAR_8], VAR_9);
  if (VAR_8 == VAR_3 && FUNC_0(VAR_5))
   FUNC_12(VAR_5,
        &VAR_5->ini_radio_post_sys2ant,
        VAR_9);
 }

 FUNC_9(VAR_5);




 FUNC_8(&VAR_5->iniModesRxGain, 1, VAR_7);

 if (FUNC_0(VAR_5)) {



  if (FUNC_10(VAR_5) == 2) {
   FUNC_8(&VAR_5->ini_modes_rxgain_bb_core,
     1, VAR_7);
   FUNC_8(&VAR_5->ini_modes_rxgain_bb_postamble,
     VAR_9, VAR_7);
  }




  if ((FUNC_10(VAR_5) == 2) ||
      (FUNC_10(VAR_5) == 3)) {
   FUNC_8(&VAR_5->ini_modes_rxgain_xlna,
     VAR_9, VAR_7);
  }
 }

 if (FUNC_2(VAR_5) || FUNC_3(VAR_5))
  FUNC_8(&VAR_5->ini_modes_rx_gain_bounds, VAR_9,
    VAR_7);

 if (FUNC_3(VAR_5) && (FUNC_10(VAR_5) == 0))
  FUNC_8(&VAR_5->ini_modes_rxgain_xlna,
    VAR_9, VAR_7);



 if (FUNC_2(VAR_5) || FUNC_1(VAR_5) || FUNC_3(VAR_5)) {
  int VAR_10 = 1;

  if (FUNC_2(VAR_5))
   VAR_10 = FUNC_15(VAR_5, VAR_6);

  if (FUNC_3(VAR_5))
   VAR_10 =
    FUNC_16(VAR_5, VAR_6);

  if (VAR_10 < 0)
   return -VAR_4;

  FUNC_8(&VAR_5->iniModesTxGain, VAR_10,
    VAR_7);
 } else {
  FUNC_8(&VAR_5->iniModesTxGain, VAR_9, VAR_7);
 }





 if (FUNC_5(VAR_5, VAR_6))
  FUNC_8(&VAR_5->iniModesFastClock,
    VAR_9, VAR_7);




 FUNC_8(&VAR_5->iniAdditional, 1, VAR_7);




 if (VAR_6->channel == 2484) {
  FUNC_12(VAR_5, &VAR_5->iniCckfirJapan2484, 1);

  if (FUNC_1(VAR_5))
   FUNC_7(VAR_5, VAR_0,
          VAR_1, 0);
 }

 VAR_5->modes_index = VAR_9;
 FUNC_11(VAR_5);
 FUNC_14(VAR_5, VAR_6);
 FUNC_13(VAR_5, VAR_5->rxchainmask, VAR_5->txchainmask);
 FUNC_17(VAR_5, VAR_6, 0);

 return 0;
}
