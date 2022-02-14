
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (struct task_struct*) ;

bool FUNC_3(struct task_struct *VAR_1)
{
 bool VAR_2;

 FUNC_0();
 VAR_2 = FUNC_2(VAR_1)->state & VAR_0;
 FUNC_1();

 return VAR_2;
}
