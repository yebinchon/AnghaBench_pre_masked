
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct cgroup_subsys_state {struct cgroup* cgroup; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 struct cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 struct cgroup* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cgroup_subsys_state*) ;
 int FUNC_3 (struct cgroup*) ;
 int FUNC_4 (struct cgroup*) ;
 struct cgroup_subsys_state* FUNC_5 (int ,int *) ;
 struct file* FUNC_6 (int) ;
 int FUNC_7 (struct file*) ;

struct cgroup *FUNC_8(int VAR_1)
{
 struct cgroup_subsys_state *VAR_2;
 struct cgroup *VAR_3;
 struct file *VAR_4;

 VAR_4 = FUNC_6(VAR_1);
 if (!VAR_4)
  return FUNC_1(-VAR_0);

 VAR_2 = FUNC_5(VAR_4->f_path.dentry, ((void*)0));
 FUNC_7(VAR_4);
 if (FUNC_2(VAR_2))
  return FUNC_0(VAR_2);

 VAR_3 = VAR_2->cgroup;
 if (!FUNC_3(VAR_3)) {
  FUNC_4(VAR_3);
  return FUNC_1(-VAR_0);
 }

 return VAR_3;
}
