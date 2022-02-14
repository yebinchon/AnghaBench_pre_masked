
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_task {TYPE_1__* slow_task; } ;
struct TYPE_2__ {int completion; int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sas_task *VAR_0)
{
 FUNC_1(&VAR_0->slow_task->timer);
 FUNC_0(&VAR_0->slow_task->completion);
}
