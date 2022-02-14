
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct i2c_msg {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int ,scalar_t__,int) ;
 int FUNC_1 (struct i2c_client*,scalar_t__,scalar_t__,int ,struct i2c_msg*,unsigned char*) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4, u16 VAR_5,
    u16 VAR_6, u32 VAR_7)
{
 int VAR_8;
 struct i2c_msg VAR_9;
 unsigned char VAR_10[6];

 if (!VAR_4->adapter)
  return -VAR_1;
 if (VAR_5 != VAR_3 && VAR_5 != VAR_2)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_9, VAR_10);

 VAR_8 = FUNC_2(VAR_4->adapter, &VAR_9, 1);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->dev,
   "wrote 0x%x to offset 0x%x error %d\n", VAR_7, VAR_6, VAR_8);
  return VAR_8;
 }

 return 0;
}
