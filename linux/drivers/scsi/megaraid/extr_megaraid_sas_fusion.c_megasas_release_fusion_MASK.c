
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {int bar; int pdev; int reg_set; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct megasas_instance*) ;
 int FUNC_2 (struct megasas_instance*) ;
 int FUNC_3 (struct megasas_instance*) ;
 int FUNC_4 (int ,int) ;

void
FUNC_5(struct megasas_instance *VAR_0)
{
 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);

 FUNC_0(VAR_0->reg_set);

 FUNC_4(VAR_0->pdev, 1<<VAR_0->bar);
}
