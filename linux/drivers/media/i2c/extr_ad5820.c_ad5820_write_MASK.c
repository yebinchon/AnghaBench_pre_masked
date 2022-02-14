
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
struct ad5820_device {int subdev; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ad5820_device *VAR_1, u16 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_3(&VAR_1->subdev);
 struct i2c_msg VAR_4;
 __be16 VAR_5;
 int VAR_6;

 if (!VAR_3->adapter)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2);
 VAR_4.addr = VAR_3->addr;
 VAR_4.flags = 0;
 VAR_4.len = 2;
 VAR_4.buf = (u8 *)&VAR_5;

 VAR_6 = FUNC_2(VAR_3->adapter, &VAR_4, 1);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_3->dev, "write failed, error %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
