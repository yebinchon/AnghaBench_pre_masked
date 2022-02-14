
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3, u8 VAR_4,
       int VAR_5, const u8 *VAR_6)
{
 struct i2c_msg VAR_7;
 u8 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(1 + VAR_5, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8[0] = VAR_4;
 FUNC_3(&VAR_8[1], VAR_6, VAR_5);


 VAR_7.addr = VAR_3->addr;
 VAR_7.flags = 0;
 VAR_7.len = 1 + VAR_5;
 VAR_7.buf = VAR_8;

 VAR_9 = FUNC_0(VAR_3->adapter, &VAR_7, 1);
 FUNC_1(VAR_8);
 if (VAR_9 == 1)
  return 0;
 else if (VAR_9 < 0)
  return VAR_9;
 else
  return -VAR_0;
}
