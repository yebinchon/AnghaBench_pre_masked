
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int* block; } ;
struct i2c_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_device*) ;
 int FUNC_1 (struct i2c_device*) ;
 int FUNC_2 (struct i2c_device*) ;
 int FUNC_3 (struct i2c_device*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_device *VAR_7, union i2c_smbus_data *VAR_8, char VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13;

 FUNC_4(FUNC_1(VAR_7));


 if (VAR_9 == VAR_4) {
  VAR_12 = VAR_8->block[0];
  FUNC_5(VAR_12, FUNC_2(VAR_7));
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   FUNC_5(VAR_8->block[VAR_11 + 1], FUNC_0(VAR_7));
 }

 VAR_13 = FUNC_3(VAR_7, VAR_5 | VAR_0 | VAR_6 * VAR_10);
 if (VAR_13)
  return VAR_13;

 if (VAR_9 == VAR_3) {
  VAR_12 = FUNC_4(FUNC_2(VAR_7));
  if (VAR_12 < 1 || VAR_12 > VAR_2)
   return -VAR_1;

  VAR_8->block[0] = VAR_12;
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   VAR_8->block[VAR_11 + 1] = FUNC_4(FUNC_0(VAR_7));
 }
 return 0;
}
