
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct microtune_priv {int xogc; int i2c_props; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct microtune_priv* tuner_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_1)
{
 struct microtune_priv *VAR_2 = VAR_1->tuner_priv;
 unsigned char VAR_3[21];
 int VAR_4,VAR_5,VAR_6=0;


 VAR_3[1]=2;
 VAR_3[2]=0xff;
 VAR_3[3]=0x0f;
 VAR_3[4]=0x1f;
 VAR_4=FUNC_4(&VAR_2->i2c_props,VAR_3+1,4);

 VAR_3[5]=6;
 VAR_3[6]=0xe4;
 VAR_3[7]=0x8f;
 VAR_3[8]=0xc3;
 VAR_3[9]=0x4e;
 VAR_3[10]=0xec;
 VAR_4=FUNC_4(&VAR_2->i2c_props,VAR_3+5,6);

 VAR_3[12]=13;
 VAR_3[13]=0x32;
 VAR_4=FUNC_4(&VAR_2->i2c_props,VAR_3+12,2);


 VAR_5=7;
 do {
  FUNC_2("mt2032: xogc = 0x%02x\n",VAR_5&0x07);
  FUNC_0(10);
  VAR_3[0]=0x0e;
  FUNC_4(&VAR_2->i2c_props,VAR_3,1);
  FUNC_3(&VAR_2->i2c_props,VAR_3,1);
  VAR_6=VAR_3[0]&0x01;
  FUNC_2("mt2032: xok = 0x%02x\n",VAR_6);
  if (VAR_6 == 1) break;

  VAR_5--;
  FUNC_2("mt2032: xogc = 0x%02x\n",VAR_5&0x07);
  if (VAR_5 == 3) {
   VAR_5=4;
   break;
  }
  VAR_3[0]=0x07;
  VAR_3[1]=0x88 + VAR_5;
  VAR_4=FUNC_4(&VAR_2->i2c_props,VAR_3,2);
  if (VAR_4!=2)
   FUNC_5("i2c i/o error: rc == %d (should be 2)\n",VAR_4);
 } while (VAR_6 != 1 );
 VAR_2->xogc=VAR_5;

 FUNC_1(&VAR_1->ops.tuner_ops, &VAR_0, sizeof(struct dvb_tuner_ops));

 return(1);
}
