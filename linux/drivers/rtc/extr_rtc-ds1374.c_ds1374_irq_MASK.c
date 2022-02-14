
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct ds1374 {int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ds1374* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct i2c_client *VAR_3 = VAR_2;
 struct ds1374 *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_1);
 FUNC_2(&VAR_4->work);
 return VAR_0;
}
