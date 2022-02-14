
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fc0012_priv {TYPE_3__* i2c; TYPE_1__* cfg; } ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; struct fc0012_priv* tuner_priv; } ;
typedef int reg ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int xtal_freq; scalar_t__ loop_through; scalar_t__ dual_master; } ;





 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct fc0012_priv*,int,unsigned char) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 struct fc0012_priv *VAR_2 = VAR_1->tuner_priv;
 int VAR_3, VAR_4 = 0;
 unsigned char VAR_5[] = {
  0x00,
  0x05,
  0x10,
  0x00,
  0x00,
  0x0f,
  0x00,
  0x00,
  0xff,

  0x6e,
  0xb8,
  0x82,

  0xfc,
  0x02,
  0x00,
  0x00,
  0x00,
  0x00,
  0x1f,
  0x08,

  0x00,
  0x04,
 };

 switch (VAR_2->cfg->xtal_freq) {
 case 130:
 case 129:
  VAR_5[0x07] |= 0x20;
  break;
 case 128:
 default:
  break;
 }

 if (VAR_2->cfg->dual_master)
  VAR_5[0x0c] |= 0x02;

 if (VAR_2->cfg->loop_through)
  VAR_5[0x09] |= 0x01;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);

 for (VAR_3 = 1; VAR_3 < sizeof(VAR_5); VAR_3++) {
  VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_5[VAR_3]);
  if (VAR_4)
   break;
 }

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);

 if (VAR_4)
  FUNC_0(&VAR_2->i2c->dev, "%s: fc0012_writereg failed: %d\n",
    VAR_0, VAR_4);

 return VAR_4;
}
