
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adap; int addr; } ;
struct tda18271_priv {unsigned char* tda18271_regs; TYPE_1__ i2c_props; } ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int VAR_8 ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(struct dvb_frontend *VAR_9)
{
 struct tda18271_priv *VAR_10 = VAR_9->tuner_priv;
 unsigned char *VAR_11 = VAR_10->tda18271_regs;
 unsigned char VAR_12[VAR_7];
 unsigned char VAR_13 = 0x00;
 int VAR_14, VAR_15;
 struct i2c_msg VAR_16[] = {
  { .addr = VAR_10->i2c_props.addr, .flags = 0,
    .buf = &VAR_13, .len = 1 },
  { .addr = VAR_10->i2c_props.addr, .flags = VAR_1,
    .buf = VAR_12, .len = VAR_7 }
 };

 FUNC_2(VAR_9, 1);


 VAR_14 = FUNC_0(VAR_10->i2c_props.adap, VAR_16, 2);

 FUNC_2(VAR_9, 0);

 if (VAR_14 != 2)
  FUNC_3("ERROR: i2c_transfer returned: %d\n", VAR_14);

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {

  if ((VAR_15 != VAR_6) &&
      (VAR_15 != VAR_2) &&
      (VAR_15 != VAR_3) &&
      (VAR_15 != VAR_4) &&
      (VAR_15 != VAR_5))
   VAR_11[VAR_15] = VAR_12[VAR_15];
 }

 if (VAR_8 & VAR_0)
  FUNC_1(VAR_9, 1);

 return (VAR_14 == 2 ? 0 : VAR_14);
}
