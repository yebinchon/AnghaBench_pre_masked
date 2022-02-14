
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int FUNC_0 (struct arizona*,int) ;
 int FUNC_1 (int,int *,int ,int ,char*,void*) ;

int FUNC_2(struct arizona *VAR_1, int VAR_2, char *VAR_3,
      irq_handler_t VAR_4, void *VAR_5)
{
 VAR_2 = FUNC_0(VAR_1, VAR_2);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_1(VAR_2, ((void*)0), VAR_4, VAR_0,
        VAR_3, VAR_5);
}
