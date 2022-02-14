
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9062_thermal {int work; int irq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct da9062_thermal *VAR_4 = VAR_3;

 FUNC_0(VAR_4->irq);
 FUNC_1(VAR_1, &VAR_4->work, 0);

 return VAR_0;
}
