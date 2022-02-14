
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idle_inject_thread {int should_run; } ;


 int VAR_0 ;
 struct idle_inject_thread* FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_1)
{
 struct idle_inject_thread *VAR_2 =
  FUNC_0(&VAR_0, VAR_1);

 return VAR_2->should_run;
}
