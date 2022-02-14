
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {scalar_t__ irq; int dev; } ;
struct ds1374 {int exiting; int work; int mutex; } ;
struct TYPE_3__ {int * parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,struct i2c_client*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 struct ds1374* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_2)
{
 struct ds1374 *VAR_3 = FUNC_2(VAR_2);






 if (VAR_2->irq > 0) {
  FUNC_4(&VAR_3->mutex);
  VAR_3->exiting = 1;
  FUNC_5(&VAR_3->mutex);

  FUNC_1(&VAR_2->dev, VAR_2->irq, VAR_2);
  FUNC_0(&VAR_3->work);
 }

 return 0;
}
