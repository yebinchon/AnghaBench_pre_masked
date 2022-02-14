
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge {struct sched* tx_sched; } ;
struct sched {size_t port; TYPE_1__* p; int sched_tsk; } ;
struct TYPE_2__ {int skbq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sge *VAR_1)
{
 struct sched *VAR_2 = VAR_1->tx_sched;
 int VAR_3;

 FUNC_1(&VAR_2->sched_tsk);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_2->p[VAR_2->port].skbq);
}
