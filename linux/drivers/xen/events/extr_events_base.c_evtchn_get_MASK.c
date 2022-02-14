
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {scalar_t__ refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 struct irq_info* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 () ;

int FUNC_5(unsigned int VAR_3)
{
 int VAR_4;
 struct irq_info *VAR_5;
 int VAR_6 = -VAR_1;

 if (VAR_3 >= FUNC_4())
  return -VAR_0;

 FUNC_2(&VAR_2);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == -1)
  goto done;

 VAR_5 = FUNC_1(VAR_4);

 if (!VAR_5)
  goto done;

 VAR_6 = -VAR_0;
 if (VAR_5->refcnt <= 0)
  goto done;

 VAR_5->refcnt++;
 VAR_6 = 0;
 done:
 FUNC_3(&VAR_2);

 return VAR_6;
}
