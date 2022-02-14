
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct modal_eep_4k_header {int * rxTxMarginCh; int * xatten2Db; int * xatten2Margin; int * bswAtten; int * bswMargin; int * txRxAttenCh; int * iqCalQCh; int * iqCalICh; int * antCtrlChain; } ;
struct ath_hw {int dummy; } ;
struct ar5416_eeprom_4k {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int,int) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_12,
     struct modal_eep_4k_header *VAR_13,
     struct ar5416_eeprom_4k *VAR_14,
     u8 VAR_15)
{
 FUNC_1(VAR_12);
 FUNC_2(VAR_12, VAR_9,
  FUNC_7(VAR_13->antCtrlChain[0]), 0);

 FUNC_2(VAR_12, FUNC_0(0),
  FUNC_5(VAR_13->iqCalICh[0], VAR_10) |
  FUNC_5(VAR_13->iqCalQCh[0], VAR_11),
  VAR_11 | VAR_10);

 if (FUNC_6(VAR_12) >= VAR_0) {
  VAR_15 = VAR_13->txRxAttenCh[0];

  FUNC_4(VAR_12, VAR_3,
         VAR_5, VAR_13->bswMargin[0]);
  FUNC_4(VAR_12, VAR_3,
         VAR_4, VAR_13->bswAtten[0]);
  FUNC_4(VAR_12, VAR_3,
         VAR_7,
         VAR_13->xatten2Margin[0]);
  FUNC_4(VAR_12, VAR_3,
         VAR_6, VAR_13->xatten2Db[0]);


  FUNC_4(VAR_12, VAR_3 + 0x1000,
         VAR_5,
         VAR_13->bswMargin[0]);
  FUNC_4(VAR_12, VAR_3 + 0x1000,
         VAR_4, VAR_13->bswAtten[0]);
  FUNC_4(VAR_12, VAR_3 + 0x1000,
         VAR_7,
         VAR_13->xatten2Margin[0]);
  FUNC_4(VAR_12, VAR_3 + 0x1000,
         VAR_6,
         VAR_13->xatten2Db[0]);
 }

 FUNC_4(VAR_12, VAR_8,
        VAR_1, VAR_15);
 FUNC_4(VAR_12, VAR_8,
        VAR_2, VAR_13->rxTxMarginCh[0]);

 FUNC_4(VAR_12, VAR_8 + 0x1000,
        VAR_1, VAR_15);
 FUNC_4(VAR_12, VAR_8 + 0x1000,
        VAR_2, VAR_13->rxTxMarginCh[0]);
 FUNC_3(VAR_12);
}
