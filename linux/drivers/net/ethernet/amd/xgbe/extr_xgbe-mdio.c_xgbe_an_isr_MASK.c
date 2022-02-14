
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int tasklet_an; scalar_t__ isr_as_tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct xgbe_prv_data *VAR_3 = (struct xgbe_prv_data *)VAR_2;

 if (VAR_3->isr_as_tasklet)
  FUNC_0(&VAR_3->tasklet_an);
 else
  FUNC_1((unsigned long)VAR_3);

 return VAR_0;
}
