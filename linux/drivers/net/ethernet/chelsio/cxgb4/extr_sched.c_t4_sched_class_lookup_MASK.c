
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tp ;
struct sched_table {size_t sched_size; struct sched_class* tab; } ;
struct TYPE_5__ {void* class; } ;
struct TYPE_4__ {TYPE_2__ params; } ;
struct ch_sched_params {scalar_t__ type; TYPE_1__ u; } ;
struct sched_class {scalar_t__ state; struct ch_sched_params const info; } ;
struct port_info {struct sched_table* sched_tbl; } ;
typedef int info ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (struct ch_sched_params*,struct ch_sched_params const*,int) ;

__attribute__((used)) static struct sched_class *FUNC_2(struct port_info *VAR_2,
      const struct ch_sched_params *VAR_3)
{
 struct sched_table *VAR_4 = VAR_2->sched_tbl;
 struct sched_class *VAR_5, *VAR_6;
 struct sched_class *VAR_7 = ((void*)0);

 if (!VAR_3) {

  VAR_6 = &VAR_4->tab[VAR_4->sched_size];
  for (VAR_5 = &VAR_4->tab[0]; VAR_5 != VAR_6; ++VAR_5) {
   if (VAR_5->state == VAR_1) {
    VAR_7 = VAR_5;
    break;
   }
  }
 } else {

  struct ch_sched_params VAR_8;
  struct ch_sched_params VAR_9;

  FUNC_1(&VAR_9, VAR_3, sizeof(VAR_9));

  VAR_9.u.params.class = VAR_0;

  VAR_6 = &VAR_4->tab[VAR_4->sched_size];
  for (VAR_5 = &VAR_4->tab[0]; VAR_5 != VAR_6; ++VAR_5) {
   if (VAR_5->state == VAR_1)
    continue;

   FUNC_1(&VAR_8, &VAR_5->info, sizeof(VAR_8));

   VAR_8.u.params.class = VAR_0;

   if ((VAR_8.type == VAR_9.type) &&
       (!FUNC_0(&VAR_8.u.params, &VAR_9.u.params,
         sizeof(VAR_8.u.params)))) {
    VAR_7 = VAR_5;
    break;
   }
  }
 }

 return VAR_7;
}
