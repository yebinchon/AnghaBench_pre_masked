
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk808 {int * pm_pwroff_prep_fn; int * pm_pwroff_fn; int irq_data; } ;
struct i2c_client {int irq; } ;


 struct rk808* FUNC_0 (struct i2c_client*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2)
{
 struct rk808 *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2->irq, VAR_3->irq_data);





 if (VAR_3->pm_pwroff_fn && VAR_0 == VAR_3->pm_pwroff_fn)
  VAR_0 = ((void*)0);




 if (VAR_3->pm_pwroff_prep_fn &&
     VAR_1 == VAR_3->pm_pwroff_prep_fn)
  VAR_1 = ((void*)0);

 return 0;
}
