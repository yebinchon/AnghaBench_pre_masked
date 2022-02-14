
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct modal_eep_header {int * rxTxMarginCh; int * bswAtten; int * bswMargin; int * xatten2Db; int * xatten2Margin; int * txRxAttenCh; } ;
struct ath_hw {int dummy; } ;
struct ar5416_eeprom_def {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_13,
      struct modal_eep_header *VAR_14,
      struct ar5416_eeprom_def *VAR_15,
      u8 VAR_16, int VAR_17, int VAR_18)
{
 FUNC_1(VAR_13);
 if (FUNC_6(VAR_13) >= VAR_0) {
  VAR_16 = VAR_14->txRxAttenCh[VAR_18];

  if (FUNC_0(VAR_13)) {
   FUNC_4(VAR_13, VAR_3 + VAR_17,
         VAR_8,
         VAR_14->bswMargin[VAR_18]);
   FUNC_4(VAR_13, VAR_3 + VAR_17,
         VAR_7,
         VAR_14->bswAtten[VAR_18]);
   FUNC_4(VAR_13, VAR_3 + VAR_17,
         VAR_10,
         VAR_14->xatten2Margin[VAR_18]);
   FUNC_4(VAR_13, VAR_3 + VAR_17,
         VAR_9,
         VAR_14->xatten2Db[VAR_18]);
  } else {
   FUNC_2(VAR_13, VAR_3 + VAR_17,
    FUNC_5(VAR_14-> bswMargin[VAR_18], VAR_5),
    VAR_5);
   FUNC_2(VAR_13, VAR_3 + VAR_17,
    FUNC_5(VAR_14->bswAtten[VAR_18], VAR_4),
    VAR_4);
  }
 }

 if (FUNC_0(VAR_13)) {
  FUNC_4(VAR_13,
        VAR_11 + VAR_17,
        VAR_1, VAR_16);
  FUNC_4(VAR_13,
        VAR_11 + VAR_17,
        VAR_2, VAR_14->rxTxMarginCh[VAR_18]);
 } else {
  FUNC_2(VAR_13, VAR_11 + VAR_17,
   FUNC_5(VAR_16, VAR_12),
   VAR_12);
  FUNC_2(VAR_13, VAR_3 + VAR_17,
   FUNC_5(VAR_14->rxTxMarginCh[VAR_18], VAR_6),
   VAR_6);
 }
 FUNC_3(VAR_13);
}
