
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cgroup_root {int dummy; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgroup*,char*,size_t,int *) ;
 int VAR_2 ;
 struct cgroup_root* FUNC_1 (int *,int*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,size_t) ;
 struct cgroup* FUNC_7 (struct task_struct*,struct cgroup_root*) ;

int FUNC_8(struct task_struct *VAR_4, char *VAR_5, size_t VAR_6)
{
 struct cgroup_root *VAR_7;
 struct cgroup *VAR_8;
 int VAR_9 = 1;
 int VAR_10;

 FUNC_2(&VAR_1);
 FUNC_4(&VAR_2);

 VAR_7 = FUNC_1(&VAR_0, &VAR_9);

 if (VAR_7) {
  VAR_8 = FUNC_7(VAR_4, VAR_7);
  VAR_10 = FUNC_0(VAR_8, VAR_5, VAR_6, &VAR_3);
 } else {

  VAR_10 = FUNC_6(VAR_5, "/", VAR_6);
 }

 FUNC_5(&VAR_2);
 FUNC_3(&VAR_1);
 return VAR_10;
}
