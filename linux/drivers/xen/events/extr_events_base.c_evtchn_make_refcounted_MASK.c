
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 struct irq_info* FUNC_2 (int) ;

int FUNC_3(unsigned int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 struct irq_info *VAR_3;

 if (VAR_2 == -1)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3->refcnt != -1);

 VAR_3->refcnt = 1;

 return 0;
}
