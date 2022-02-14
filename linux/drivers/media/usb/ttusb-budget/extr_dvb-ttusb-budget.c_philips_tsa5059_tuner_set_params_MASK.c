
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ttusb {scalar_t__ revision; int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int buf ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 struct ttusb* VAR_5 = (struct ttusb*) VAR_3->dvb->priv;
 u8 VAR_6[4];
 u32 VAR_7;
 struct i2c_msg VAR_8 = {.addr = 0x61,.flags = 0,.buf = VAR_6,.len = sizeof(VAR_6) };

 if ((VAR_4->frequency < 950000) || (VAR_4->frequency > 2150000))
  return -VAR_0;

 VAR_7 = (VAR_4->frequency + (125 - 1)) / 125;
 VAR_6[0] = (VAR_7 >> 8) & 0x7f;
 VAR_6[1] = VAR_7 & 0xff;
 VAR_6[2] = 0x80 | ((VAR_7 & 0x18000) >> 10) | 4;
 VAR_6[3] = 0xC4;

 if (VAR_4->frequency > 1530000)
  VAR_6[3] = 0xC0;


 if (VAR_5->revision == VAR_2)
  VAR_6[3] |= 0x20;

 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 1);
 if (FUNC_0(&VAR_5->i2c_adap, &VAR_8, 1) != 1)
  return -VAR_1;

 return 0;
}
