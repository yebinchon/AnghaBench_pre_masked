
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int* buf; int addr; int flags; } ;
struct TYPE_2__ {int num; } ;
struct av7110 {int adac_type; TYPE_1__ dvb_adapter; int i2c_adap; } ;




 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int,int) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;

int FUNC_2(struct av7110 *VAR_1, u8 VAR_2, u16 VAR_3, u16 VAR_4)
{
 u8 VAR_5[5] = { VAR_2, VAR_3 >> 8, VAR_3 & 0xff, VAR_4 >> 8 , VAR_4 & 0xff };
 struct i2c_msg VAR_6 = { .flags = 0, .len = 5, .buf = VAR_5 };

 switch (VAR_1->adac_type) {
 case 129:
  VAR_6.addr = 0x40;
  break;
 case 128:
  VAR_6.addr = 0x42;
  break;
 default:
  return 0;
 }

 if (FUNC_1(&VAR_1->i2c_adap, &VAR_6, 1) != 1) {
  FUNC_0(1, "dvb-ttpci: failed @ card %d, %u = %u\n",
         VAR_1->dvb_adapter.num, VAR_3, VAR_4);
  return -VAR_0;
 }
 return 0;
}
