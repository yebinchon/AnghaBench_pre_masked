
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_28__ {scalar_t__ btdmAntPos; } ;
struct TYPE_27__ {int (* fBtcRead4Byte ) (TYPE_1__*,int) ;int (* fBtcWrite4Byte ) (TYPE_1__*,int,int) ;int (* fBtcWrite1ByteBitMask ) (TYPE_1__*,int,int,int) ;int (* fBtcFillH2c ) (TYPE_1__*,int,int,int*) ;int (* fBtcSetBtReg ) (TYPE_1__*,int ,int,int) ;int (* fBtcSetRfReg ) (TYPE_1__*,int ,int,int,int) ;int (* fBtcWrite1Byte ) (TYPE_1__*,int,int) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;TYPE_2__ boardInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BOARD_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,int*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int) ;
 int FUNC_9 (TYPE_1__*,int,int,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int ,int*) ;
 int FUNC_12 (TYPE_1__*,int,int) ;
 int FUNC_13 (TYPE_1__*,int,int,int) ;
 int FUNC_14 (TYPE_1__*,int,int) ;
 int FUNC_15 (TYPE_1__*,int,int) ;
 int FUNC_16 (TYPE_1__*,int,int,int) ;
 int FUNC_17 (TYPE_1__*,int,int) ;
 int FUNC_18 (TYPE_1__*,int,int,int) ;
 int FUNC_19 (TYPE_1__*,int,int) ;
 int FUNC_20 (TYPE_1__*,int,int,int) ;
 int FUNC_21 (TYPE_1__*,int,int,int*) ;
 int FUNC_22 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_23(
 PBTC_COEXIST VAR_7, u8 VAR_8, bool VAR_9, bool VAR_10
)
{
 PBTC_BOARD_INFO VAR_11 = &VAR_7->boardInfo;
 u32 VAR_12 = 0, VAR_13 = 0;
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 u8 VAR_16[2] = {0};

 VAR_7->fBtcGet(VAR_7, VAR_4, &VAR_14);
 VAR_7->fBtcGet(VAR_7, VAR_5, &VAR_12);

 if ((VAR_12 > 0 && VAR_12 < 0xc0000) || VAR_14)
  VAR_15 = 1;

 if (VAR_9) {
  VAR_7->fBtcWrite1ByteBitMask(VAR_7, 0x39, 0x8, 0x1);
  VAR_7->fBtcWrite1Byte(VAR_7, 0x974, 0xff);
  VAR_7->fBtcWrite1ByteBitMask(VAR_7, 0x944, 0x3, 0x3);
  VAR_7->fBtcWrite1Byte(VAR_7, 0x930, 0x77);
  VAR_7->fBtcWrite1ByteBitMask(VAR_7, 0x67, 0x20, 0x1);

  if (VAR_12 >= 0x180000) {

   VAR_16[0] = 0;
   VAR_7->fBtcFillH2c(VAR_7, 0x6E, 1, VAR_16);
  } else {
   VAR_7->fBtcWrite1Byte(VAR_7, 0x765, 0x0);
  }

  VAR_7->fBtcWrite4Byte(VAR_7, 0x948, 0x0);

  VAR_7->fBtcSetRfReg(VAR_7, VAR_6, 0x1, 0xfffff, 0x0);
  VAR_7->fBtcSetBtReg(VAR_7, VAR_3, 0x3c, 0x01);

  if (VAR_11->btdmAntPos == VAR_2) {

   VAR_16[0] = 0;
  } else {

   VAR_16[0] = 1;
  }

  if (VAR_15) {

   VAR_16[1] = 1;
  } else {

   VAR_16[1] = 0;
  }
  VAR_7->fBtcFillH2c(VAR_7, 0x65, 2, VAR_16);
 }


 if (VAR_15) {
  if (VAR_9) {

   VAR_13 = VAR_7->fBtcRead4Byte(VAR_7, 0x4c);
   VAR_13 &= ~VAR_0;
   VAR_13 |= VAR_1;
   VAR_7->fBtcWrite4Byte(VAR_7, 0x4c, VAR_13);
  }

  VAR_7->fBtcWrite4Byte(VAR_7, 0x948, 0x0);
  switch (VAR_8) {
  case 128:
   VAR_7->fBtcWrite1ByteBitMask(VAR_7, 0x92c, 0x3, 0x1);
   break;
  case 129:
   VAR_7->fBtcWrite1ByteBitMask(VAR_7, 0x92c, 0x3, 0x2);
   break;
  }
 } else {
  if (VAR_9) {

   VAR_13 = VAR_7->fBtcRead4Byte(VAR_7, 0x4c);
   VAR_13 |= VAR_0;
   VAR_13 &= ~VAR_1;
   VAR_7->fBtcWrite4Byte(VAR_7, 0x4c, VAR_13);
  }

  VAR_7->fBtcWrite1ByteBitMask(VAR_7, 0x64, 0x1, 0x0);
  switch (VAR_8) {
  case 128:
   VAR_7->fBtcWrite4Byte(VAR_7, 0x948, 0x0);
   break;
  case 129:
   VAR_7->fBtcWrite4Byte(VAR_7, 0x948, 0x280);
   break;
  }
 }
}
