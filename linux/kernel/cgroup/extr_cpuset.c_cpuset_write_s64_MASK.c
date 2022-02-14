
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cftype {int private; } ;
typedef int s64 ;
typedef int cpuset_filetype_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 struct cpuset* FUNC_0 (struct cgroup_subsys_state*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct cpuset*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct cpuset*,int ) ;

__attribute__((used)) static int FUNC_7(struct cgroup_subsys_state *VAR_3, struct cftype *VAR_4,
       s64 VAR_5)
{
 struct cpuset *VAR_6 = FUNC_0(VAR_3);
 cpuset_filetype_t VAR_7 = VAR_4->private;
 int VAR_8 = -VAR_1;

 FUNC_1();
 FUNC_3(&VAR_2);
 if (!FUNC_2(VAR_6))
  goto out_unlock;

 switch (VAR_7) {
 case 128:
  VAR_8 = FUNC_6(VAR_6, VAR_5);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
out_unlock:
 FUNC_4(&VAR_2);
 FUNC_5();
 return VAR_8;
}
