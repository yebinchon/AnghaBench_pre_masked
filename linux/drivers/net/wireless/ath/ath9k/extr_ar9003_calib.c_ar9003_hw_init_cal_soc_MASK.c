
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_chainmask; int tx_chainmask; } ;
struct ath_hw {int enabled_cals; int ah_flags; int rxchainmask; int txchainmask; TYPE_1__ caps; } ;
struct ath9k_channel {int dummy; } ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (struct ath_hw*,int ,int ) ;
 int FUNC_5 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct ath_hw*,int) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,int,scalar_t__) ;
 int FUNC_11 (struct ath_hw*,int,int ) ;
 int FUNC_12 (struct ath_hw*,int,int) ;
 int FUNC_13 (struct ath_hw*) ;
 int FUNC_14 (struct ath_hw*) ;
 int FUNC_15 (int) ;

__attribute__((used)) static bool FUNC_16(struct ath_hw *VAR_15,
       struct ath9k_channel *VAR_16)
{
 bool VAR_17 = 0;
 bool VAR_18 = 1;
 bool VAR_19 = 0, VAR_20 = 0;
 int VAR_21 = 0;


 FUNC_11(VAR_15, VAR_15->caps.rx_chainmask, VAR_15->caps.tx_chainmask);

 if (VAR_15->enabled_cals & VAR_13) {
  FUNC_6(VAR_15, VAR_5, VAR_6);
  VAR_19 = 1;
 }

 if (FUNC_2(VAR_16) || FUNC_3(VAR_16))
  goto skip_tx_iqcal;


 FUNC_5(VAR_15, VAR_9,
        VAR_10,
        VAR_11);





 if (VAR_15->enabled_cals & VAR_14) {
  if (FUNC_4(VAR_15, VAR_7,
       VAR_8)) {
    VAR_17 = 1;
  } else {
   VAR_17 = 0;
  }
  VAR_19 = 1;
 } else {
  VAR_20 = 1;
  VAR_19 = 1;
 }




 if (VAR_20) {
  VAR_17 = FUNC_13(VAR_15);
  FUNC_7(VAR_15, VAR_2, VAR_3);
  FUNC_15(5);
  FUNC_7(VAR_15, VAR_2, VAR_4);
 }

 if (FUNC_0(VAR_15) && FUNC_1(VAR_16)) {
  if (!FUNC_8(VAR_15, VAR_17))
   return 0;
 }

skip_tx_iqcal:
 if (VAR_19 || !(VAR_15->ah_flags & VAR_0)) {
  for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++) {
   if (!(VAR_15->rxchainmask & (1 << VAR_21)))
    continue;

   FUNC_10(VAR_15, VAR_21,
        FUNC_1(VAR_16));
  }
  if (!FUNC_0(VAR_15)) {
   VAR_18 = FUNC_14(VAR_15);
   if (!VAR_18)
    return 0;

   if (VAR_17)
    FUNC_12(VAR_15, 0, 0);
  } else {
   if (!VAR_17) {
    VAR_18 = FUNC_14(VAR_15);
    if (!VAR_18)
     return 0;
   } else {
    for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++) {
     VAR_18 = FUNC_14(VAR_15);
     if (!VAR_18)
      return 0;
     FUNC_12(VAR_15, VAR_21, 0);
    }
   }
  }
 }


 FUNC_11(VAR_15, VAR_15->rxchainmask, VAR_15->txchainmask);

 FUNC_9(VAR_15);

 return 1;
}
