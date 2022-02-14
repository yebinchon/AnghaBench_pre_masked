
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29003_data {int lock; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 struct isl29003_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_3)
{
 struct isl29003_data *VAR_4 = FUNC_0(VAR_3);
 int VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_4(&VAR_4->lock);
 VAR_5 = FUNC_1(VAR_3, VAR_0);

 if (VAR_5 < 0) {
  FUNC_5(&VAR_4->lock);
  return VAR_5;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_1);
 FUNC_5(&VAR_4->lock);

 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_2(VAR_3);
 VAR_8 = (4 - FUNC_3(VAR_3)) * 4;
 return (((VAR_6 << 8) | VAR_5) * VAR_2[VAR_7]) >> VAR_8;
}
