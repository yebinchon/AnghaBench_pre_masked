
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052 {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct da9052*,int) ;
 int FUNC_1 (int,int *,int ,int,char*,void*) ;

int FUNC_2(struct da9052 *VAR_2, int VAR_3, char *VAR_4,
      irq_handler_t VAR_5, void *VAR_6)
{
 VAR_3 = FUNC_0(VAR_2, VAR_3);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_3, ((void*)0), VAR_5,
         VAR_1 | VAR_0,
         VAR_4, VAR_6);
}
