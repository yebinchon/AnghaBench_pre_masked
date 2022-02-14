
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_frozen_tasks; } ;
struct cgroup {int events_file; int flags; TYPE_1__ freezer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cgroup*,int) ;
 scalar_t__ FUNC_1 (struct cgroup*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cgroup*,int) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct cgroup *VAR_4)
{
 bool VAR_5;

 FUNC_5(&VAR_2);






 VAR_5 = FUNC_7(VAR_0, &VAR_4->flags) &&
  VAR_4->freezer.nr_frozen_tasks == FUNC_1(VAR_4);

 if (VAR_5) {

  if (FUNC_7(VAR_1, &VAR_4->flags))
   return;

  FUNC_6(VAR_1, &VAR_4->flags);
 } else {

  if (!FUNC_7(VAR_1, &VAR_4->flags))
   return;

  FUNC_4(VAR_1, &VAR_4->flags);
 }
 FUNC_2(&VAR_4->events_file);
 FUNC_0(VAR_3, VAR_4, VAR_5);


 FUNC_3(VAR_4, VAR_5);
}
