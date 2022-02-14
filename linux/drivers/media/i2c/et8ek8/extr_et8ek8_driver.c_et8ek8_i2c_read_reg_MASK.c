
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef unsigned char u32 ;
typedef int u16 ;
struct i2c_msg {int len; unsigned char* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_5, u16 VAR_6,
          u16 VAR_7, u32 *VAR_8)
{
 int VAR_9;
 struct i2c_msg VAR_10;
 unsigned char VAR_11[4];

 if (!VAR_5->adapter)
  return -VAR_1;
 if (VAR_6 != VAR_3 && VAR_6 != VAR_2)
  return -VAR_0;

 VAR_10.addr = VAR_5->addr;
 VAR_10.flags = 0;
 VAR_10.len = 2;
 VAR_10.buf = VAR_11;


 VAR_11[0] = (u8) (VAR_7 >> 8);
 VAR_11[1] = (u8) (VAR_7 & 0xff);
 VAR_9 = FUNC_1(VAR_5->adapter, &VAR_10, 1);
 if (VAR_9 < 0)
  goto err;

 VAR_10.len = VAR_6;
 VAR_10.flags = VAR_4;
 VAR_9 = FUNC_1(VAR_5->adapter, &VAR_10, 1);
 if (VAR_9 < 0)
  goto err;

 *VAR_8 = 0;

 if (VAR_6 == VAR_3)
  *VAR_8 = VAR_11[0];
 else
  *VAR_8 = (VAR_11[1] << 8) + VAR_11[0];

 return 0;

err:
 FUNC_0(&VAR_5->dev, "read from offset 0x%x error %d\n", VAR_7, VAR_9);

 return VAR_9;
}
