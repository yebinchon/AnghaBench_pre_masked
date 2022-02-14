
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int* buf; int len; scalar_t__ flags; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
struct budget {int i2c_adap; } ;
typedef int buf ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_4)
{
 struct dtv_frontend_properties *VAR_5 = &VAR_4->dtv_property_cache;
 struct budget *VAR_6 = (struct budget *) VAR_4->dvb->priv;
 u8 VAR_7[6];
 struct i2c_msg VAR_8 = {.addr = 0x60,.flags = 0,.buf = VAR_7,.len = sizeof(VAR_7) };
 int VAR_9;




 u32 VAR_10 = (VAR_5->frequency + 36125000 + 62500 / 2) / 62500;

 VAR_7[0] = (VAR_10 >> 8) & 0x7f;
 VAR_7[1] = VAR_10 & 0xff;
 VAR_7[2] = 0xce;
 VAR_7[3] = (VAR_5->frequency < 150000000 ? 0x01 :
    VAR_5->frequency < 445000000 ? 0x02 : 0x04);
 VAR_7[4] = 0xde;
 VAR_7[5] = 0x20;

 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);
 if (FUNC_0(&VAR_6->i2c_adap, &VAR_8, 1) != 1)
  return -VAR_1;


 VAR_8.flags = VAR_2;
 VAR_8.len = 1;
 for (VAR_9 = 0; VAR_9 < 20; VAR_9++) {
  if (VAR_4->ops.i2c_gate_ctrl)
   VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);
  if (FUNC_0(&VAR_6->i2c_adap, &VAR_8, 1) == 1 && (VAR_7[0] & 0x40))
   break;
  FUNC_1(10);
 }


 VAR_8.flags = 0;
 VAR_8.len = 2;
 VAR_8.buf = &VAR_7[2];
 VAR_7[2] &= ~0x40;
 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);
 if (FUNC_0(&VAR_6->i2c_adap, &VAR_8, 1) != 1)
  return -VAR_1;

 return 0;
}
