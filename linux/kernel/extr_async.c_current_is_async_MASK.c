
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker {scalar_t__ current_func; } ;


 scalar_t__ VAR_0 ;
 struct worker* FUNC_0 () ;

bool FUNC_1(void)
{
 struct worker *VAR_1 = FUNC_0();

 return VAR_1 && VAR_1->current_func == VAR_0;
}
