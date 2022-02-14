
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct most_interface {TYPE_1__* p; } ;
struct most_channel {int enqueue_halt; int nq_mutex; } ;
struct TYPE_2__ {struct most_channel** channel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct most_interface *VAR_0, int VAR_1)
{
 struct most_channel *VAR_2 = VAR_0->p->channel[VAR_1];

 if (!VAR_2)
  return;

 FUNC_0(&VAR_2->nq_mutex);
 VAR_2->enqueue_halt = 1;
 FUNC_1(&VAR_2->nq_mutex);
}
