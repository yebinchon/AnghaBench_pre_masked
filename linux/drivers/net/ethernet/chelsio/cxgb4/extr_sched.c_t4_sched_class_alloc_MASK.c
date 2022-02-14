
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ class; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct ch_sched_params {TYPE_2__ u; } ;
struct sched_class {scalar_t__ idx; int state; int refcnt; struct ch_sched_params info; } ;
struct port_info {int dummy; } ;
typedef int np ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ch_sched_params*,struct ch_sched_params*,int) ;
 int FUNC_2 (struct port_info*,struct ch_sched_params*,int ) ;
 struct sched_class* FUNC_3 (struct port_info*,struct ch_sched_params*) ;

__attribute__((used)) static struct sched_class *FUNC_4(struct port_info *VAR_3,
      struct ch_sched_params *VAR_4)
{
 struct sched_class *VAR_5;
 u8 VAR_6;
 int VAR_7;

 if (!VAR_4)
  return ((void*)0);

 VAR_6 = VAR_4->u.params.class;




 if (VAR_6 != VAR_0)
  return ((void*)0);




 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_5) {
  struct ch_sched_params VAR_8;


  VAR_5 = FUNC_3(VAR_3, ((void*)0));
  if (!VAR_5)
   return ((void*)0);

  FUNC_1(&VAR_8, VAR_4, sizeof(VAR_8));
  VAR_8.u.params.class = VAR_5->idx;

  VAR_7 = FUNC_2(VAR_3, &VAR_8, VAR_1);
  if (VAR_7)
   return ((void*)0);
  FUNC_1(&VAR_5->info, &VAR_8, sizeof(VAR_5->info));
  FUNC_0(&VAR_5->refcnt, 0);
  VAR_5->state = VAR_2;
 }

 return VAR_5;
}
