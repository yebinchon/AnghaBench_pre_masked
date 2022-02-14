
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct i2c_client *VAR_0,
          u16 VAR_1, u16 VAR_2)
{
 struct i2c_msg VAR_3;
 u8 VAR_4[4];
 int VAR_5;

 VAR_1 = FUNC_2(VAR_1);
 VAR_2 = FUNC_2(VAR_2);

 FUNC_1(VAR_4 + 0, &VAR_1, 2);
 FUNC_1(VAR_4 + 2, &VAR_2, 2);

 VAR_3.addr = VAR_0->addr;
 VAR_3.flags = 0;
 VAR_3.len = 4;
 VAR_3.buf = VAR_4;





 VAR_5 = FUNC_0(VAR_0->adapter, &VAR_3, 1);

 return VAR_5 >= 0 ? 0 : VAR_5;
}
