
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int adap; } ;
struct tda18271_priv {unsigned char* tda18271_regs; TYPE_1__ i2c_props; int id; int lock; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_5)
{
 struct tda18271_priv *VAR_6 = VAR_5->tuner_priv;
 unsigned char *VAR_7 = VAR_6->tda18271_regs;
 char *VAR_8;
 int VAR_9;

 FUNC_1(&VAR_6->lock);
 VAR_9 = FUNC_3(VAR_5);
 FUNC_2(&VAR_6->lock);

 if (VAR_9) {
  FUNC_4("Error reading device ID @ %d-%04x, bailing out.\n",
    FUNC_0(VAR_6->i2c_props.adap),
    VAR_6->i2c_props.addr);
  return -VAR_1;
 }

 switch (VAR_7[VAR_2] & 0x7f) {
 case 3:
  VAR_8 = "TDA18271HD/C1";
  VAR_6->id = VAR_3;
  break;
 case 4:
  VAR_8 = "TDA18271HD/C2";
  VAR_6->id = VAR_4;
  break;
 default:
  FUNC_4("Unknown device (%i) detected @ %d-%04x, device not supported.\n",
    VAR_7[VAR_2], FUNC_0(VAR_6->i2c_props.adap),
    VAR_6->i2c_props.addr);
  return -VAR_0;
 }

 FUNC_4("%s detected @ %d-%04x\n", VAR_8,
   FUNC_0(VAR_6->i2c_props.adap), VAR_6->i2c_props.addr);

 return 0;
}
