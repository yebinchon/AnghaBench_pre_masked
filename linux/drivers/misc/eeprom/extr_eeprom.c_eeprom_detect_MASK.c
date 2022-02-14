
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_5, struct i2c_board_info *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_5->adapter;




 if (!(VAR_7->class & VAR_1) && VAR_5->addr >= 0x51)
  return -VAR_0;
 if (!FUNC_0(VAR_7, VAR_3)
  && !FUNC_0(VAR_7, VAR_2))
  return -VAR_0;

 FUNC_1(VAR_6->type, "eeprom", VAR_4);

 return 0;
}
