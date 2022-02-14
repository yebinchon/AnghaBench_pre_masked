
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {unsigned int* block; } ;
typedef int u8 ;
struct i2c_client {int flags; int addr; int adapter; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;
 int FUNC_1 (int *,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3,
      u8 VAR_4, unsigned VAR_5, u8 *VAR_6)
{
 union i2c_smbus_data VAR_7;
 int VAR_8;

 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 VAR_7.block[0] = VAR_5;

 VAR_8 = FUNC_0(VAR_3->adapter, VAR_3->addr, VAR_3->flags,
        VAR_2, VAR_4,
        VAR_1, &VAR_7);
 FUNC_1(VAR_6, VAR_7.block + 1, VAR_5);
 return VAR_8;
}
