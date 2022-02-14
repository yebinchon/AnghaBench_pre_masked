
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct ds1374 {int mutex; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ds1374* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, unsigned int VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_4);
 struct ds1374 *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 FUNC_3(&VAR_7->mutex);

 VAR_8 = FUNC_1(VAR_6, VAR_0);
 if (VAR_8 < 0)
  goto out;

 if (VAR_5) {
  VAR_8 |= VAR_2 | VAR_1;
  VAR_8 &= ~VAR_3;
 } else {
  VAR_8 &= ~VAR_2;
 }
 VAR_8 = FUNC_2(VAR_6, VAR_0, VAR_8);

out:
 FUNC_4(&VAR_7->mutex);
 return VAR_8;
}
