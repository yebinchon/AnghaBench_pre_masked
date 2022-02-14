
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {int irq; int dev; int ucsi; int work; int pm_work; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct ucsi_ccg*) ;
 struct ucsi_ccg* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct ucsi_ccg *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->pm_work);
 FUNC_0(&VAR_1->work);
 FUNC_4(VAR_1->ucsi);
 FUNC_3(VAR_1->dev);
 FUNC_1(VAR_1->irq, VAR_1);

 return 0;
}
