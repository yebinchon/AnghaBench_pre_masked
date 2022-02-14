
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_2__ ;
typedef struct TYPE_52__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_53__ {scalar_t__ btdmAntPos; } ;
struct TYPE_52__ {int (* fBtcRead4Byte ) (TYPE_1__*,int) ;int (* fBtcRead1Byte ) (TYPE_1__*,int) ;int (* fBtcWrite4Byte ) (TYPE_1__*,int,int) ;int (* fBtcFillH2c ) (TYPE_1__*,int,int,int*) ;int (* fBtcWrite1ByteBitMask ) (TYPE_1__*,int,int,int) ;int (* fBtcWrite1Byte ) (TYPE_1__*,int,int) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;int (* fBtcSetBtReg ) (TYPE_1__*,int ,int,int) ;int (* fBtcSetRfReg ) (TYPE_1__*,int ,int,int,int) ;TYPE_2__ boardInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BOARD_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int,int*) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (TYPE_1__*,int ,int*) ;
 int FUNC_10 (TYPE_1__*,int,int,int) ;
 int FUNC_11 (TYPE_1__*,int,int,int) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int ,int*) ;
 int FUNC_14 (TYPE_1__*,int,int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*,int,int,int*) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*,int,int) ;
 int FUNC_19 (TYPE_1__*,int) ;
 int FUNC_20 (TYPE_1__*,int,int) ;
 int FUNC_21 (TYPE_1__*,int) ;
 int FUNC_22 (TYPE_1__*,int,int) ;
 int FUNC_23 (TYPE_1__*,int,int) ;
 int FUNC_24 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_25 (TYPE_1__*,int,int,int*) ;
 int FUNC_26 (TYPE_1__*,int,int,int*) ;
 int FUNC_27 (TYPE_1__*,int,int,int) ;
 int FUNC_28 (TYPE_1__*,int,int,int) ;
 int FUNC_29 (TYPE_1__*,int,int,int) ;
 int FUNC_30 (TYPE_1__*,int,int,int) ;
 int FUNC_31 (TYPE_1__*,int,int,int) ;
 int FUNC_32 (TYPE_1__*,int,int,int) ;
 int FUNC_33 (TYPE_1__*,int) ;
 int FUNC_34 (TYPE_1__*,int,int) ;
 int FUNC_35 (TYPE_1__*,int ,int,int) ;
 int FUNC_36 (TYPE_1__*,int,int,int) ;
 int FUNC_37 (TYPE_1__*,int,int,int*) ;
 int FUNC_38 (TYPE_1__*,int,int,int*) ;
 int FUNC_39 (TYPE_1__*,int,int) ;
 int FUNC_40 (TYPE_1__*,int,int) ;
 int FUNC_41 (TYPE_1__*,int,int) ;
 int FUNC_42 (TYPE_1__*,int,int) ;
 int FUNC_43 (TYPE_1__*,int,int) ;
 int FUNC_44 (TYPE_1__*,int,int) ;
 int FUNC_45 (TYPE_1__*,int,int,int*) ;
 int FUNC_46 (TYPE_1__*,int,int) ;
 int FUNC_47 (TYPE_1__*,int,int) ;
 int FUNC_48 (TYPE_1__*,int,int,int) ;
 int FUNC_49 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_50(
 PBTC_COEXIST VAR_11, u8 VAR_12, bool VAR_13, bool VAR_14
)
{
 PBTC_BOARD_INFO VAR_15 = &VAR_11->boardInfo;
 u32 VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 bool VAR_19 = 0;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 u8 VAR_22[2] = {0}, VAR_23 = 0;

 VAR_11->fBtcGet(VAR_11, VAR_5, &VAR_19);
 VAR_11->fBtcGet(VAR_11, VAR_7, &VAR_16);

 if ((VAR_16 > 0 && VAR_16 < 0xc0000) || VAR_19)
  VAR_20 = 1;

 if (VAR_13) {
  VAR_11->fBtcSetRfReg(VAR_11, VAR_9, 0x1, 0xfffff, 0x780);
  VAR_11->fBtcSetBtReg(VAR_11, VAR_4, 0x3c, 0x15);

  if (VAR_16 >= 0x180000) {

   VAR_22[0] = 1;
   VAR_11->fBtcFillH2c(VAR_11, 0x6E, 1, VAR_22);
  } else
   VAR_11->fBtcWrite1Byte(VAR_11, 0x765, 0x18);


  VAR_11->fBtcWrite1Byte(VAR_11, 0x76e, 0x4);

  VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x67, 0x20, 0x1);

  VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x39, 0x8, 0x1);
  VAR_11->fBtcWrite1Byte(VAR_11, 0x974, 0xff);
  VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x944, 0x3, 0x3);
  VAR_11->fBtcWrite1Byte(VAR_11, 0x930, 0x77);
 } else if (VAR_14) {
  if (VAR_16 >= 0x180000) {

   VAR_22[0] = 1;
   VAR_11->fBtcFillH2c(VAR_11, 0x6E, 1, VAR_22);
  } else
   VAR_11->fBtcWrite1Byte(VAR_11, 0x765, 0x18);


  VAR_11->fBtcWrite1Byte(VAR_11, 0x76e, 0x4);

  VAR_11->fBtcGet(VAR_11, VAR_6, &VAR_21);
  if (!VAR_21)
   VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x67, 0x20, 0x0);
  else
   VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x67, 0x20, 0x1);


  VAR_17 = VAR_11->fBtcRead4Byte(VAR_11, 0x4c);
  VAR_17 &= ~VAR_1;
  VAR_17 &= ~VAR_2;
  VAR_11->fBtcWrite4Byte(VAR_11, 0x4c, VAR_17);
 } else {

  if (VAR_16 >= 0x180000) {
   if (VAR_11->fBtcRead1Byte(VAR_11, 0x765) != 0) {
    VAR_22[0] = 0;
    VAR_11->fBtcFillH2c(VAR_11, 0x6E, 1, VAR_22);
   }
  } else {

   while (VAR_18 <= 20) {
    VAR_23 = VAR_11->fBtcRead1Byte(VAR_11, 0x49d);
    VAR_18++;

    if (VAR_23 & VAR_0) {
     FUNC_0(VAR_8, VAR_10, ("[BTCoex], ########### BT is calibrating (wait cnt =%d) ###########\n", VAR_18));
     FUNC_1(50);
    } else {
     FUNC_0(VAR_8, VAR_10, ("[BTCoex], ********** BT is NOT calibrating (wait cnt =%d)**********\n", VAR_18));
     break;
    }
   }


   VAR_11->fBtcWrite1Byte(VAR_11, 0x765, 0x0);
  }

  if (VAR_11->fBtcRead1Byte(VAR_11, 0x76e) != 0xc)

   VAR_11->fBtcWrite1Byte(VAR_11, 0x76e, 0xc);
 }

 if (VAR_20) {
  if (VAR_13) {

   VAR_17 = VAR_11->fBtcRead4Byte(VAR_11, 0x4c);
   VAR_17 &= ~VAR_1;
   VAR_17 |= VAR_2;
   VAR_11->fBtcWrite4Byte(VAR_11, 0x4c, VAR_17);

   VAR_11->fBtcWrite4Byte(VAR_11, 0x948, 0x0);

   if (VAR_15->btdmAntPos == VAR_3) {

    VAR_22[0] = 0;
    VAR_22[1] = 1;
    VAR_11->fBtcFillH2c(VAR_11, 0x65, 2, VAR_22);
   } else {

    VAR_22[0] = 1;
    VAR_22[1] = 1;
    VAR_11->fBtcFillH2c(VAR_11, 0x65, 2, VAR_22);
   }
  }



  switch (VAR_12) {
  case 128:
   if (VAR_15->btdmAntPos == VAR_3)
    VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x92c, 0x3, 0x1);
   else
    VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x92c, 0x3, 0x2);
   break;
  case 130:
   if (VAR_15->btdmAntPos == VAR_3)
    VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x92c, 0x3, 0x2);
   else
    VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x92c, 0x3, 0x1);
   break;
  default:
  case 129:
   if (VAR_15->btdmAntPos == VAR_3)
    VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x92c, 0x3, 0x1);
   else
    VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x92c, 0x3, 0x2);
   break;
  }

 } else {
  if (VAR_13) {

   VAR_17 = VAR_11->fBtcRead4Byte(VAR_11, 0x4c);
   VAR_17 |= VAR_1;
   VAR_17 &= ~VAR_2;
   VAR_11->fBtcWrite4Byte(VAR_11, 0x4c, VAR_17);


   VAR_11->fBtcWrite1ByteBitMask(VAR_11, 0x64, 0x1, 0x0);

   if (VAR_15->btdmAntPos == VAR_3) {


    VAR_22[0] = 0;
    VAR_22[1] = 0;
    VAR_11->fBtcFillH2c(VAR_11, 0x65, 2, VAR_22);
   } else {


    VAR_22[0] = 1;
    VAR_22[1] = 0;
    VAR_11->fBtcFillH2c(VAR_11, 0x65, 2, VAR_22);
   }
  }



  switch (VAR_12) {
  case 128:
   if (VAR_15->btdmAntPos == VAR_3)
    VAR_11->fBtcWrite4Byte(VAR_11, 0x948, 0x0);
   else
    VAR_11->fBtcWrite4Byte(VAR_11, 0x948, 0x280);
   break;
  case 130:
   if (VAR_15->btdmAntPos == VAR_3)
    VAR_11->fBtcWrite4Byte(VAR_11, 0x948, 0x280);
   else
    VAR_11->fBtcWrite4Byte(VAR_11, 0x948, 0x0);
   break;
  default:
  case 129:
   if (VAR_15->btdmAntPos == VAR_3)
    VAR_11->fBtcWrite4Byte(VAR_11, 0x948, 0x200);
   else
    VAR_11->fBtcWrite4Byte(VAR_11, 0x948, 0x80);
   break;
  }
 }
}
