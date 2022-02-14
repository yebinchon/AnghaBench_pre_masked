
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052 {int irq_data; int chip_irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct da9052*,int ,struct da9052*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct da9052 *VAR_1)
{
 FUNC_0(VAR_1, VAR_0, VAR_1);
 FUNC_1(VAR_1->chip_irq, VAR_1->irq_data);

 return 0;
}
