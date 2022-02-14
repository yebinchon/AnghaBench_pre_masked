
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int flags; } ;
struct css_task_iter {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr_frozen_descendants; } ;
struct cgroup {scalar_t__ nr_descendants; TYPE_1__ freezer; int self; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct cgroup*) ;
 int FUNC_1 (struct task_struct*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct cgroup*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (struct css_task_iter*) ;
 struct task_struct* FUNC_5 (struct css_task_iter*) ;
 int FUNC_6 (int *,int ,struct css_task_iter*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_11(struct cgroup *VAR_5, bool VAR_6)
{
 struct css_task_iter VAR_7;
 struct task_struct *VAR_8;

 FUNC_7(&VAR_2);

 FUNC_9(&VAR_3);
 if (VAR_6)
  FUNC_8(VAR_0, &VAR_5->flags);
 else
  FUNC_3(VAR_0, &VAR_5->flags);
 FUNC_10(&VAR_3);

 if (VAR_6)
  FUNC_0(VAR_6, VAR_5);
 else
  FUNC_0(VAR_4, VAR_5);

 FUNC_6(&VAR_5->self, 0, &VAR_7);
 while ((VAR_8 = FUNC_5(&VAR_7))) {




  if (VAR_8->flags & VAR_1)
   continue;
  FUNC_1(VAR_8, VAR_6);
 }
 FUNC_4(&VAR_7);





 FUNC_9(&VAR_3);
 if (VAR_5->nr_descendants == VAR_5->freezer.nr_frozen_descendants)
  FUNC_2(VAR_5);
 FUNC_10(&VAR_3);
}
