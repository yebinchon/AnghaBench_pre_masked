
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adap; int addr; } ;
struct tda18271_priv {unsigned char* tda18271_regs; int id; TYPE_1__ i2c_props; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;


 int VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (struct dvb_frontend*,int ,int,int) ;
 int FUNC_1 (struct dvb_frontend*,size_t,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;
 int FUNC_7 (char*,int ,int ) ;

int FUNC_8(struct dvb_frontend *VAR_42)
{
 struct tda18271_priv *VAR_43 = VAR_42->tuner_priv;
 unsigned char *VAR_44 = VAR_43->tda18271_regs;

 FUNC_7("initializing registers for device @ %d-%04x\n",
  FUNC_2(VAR_43->i2c_props.adap),
  VAR_43->i2c_props.addr);





 FUNC_6(VAR_42, 1);
 FUNC_3(VAR_43->i2c_props.adap, VAR_0);


 switch (VAR_43->id) {
 case 129:
  VAR_44[VAR_33] = 0x83;
  break;
 case 128:
  VAR_44[VAR_33] = 0x84;
  break;
 }

 VAR_44[VAR_39] = 0x08;
 VAR_44[VAR_38] = 0x80;
 VAR_44[VAR_28] = 0xc6;
 VAR_44[VAR_29] = 0xdf;
 VAR_44[VAR_30] = 0x16;
 VAR_44[VAR_31] = 0x60;
 VAR_44[VAR_32] = 0x80;
 VAR_44[VAR_4] = 0x80;
 VAR_44[VAR_1] = 0x00;
 VAR_44[VAR_2] = 0x00;
 VAR_44[VAR_3] = 0x00;
 VAR_44[VAR_37] = 0x00;
 VAR_44[VAR_34] = 0x00;
 VAR_44[VAR_35] = 0x00;
 VAR_44[VAR_36] = 0x00;

 switch (VAR_43->id) {
 case 129:
  VAR_44[VAR_5] = 0xff;
  break;
 case 128:
  VAR_44[VAR_5] = 0xfc;
  break;
 }

 VAR_44[VAR_16] = 0x01;
 VAR_44[VAR_21] = 0x84;
 VAR_44[VAR_22] = 0x41;
 VAR_44[VAR_23] = 0x01;
 VAR_44[VAR_24] = 0x84;
 VAR_44[VAR_25] = 0x40;
 VAR_44[VAR_26] = 0x07;
 VAR_44[VAR_27] = 0x00;
 VAR_44[VAR_6] = 0x00;
 VAR_44[VAR_7] = 0x96;

 switch (VAR_43->id) {
 case 129:
  VAR_44[VAR_8] = 0x0f;
  break;
 case 128:
  VAR_44[VAR_8] = 0x33;
  break;
 }

 VAR_44[VAR_9] = 0xc1;
 VAR_44[VAR_10] = 0x00;
 VAR_44[VAR_11] = 0x8f;
 VAR_44[VAR_12] = 0x00;
 VAR_44[VAR_13] = 0x00;

 switch (VAR_43->id) {
 case 129:
  VAR_44[VAR_14] = 0x00;
  break;
 case 128:
  VAR_44[VAR_14] = 0x8c;
  break;
 }

 VAR_44[VAR_15] = 0x00;
 VAR_44[VAR_17] = 0x20;

 switch (VAR_43->id) {
 case 129:
  VAR_44[VAR_18] = 0x33;
  break;
 case 128:
  VAR_44[VAR_18] = 0xb3;
  break;
 }

 VAR_44[VAR_19] = 0x48;
 VAR_44[VAR_20] = 0xb0;

 FUNC_1(VAR_42, 0x00, VAR_41, 0);


 VAR_44[VAR_13] = 0x00;
 FUNC_1(VAR_42, VAR_13, 1, 0);
 VAR_44[VAR_13] = 0x03;
 FUNC_1(VAR_42, VAR_13, 1, 0);
 VAR_44[VAR_13] = 0x43;
 FUNC_1(VAR_42, VAR_13, 1, 0);
 VAR_44[VAR_13] = 0x4c;
 FUNC_1(VAR_42, VAR_13, 1, 0);


 if ((VAR_43->id) == 129) {
  VAR_44[VAR_17] = 0xa0;
  FUNC_1(VAR_42, VAR_17, 1, 0);
  VAR_44[VAR_17] = 0xa7;
  FUNC_1(VAR_42, VAR_17, 1, 0);
  VAR_44[VAR_17] = 0xe7;
  FUNC_1(VAR_42, VAR_17, 1, 0);
  VAR_44[VAR_17] = 0xec;
  FUNC_1(VAR_42, VAR_17, 1, 0);
 }




 VAR_44[VAR_30] = 0x1f;
 VAR_44[VAR_31] = 0x66;
 VAR_44[VAR_32] = 0x81;
 VAR_44[VAR_4] = 0xcc;
 VAR_44[VAR_1] = 0x6c;
 VAR_44[VAR_2] = 0x00;
 VAR_44[VAR_3] = 0x00;
 VAR_44[VAR_37] = 0xcd;
 VAR_44[VAR_34] = 0x77;
 VAR_44[VAR_35] = 0x08;
 VAR_44[VAR_36] = 0x00;

 FUNC_1(VAR_42, VAR_30, 11, 0);

 if ((VAR_43->id) == 128) {

  FUNC_0(VAR_42, VAR_40, 1, 0);
  FUNC_5(1);


  FUNC_0(VAR_42, VAR_40, 0, 0);
 }

 FUNC_5(5);


 FUNC_1(VAR_42, VAR_28, 1, 0);
 FUNC_5(5);

 VAR_44[VAR_32] = 0x85;
 VAR_44[VAR_4] = 0xcb;
 VAR_44[VAR_1] = 0x66;
 VAR_44[VAR_2] = 0x70;

 FUNC_1(VAR_42, VAR_30, 7, 0);
 FUNC_5(5);


 FUNC_1(VAR_42, VAR_29, 1, 0);
 FUNC_5(30);


 VAR_44[VAR_32] = 0x82;
 VAR_44[VAR_4] = 0xa8;
 VAR_44[VAR_2] = 0x00;
 VAR_44[VAR_37] = 0xa9;
 VAR_44[VAR_34] = 0x73;
 VAR_44[VAR_35] = 0x1a;

 FUNC_1(VAR_42, VAR_30, 11, 0);
 FUNC_5(5);


 FUNC_1(VAR_42, VAR_28, 1, 0);
 FUNC_5(5);

 VAR_44[VAR_32] = 0x86;
 VAR_44[VAR_4] = 0xa8;
 VAR_44[VAR_1] = 0x66;
 VAR_44[VAR_2] = 0xa0;

 FUNC_1(VAR_42, VAR_30, 7, 0);
 FUNC_5(5);


 FUNC_1(VAR_42, VAR_29, 1, 0);
 FUNC_5(30);


 VAR_44[VAR_32] = 0x83;
 VAR_44[VAR_4] = 0x98;
 VAR_44[VAR_1] = 0x65;
 VAR_44[VAR_2] = 0x00;
 VAR_44[VAR_37] = 0x99;
 VAR_44[VAR_34] = 0x71;
 VAR_44[VAR_35] = 0xcd;

 FUNC_1(VAR_42, VAR_30, 11, 0);
 FUNC_5(5);


 FUNC_1(VAR_42, VAR_28, 1, 0);
 FUNC_5(5);

 VAR_44[VAR_32] = 0x87;
 VAR_44[VAR_1] = 0x65;
 VAR_44[VAR_2] = 0x50;

 FUNC_1(VAR_42, VAR_30, 7, 0);
 FUNC_5(5);


 FUNC_1(VAR_42, VAR_29, 1, 0);
 FUNC_5(30);


 VAR_44[VAR_31] = 0x64;
 FUNC_1(VAR_42, VAR_31, 1, 0);


 FUNC_1(VAR_42, VAR_28, 1, 0);

 FUNC_4(VAR_43->i2c_props.adap, VAR_0);
 FUNC_6(VAR_42, 0);

 return 0;
}
