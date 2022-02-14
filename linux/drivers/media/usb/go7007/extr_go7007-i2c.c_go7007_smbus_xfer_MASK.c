
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
struct go7007 {int dummy; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (struct go7007*,int ,int,int ,int,int *) ;
 struct go7007* FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_4, u16 VAR_5,
  unsigned short VAR_6, char VAR_7,
  u8 VAR_8, int VAR_9, union i2c_smbus_data *VAR_10)
{
 struct go7007 *VAR_11 = FUNC_1(VAR_4);

 if (VAR_9 != VAR_2)
  return -VAR_0;
 return FUNC_0(VAR_11, VAR_5, VAR_7 == VAR_3, VAR_8,
   VAR_6 & VAR_1 ? 0x10 : 0x00, &VAR_10->byte);
}
