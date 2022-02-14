
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adap; int addr; } ;
struct tda18271_priv {unsigned char* tda18271_regs; int small_i2c; TYPE_1__ i2c_props; } ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
typedef int buf ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 int FUNC_5 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_2, int VAR_3, int VAR_4,
   bool VAR_5)
{
 struct tda18271_priv *VAR_6 = VAR_2->tuner_priv;
 unsigned char *VAR_7 = VAR_6->tda18271_regs;
 unsigned char VAR_8[VAR_1 + 1];
 struct i2c_msg VAR_9 = { .addr = VAR_6->i2c_props.addr, .flags = 0,
          .buf = VAR_8 };
 int VAR_10, VAR_11 = 1, VAR_12;

 FUNC_0((VAR_4 == 0) || (VAR_3 + VAR_4 > sizeof(VAR_8)));

 switch (VAR_6->small_i2c) {
 case 131:
  VAR_12 = 3;
  break;
 case 130:
  VAR_12 = 8;
  break;
 case 129:
  VAR_12 = 16;
  break;
 case 128:
 default:
  VAR_12 = 39;
 }
 if (VAR_5) {
  FUNC_4(VAR_2, 1);
  FUNC_2(VAR_6->i2c_props.adap, VAR_0);
 }
 while (VAR_4) {
  if (VAR_12 > VAR_4)
   VAR_12 = VAR_4;

  VAR_8[0] = VAR_3;
  for (VAR_10 = 1; VAR_10 <= VAR_12; VAR_10++)
   VAR_8[VAR_10] = VAR_7[VAR_3 - 1 + VAR_10];

  VAR_9.len = VAR_12 + 1;


  VAR_11 = FUNC_1(VAR_6->i2c_props.adap, &VAR_9, 1);
  if (VAR_11 != 1)
   break;

  VAR_3 += VAR_12;
  VAR_4 -= VAR_12;
 }
 if (VAR_5) {
  FUNC_3(VAR_6->i2c_props.adap, VAR_0);
  FUNC_4(VAR_2, 0);
 }

 if (VAR_11 != 1)
  FUNC_5("ERROR: idx = 0x%x, len = %d, i2c_transfer returned: %d\n",
   VAR_3, VAR_12, VAR_11);

 return (VAR_11 == 1 ? 0 : VAR_11);
}
