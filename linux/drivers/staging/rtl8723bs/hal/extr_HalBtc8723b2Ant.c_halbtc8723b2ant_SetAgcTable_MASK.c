
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_30__ {int (* fBtcSet ) (TYPE_1__*,int ,int*) ;int (* fBtcSetRfReg ) (TYPE_1__*,int ,int,int,int) ;int (* fBtcWrite4Byte ) (TYPE_1__*,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_9 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_10 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_11 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_12 (TYPE_1__*,int,int) ;
 int FUNC_13 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_14 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_15 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_16 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_17 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_18 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_19 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_20 (TYPE_1__*,int ,int*) ;
 int FUNC_21 (TYPE_1__*,int,int) ;
 int FUNC_22 (TYPE_1__*,int,int) ;
 int FUNC_23 (TYPE_1__*,int,int) ;
 int FUNC_24 (TYPE_1__*,int,int) ;
 int FUNC_25 (TYPE_1__*,int,int) ;
 int FUNC_26 (TYPE_1__*,int,int) ;
 int FUNC_27 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_28(
 PBTC_COEXIST VAR_4, bool VAR_5
)
{
 u8 VAR_6 = 0;


 if (VAR_5) {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], BB Agc Table On!\n"));
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0x6e1A0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0x6d1B0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0x6c1C0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0x6b1D0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0x6a1E0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0x691F0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0x68200001);
 } else {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], BB Agc Table Off!\n"));
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0xaa1A0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0xa91B0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0xa81C0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0xa71D0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0xa61E0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0xa51F0001);
  VAR_4->fBtcWrite4Byte(VAR_4, 0xc78, 0xa4200001);
 }



 VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0xef, 0xfffff, 0x02000);
 if (VAR_5) {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], Agc Table On!\n"));
  VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x3b, 0xfffff, 0x38fff);
  VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x3b, 0xfffff, 0x38ffe);
 } else {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], Agc Table Off!\n"));
  VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x3b, 0xfffff, 0x380c3);
  VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x3b, 0xfffff, 0x28ce6);
 }
 VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0xef, 0xfffff, 0x0);

 VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0xed, 0xfffff, 0x1);
 if (VAR_5) {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], Agc Table On!\n"));
  VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x40, 0xfffff, 0x38fff);
  VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x40, 0xfffff, 0x38ffe);
 } else {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], Agc Table Off!\n"));
  VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x40, 0xfffff, 0x380c3);
  VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0x40, 0xfffff, 0x28ce6);
 }
 VAR_4->fBtcSetRfReg(VAR_4, VAR_2, 0xed, 0xfffff, 0x0);


 if (VAR_5)
  VAR_6 = 8;

 VAR_4->fBtcSet(VAR_4, VAR_3, &VAR_6);
}
