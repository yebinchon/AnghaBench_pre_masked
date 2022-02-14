
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_table {unsigned int sched_size; TYPE_1__* tab; } ;
struct sched_class {int dummy; } ;
struct TYPE_2__ {unsigned int idx; int refcnt; int queue_list; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 struct sched_table* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct sched_table*,int ,unsigned int) ;
 int VAR_2 ;

struct sched_table *FUNC_5(unsigned int VAR_3)
{
 struct sched_table *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_2(FUNC_4(VAR_4, VAR_2, VAR_3), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->sched_size = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_4->sched_size; VAR_5++) {
  FUNC_3(&VAR_4->tab[VAR_5], 0, sizeof(struct sched_class));
  VAR_4->tab[VAR_5].idx = VAR_5;
  VAR_4->tab[VAR_5].state = VAR_1;
  FUNC_0(&VAR_4->tab[VAR_5].queue_list);
  FUNC_1(&VAR_4->tab[VAR_5].refcnt, 0);
 }
 return VAR_4;
}
