
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct css_task_iter {int dummy; } ;
struct cgroup_pidlist {int* list; int length; } ;
struct cgroup {int self; int pidlist_mutex; } ;
typedef int pid_t ;
typedef enum cgroup_filetype { ____Placeholder_cgroup_filetype } cgroup_filetype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cgroup_pidlist* FUNC_0 (struct cgroup*,int) ;
 int FUNC_1 (struct cgroup*) ;
 int VAR_3 ;
 int FUNC_2 (struct css_task_iter*) ;
 struct task_struct* FUNC_3 (struct css_task_iter*) ;
 int FUNC_4 (int *,int ,struct css_task_iter*) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (int*,int,int,int ,int *) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct cgroup *VAR_4, enum cgroup_filetype VAR_5,
         struct cgroup_pidlist **VAR_6)
{
 pid_t *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10 = 0;
 struct css_task_iter VAR_11;
 struct task_struct *VAR_12;
 struct cgroup_pidlist *VAR_13;

 FUNC_7(&VAR_4->pidlist_mutex);







 VAR_8 = FUNC_1(VAR_4);
 VAR_7 = FUNC_6(VAR_8, sizeof(pid_t), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_4(&VAR_4->self, 0, &VAR_11);
 while ((VAR_12 = FUNC_3(&VAR_11))) {
  if (FUNC_12(VAR_10 == VAR_8))
   break;

  if (VAR_5 == VAR_0)
   VAR_9 = FUNC_11(VAR_12);
  else
   VAR_9 = FUNC_10(VAR_12);
  if (VAR_9 > 0)
   VAR_7[VAR_10++] = VAR_9;
 }
 FUNC_2(&VAR_11);
 VAR_8 = VAR_10;

 FUNC_9(VAR_7, VAR_8, sizeof(pid_t), VAR_3, ((void*)0));
 if (VAR_5 == VAR_0)
  VAR_8 = FUNC_8(VAR_7, VAR_8);

 VAR_13 = FUNC_0(VAR_4, VAR_5);
 if (!VAR_13) {
  FUNC_5(VAR_7);
  return -VAR_1;
 }


 FUNC_5(VAR_13->list);
 VAR_13->list = VAR_7;
 VAR_13->length = VAR_8;
 *VAR_6 = VAR_13;
 return 0;
}
