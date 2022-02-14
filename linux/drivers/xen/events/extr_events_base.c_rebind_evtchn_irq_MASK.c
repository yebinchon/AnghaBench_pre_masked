
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {scalar_t__ type; int cpu; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 struct irq_info* FUNC_7 (int) ;
 int VAR_1 ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int) ;

void FUNC_12(int VAR_2, int VAR_3)
{
 struct irq_info *VAR_4 = FUNC_7(VAR_3);

 if (FUNC_1(!VAR_4))
  return;



 FUNC_4(VAR_3);

 FUNC_9(&VAR_1);


 FUNC_0(FUNC_6(VAR_2) != -1);


 FUNC_0(VAR_4->type == VAR_0);

 (void)FUNC_11(VAR_3, VAR_2);

 FUNC_10(&VAR_1);

        FUNC_2(VAR_2, VAR_4->cpu);

 FUNC_8(VAR_3, FUNC_3(VAR_4->cpu));


 FUNC_5(VAR_3);
}
