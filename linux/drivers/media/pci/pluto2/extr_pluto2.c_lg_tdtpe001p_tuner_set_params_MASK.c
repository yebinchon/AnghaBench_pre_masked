
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pluto {int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; scalar_t__ flags; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; int bandwidth_hz; } ;
struct dvb_frontend {TYPE_1__ ops; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 struct pluto* FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (int *,struct i2c_msg*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct pluto *VAR_4 = FUNC_1(VAR_2);
 struct i2c_msg VAR_5;
 int VAR_6;
 u8 VAR_7[4];
 u32 VAR_8;






 VAR_8 = FUNC_0(VAR_3->frequency * 3, 500000) + 217;
 VAR_7[0] = (VAR_8 >> 8) & 0x7f;
 VAR_7[1] = (VAR_8 >> 0) & 0xff;

 if (VAR_3->frequency < 611000000)
  VAR_7[2] = 0xb4;
 else if (VAR_3->frequency < 811000000)
  VAR_7[2] = 0xbc;
 else
  VAR_7[2] = 0xf4;




 if (VAR_3->frequency < 350000000)
  VAR_7[3] = 0x02;
 else
  VAR_7[3] = 0x04;

 if (VAR_3->bandwidth_hz == 8000000)
  VAR_7[3] |= 0x08;

 VAR_5.addr = VAR_1 >> 1;
 VAR_5.flags = 0;
 VAR_5.buf = VAR_7;
 VAR_5.len = sizeof(VAR_7);

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);
 VAR_6 = FUNC_2(&VAR_4->i2c_adap, &VAR_5, 1);
 if (VAR_6 < 0)
  return VAR_6;
 else if (VAR_6 == 0)
  return -VAR_0;

 return 0;
}
