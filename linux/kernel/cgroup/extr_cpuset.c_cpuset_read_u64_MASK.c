
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpuset {int fmeter; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cftype {int private; } ;
typedef int cpuset_filetype_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct cpuset* FUNC_1 (struct cgroup_subsys_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cpuset*) ;
 int FUNC_4 (struct cpuset*) ;
 int FUNC_5 (struct cpuset*) ;
 int FUNC_6 (struct cpuset*) ;
 int FUNC_7 (struct cpuset*) ;
 int FUNC_8 (struct cpuset*) ;
 int FUNC_9 (struct cpuset*) ;

__attribute__((used)) static u64 FUNC_10(struct cgroup_subsys_state *VAR_1, struct cftype *VAR_2)
{
 struct cpuset *VAR_3 = FUNC_1(VAR_1);
 cpuset_filetype_t VAR_4 = VAR_2->private;
 switch (VAR_4) {
 case 136:
  return FUNC_3(VAR_3);
 case 132:
  return FUNC_4(VAR_3);
 case 131:
  return FUNC_5(VAR_3);
 case 130:
  return FUNC_7(VAR_3);
 case 135:
  return FUNC_6(VAR_3);
 case 133:
  return VAR_0;
 case 134:
  return FUNC_2(&VAR_3->fmeter);
 case 129:
  return FUNC_8(VAR_3);
 case 128:
  return FUNC_9(VAR_3);
 default:
  FUNC_0();
 }


 return 0;
}
