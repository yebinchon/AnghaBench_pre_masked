
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; int symbol_rate; } ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_6__ {int i2c_adap; } ;
struct budget_ci {TYPE_3__ budget; } ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct budget_ci *VAR_4 = (struct budget_ci *) VAR_2->dvb->priv;
 u32 VAR_5;
 u8 VAR_6[4];
 struct i2c_msg VAR_7 = {.addr = 0x60,.flags = 0,.buf = VAR_6,.len = sizeof(VAR_6) };

 if ((VAR_3->frequency < 950000) || (VAR_3->frequency > 2150000))
  return -VAR_0;

 VAR_5 = (VAR_3->frequency + (500 - 1)) / 500;
 VAR_6[0] = (VAR_5 >> 8) & 0x7f;
 VAR_6[1] = VAR_5 & 0xff;
 VAR_6[2] = 0x80 | ((VAR_5 & 0x18000) >> 10) | 2;
 VAR_6[3] = 0x20;

 if (VAR_3->symbol_rate < 4000000)
  VAR_6[3] |= 1;

 if (VAR_3->frequency < 1250000)
  VAR_6[3] |= 0;
 else if (VAR_3->frequency < 1550000)
  VAR_6[3] |= 0x40;
 else if (VAR_3->frequency < 2050000)
  VAR_6[3] |= 0x80;
 else if (VAR_3->frequency < 2150000)
  VAR_6[3] |= 0xC0;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);
 if (FUNC_0(&VAR_4->budget.i2c_adap, &VAR_7, 1) != 1)
  return -VAR_1;
 return 0;
}
