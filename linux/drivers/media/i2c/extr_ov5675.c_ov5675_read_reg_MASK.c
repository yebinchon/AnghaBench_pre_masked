
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ov5675 {int sd; } ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int addr_buf ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (int,int *) ;
 struct i2c_client* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ov5675 *VAR_3, u16 VAR_4, u16 VAR_5, u32 *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_4(&VAR_3->sd);
 struct i2c_msg VAR_8[2];
 u8 VAR_9[2];
 u8 VAR_10[4] = {0};
 int VAR_11;

 if (VAR_5 > 4)
  return -VAR_0;

 FUNC_3(VAR_4, VAR_9);
 VAR_8[0].addr = VAR_7->addr;
 VAR_8[0].flags = 0;
 VAR_8[0].len = sizeof(VAR_9);
 VAR_8[0].buf = VAR_9;
 VAR_8[1].addr = VAR_7->addr;
 VAR_8[1].flags = VAR_2;
 VAR_8[1].len = VAR_5;
 VAR_8[1].buf = &VAR_10[4 - VAR_5];

 VAR_11 = FUNC_2(VAR_7->adapter, VAR_8, FUNC_0(VAR_8));
 if (VAR_11 != FUNC_0(VAR_8))
  return -VAR_1;

 *VAR_6 = FUNC_1(VAR_10);

 return 0;
}
