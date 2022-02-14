
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
struct i2c_client {int addr; int flags; int adapter; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;
 int FUNC_1 (struct i2c_client*,char*,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct i2c_client *VAR_2,
       u8 VAR_3, bool VAR_4)
{
 union i2c_smbus_data VAR_5;

 if (!FUNC_0(VAR_2->adapter, VAR_2->addr, VAR_2->flags,
       VAR_1, VAR_3,
       VAR_0, &VAR_5))
  return VAR_5.byte;
 if (VAR_4)
  FUNC_1(VAR_2, "error reading %02x, %02x\n",
   VAR_2->addr, VAR_3);
 return -1;
}
