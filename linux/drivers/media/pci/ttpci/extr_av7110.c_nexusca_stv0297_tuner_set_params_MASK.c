
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
struct av7110 {int i2c_adap; } ;
typedef int data ;
struct TYPE_3__ {struct av7110* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 struct av7110* VAR_5 = VAR_3->dvb->priv;
 u32 VAR_6;
 u8 VAR_7[4];
 struct i2c_msg VAR_8 = { .addr = 0x63, .flags = 0, .buf = VAR_7, .len = sizeof(VAR_7) };
 struct i2c_msg VAR_9 = { .addr = 0x63, .flags = VAR_2, .buf = VAR_7, .len = 1 };
 int VAR_10;

 VAR_6 = (VAR_4->frequency + 36150000 + 31250) / 62500;

 VAR_7[0] = (VAR_6 >> 8) & 0x7f;
 VAR_7[1] = VAR_6 & 0xff;
 VAR_7[2] = 0xce;

 if (VAR_4->frequency < 45000000)
  return -VAR_0;
 else if (VAR_4->frequency < 137000000)
  VAR_7[3] = 0x01;
 else if (VAR_4->frequency < 403000000)
  VAR_7[3] = 0x02;
 else if (VAR_4->frequency < 860000000)
  VAR_7[3] = 0x04;
 else
  return -VAR_0;

 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 1);
 if (FUNC_0(&VAR_5->i2c_adap, &VAR_8, 1) != 1) {
  FUNC_2("nexusca: pll transfer failed!\n");
  return -VAR_1;
 }


 for(VAR_10 = 0; VAR_10 < 20; VAR_10++) {
  if (VAR_3->ops.i2c_gate_ctrl)
   VAR_3->ops.i2c_gate_ctrl(VAR_3, 1);
  if (FUNC_0(&VAR_5->i2c_adap, &VAR_9, 1) == 1)
   if (VAR_7[0] & 0x40) break;
  FUNC_1(10);
 }

 return 0;
}
