
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef unsigned char u32 ;
typedef int u16 ;
struct smiapp_sensor {TYPE_1__* src; } ;
struct i2c_msg {int len; unsigned char* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
struct TYPE_2__ {int sd; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct smiapp_sensor *VAR_2, u16 VAR_3,
      u16 VAR_4, u32 *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(&VAR_2->src->sd);
 struct i2c_msg VAR_7;
 unsigned char VAR_8[4];
 u16 VAR_9 = VAR_3;
 int VAR_10;

 VAR_7.addr = VAR_6->addr;
 VAR_7.flags = 0;
 VAR_7.len = 2;
 VAR_7.buf = VAR_8;


 VAR_8[0] = (u8) (VAR_9 >> 8);
 VAR_8[1] = (u8) VAR_9;
 VAR_10 = FUNC_2(VAR_6->adapter, &VAR_7, 1);
 if (VAR_10 != 1) {
  if (VAR_10 >= 0)
   VAR_10 = -VAR_0;
  goto err;
 }

 VAR_7.len = VAR_4;
 VAR_7.flags = VAR_1;
 VAR_10 = FUNC_2(VAR_6->adapter, &VAR_7, 1);
 if (VAR_10 != 1) {
  if (VAR_10 >= 0)
   VAR_10 = -VAR_0;
  goto err;
 }

 *VAR_5 = 0;

 switch (VAR_4) {
 case 129:
  *VAR_5 = (VAR_8[0] << 24) + (VAR_8[1] << 16) + (VAR_8[2] << 8) +
   VAR_8[3];
  break;
 case 130:
  *VAR_5 = (VAR_8[0] << 8) + VAR_8[1];
  break;
 case 128:
  *VAR_5 = VAR_8[0];
  break;
 default:
  FUNC_0();
 }

 return 0;

err:
 FUNC_1(&VAR_6->dev, "read from offset 0x%x error %d\n", VAR_9, VAR_10);

 return VAR_10;
}
