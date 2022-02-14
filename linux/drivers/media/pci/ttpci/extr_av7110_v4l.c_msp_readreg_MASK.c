
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
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct av7110 *VAR_2, u8 VAR_3, u16 VAR_4, u16 *VAR_5)
{
 u8 VAR_6[3] = { VAR_3, VAR_4 >> 8, VAR_4 & 0xff };
 u8 VAR_7[2];
 struct i2c_msg VAR_8[2] = {
  { .flags = 0 , .len = 3, .buf = VAR_6 },
  { .flags = VAR_1, .len = 2, .buf = VAR_7 }
 };

 switch (VAR_2->adac_type) {
 case 129:
  VAR_8[0].addr = 0x40;
  VAR_8[1].addr = 0x40;
  break;
 case 128:
  VAR_8[0].addr = 0x42;
  VAR_8[1].addr = 0x42;
  break;
 default:
  return 0;
 }

 if (FUNC_1(&VAR_2->i2c_adap, &VAR_8[0], 2) != 2) {
  FUNC_0(1, "dvb-ttpci: failed @ card %d, %u\n",
         VAR_2->dvb_adapter.num, VAR_4);
  return -VAR_0;
 }
 *VAR_5 = (VAR_7[0] << 8) | VAR_7[1];
 return 0;
}
