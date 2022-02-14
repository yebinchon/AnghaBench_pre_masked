
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct als_data {int mutex; } ;


 struct als_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0, bool VAR_1)
{
 int VAR_2;
 struct als_data *VAR_3 = FUNC_0(VAR_0);

 FUNC_3(&VAR_3->mutex);
 VAR_2 = FUNC_1(VAR_0, 0x80);
 if (VAR_2 < 0)
  goto fail;
 if (VAR_1)
  VAR_2 = VAR_2 | 0x01;
 else
  VAR_2 = VAR_2 & 0xFE;
 VAR_2 = FUNC_2(VAR_0, 0x80, VAR_2);
fail:
 FUNC_4(&VAR_3->mutex);
 return VAR_2;
}
