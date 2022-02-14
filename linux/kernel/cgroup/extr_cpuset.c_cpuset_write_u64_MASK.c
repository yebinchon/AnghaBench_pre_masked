
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpuset {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cftype {int private; } ;
typedef int cpuset_filetype_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct cpuset* FUNC_0 (struct cgroup_subsys_state*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct cpuset*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,struct cpuset*,int ) ;

__attribute__((used)) static int FUNC_7(struct cgroup_subsys_state *VAR_11, struct cftype *VAR_12,
       u64 VAR_13)
{
 struct cpuset *VAR_14 = FUNC_0(VAR_11);
 cpuset_filetype_t VAR_15 = VAR_12->private;
 int VAR_16 = 0;

 FUNC_1();
 FUNC_3(&VAR_10);
 if (!FUNC_2(VAR_14)) {
  VAR_16 = -VAR_8;
  goto out_unlock;
 }

 switch (VAR_15) {
 case 135:
  VAR_16 = FUNC_6(VAR_0, VAR_14, VAR_13);
  break;
 case 132:
  VAR_16 = FUNC_6(VAR_2, VAR_14, VAR_13);
  break;
 case 131:
  VAR_16 = FUNC_6(VAR_3, VAR_14, VAR_13);
  break;
 case 130:
  VAR_16 = FUNC_6(VAR_4, VAR_14, VAR_13);
  break;
 case 134:
  VAR_16 = FUNC_6(VAR_1, VAR_14, VAR_13);
  break;
 case 133:
  VAR_9 = !!VAR_13;
  break;
 case 129:
  VAR_16 = FUNC_6(VAR_5, VAR_14, VAR_13);
  break;
 case 128:
  VAR_16 = FUNC_6(VAR_6, VAR_14, VAR_13);
  break;
 default:
  VAR_16 = -VAR_7;
  break;
 }
out_unlock:
 FUNC_4(&VAR_10);
 FUNC_5();
 return VAR_16;
}
