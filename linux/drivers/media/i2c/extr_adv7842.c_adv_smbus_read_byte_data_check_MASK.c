
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
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;
 int FUNC_1 (struct i2c_client*,char*,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct i2c_client *VAR_3,
       u8 VAR_4, bool VAR_5)
{
 union i2c_smbus_data VAR_6;

 if (!FUNC_0(VAR_3->adapter, VAR_3->addr, VAR_3->flags,
       VAR_2, VAR_4,
       VAR_1, &VAR_6))
  return VAR_6.byte;
 if (VAR_5)
  FUNC_1(VAR_3, "error reading %02x, %02x\n",
   VAR_3->addr, VAR_4);
 return -VAR_0;
}
