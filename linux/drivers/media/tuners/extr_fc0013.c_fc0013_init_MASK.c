
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc0013_priv {int xtal_freq; scalar_t__ dual_master; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct fc0013_priv* tuner_priv; } ;
typedef int reg ;





 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct fc0013_priv*,int,unsigned char) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0)
{
 struct fc0013_priv *VAR_1 = VAR_0->tuner_priv;
 int VAR_2, VAR_3 = 0;
 unsigned char VAR_4[] = {
  0x00,
  0x09,
  0x16,
  0x00,
  0x00,
  0x17,
  0x02,
  0x0a,
  0xff,

  0x6f,
  0xb8,
  0x82,
  0xfc,
  0x01,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x50,

  0x01,
 };

 switch (VAR_1->xtal_freq) {
 case 130:
 case 129:
  VAR_4[0x07] |= 0x20;
  break;
 case 128:
 default:
  break;
 }

 if (VAR_1->dual_master)
  VAR_4[0x0c] |= 0x02;

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);

 for (VAR_2 = 1; VAR_2 < sizeof(VAR_4); VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_4[VAR_2]);
  if (VAR_3)
   break;
 }

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);

 if (VAR_3)
  FUNC_0("fc0013_writereg failed: %d", VAR_3);

 return VAR_3;
}
