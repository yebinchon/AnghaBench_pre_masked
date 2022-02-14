
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mt2060_priv {int if1_freq; int frequency; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_1__ ops; struct mt2060_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mt2060_priv*,int ,int*) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (struct mt2060_priv*,int*,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_5)
{
 struct dtv_frontend_properties *VAR_6 = &VAR_5->dtv_property_cache;
 struct mt2060_priv *VAR_7;
 int VAR_8=0;
 u32 VAR_9;
 u8 VAR_10;
 u32 VAR_11,VAR_12;
 u32 VAR_13,VAR_14,VAR_15,VAR_16;
 u8 VAR_17[8];
 u32 VAR_18;

 VAR_7 = VAR_5->tuner_priv;

 VAR_18 = VAR_7->if1_freq;
 VAR_17[0] = VAR_2;
 VAR_17[1] = 0xFF;

 if (VAR_5->ops.i2c_gate_ctrl)
  VAR_5->ops.i2c_gate_ctrl(VAR_5, 1);

 FUNC_4(VAR_7,VAR_17,2);

 VAR_9 = VAR_6->frequency / 1000;

 VAR_11 = VAR_9 + VAR_18 * 1000;
 VAR_11 = (VAR_11 / 250) * 250;
 VAR_12 = VAR_11 - VAR_9 - VAR_1;

 VAR_12 = ((VAR_12 + 25) / 50) * 50;
 VAR_7->frequency = (VAR_11 - VAR_12 - VAR_1) * 1000,
 VAR_14 = VAR_11 / (VAR_0 / 64);
 VAR_13 = VAR_14 / 64;
 VAR_14 &= 0x3f;


 VAR_16 = VAR_12 * 64 / (VAR_0 / 128);
 VAR_15 = VAR_16 / 8192;
 VAR_16 &= 0x1fff;

 if (VAR_9 <= 95000) VAR_10 = 0xB0; else
 if (VAR_9 <= 180000) VAR_10 = 0xA0; else
 if (VAR_9 <= 260000) VAR_10 = 0x90; else
 if (VAR_9 <= 335000) VAR_10 = 0x80; else
 if (VAR_9 <= 425000) VAR_10 = 0x70; else
 if (VAR_9 <= 480000) VAR_10 = 0x60; else
 if (VAR_9 <= 570000) VAR_10 = 0x50; else
 if (VAR_9 <= 645000) VAR_10 = 0x40; else
 if (VAR_9 <= 730000) VAR_10 = 0x30; else
 if (VAR_9 <= 810000) VAR_10 = 0x20; else VAR_10 = 0x10;

 VAR_17[0] = VAR_3;
 VAR_17[1] = VAR_10 | ((VAR_14 >>2) & 0x0F);
 VAR_17[2] = VAR_13;
 VAR_17[3] = (VAR_16 & 0x0F) | ((VAR_14 & 3) << 4);
 VAR_17[4] = VAR_16 >> 4;
 VAR_17[5] = ((VAR_16 >>12) & 1) | (VAR_15 << 1);

 FUNC_0("IF1: %dMHz",(int)VAR_18);
 FUNC_0("PLL freq=%dkHz  f_lo1=%dkHz  f_lo2=%dkHz",(int)VAR_9,(int)VAR_11,(int)VAR_12);
 FUNC_0("PLL div1=%d  num1=%d  div2=%d  num2=%d",(int)VAR_13,(int)VAR_14,(int)VAR_15,(int)VAR_16);
 FUNC_0("PLL [1..5]: %2x %2x %2x %2x %2x",(int)VAR_17[1],(int)VAR_17[2],(int)VAR_17[3],(int)VAR_17[4],(int)VAR_17[5]);

 FUNC_4(VAR_7,VAR_17,6);


 VAR_8 = 0;
 do {
  FUNC_2(VAR_7,VAR_4,VAR_17);
  if ((VAR_17[0] & 0x88)==0x88)
   break;
  FUNC_1(4);
  VAR_8++;
 } while (VAR_8<10);

 if (VAR_5->ops.i2c_gate_ctrl)
  VAR_5->ops.i2c_gate_ctrl(VAR_5, 0);

 return 0;
}
