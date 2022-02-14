
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max8998_dev {int iolock; } ;
struct i2c_client {int dummy; } ;


 struct max8998_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct i2c_client *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 struct max8998_dev *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_3->iolock);
 VAR_4 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_3->iolock);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 &= 0xff;
 *VAR_2 = VAR_4;
 return 0;
}
