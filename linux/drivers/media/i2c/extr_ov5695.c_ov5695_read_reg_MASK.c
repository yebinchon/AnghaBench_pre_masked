
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef scalar_t__ __be32 ;
typedef int __be16 ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3, u16 VAR_4, unsigned int VAR_5,
      u32 *VAR_6)
{
 struct i2c_msg VAR_7[2];
 u8 *VAR_8;
 __be32 VAR_9 = 0;
 __be16 VAR_10 = FUNC_2(VAR_4);
 int VAR_11;

 if (VAR_5 > 4)
  return -VAR_0;

 VAR_8 = (u8 *)&VAR_9;

 VAR_7[0].addr = VAR_3->addr;
 VAR_7[0].flags = 0;
 VAR_7[0].len = 2;
 VAR_7[0].buf = (u8 *)&VAR_10;


 VAR_7[1].addr = VAR_3->addr;
 VAR_7[1].flags = VAR_2;
 VAR_7[1].len = VAR_5;
 VAR_7[1].buf = &VAR_8[4 - VAR_5];

 VAR_11 = FUNC_3(VAR_3->adapter, VAR_7, FUNC_0(VAR_7));
 if (VAR_11 != FUNC_0(VAR_7))
  return -VAR_1;

 *VAR_6 = FUNC_1(VAR_9);

 return 0;
}
