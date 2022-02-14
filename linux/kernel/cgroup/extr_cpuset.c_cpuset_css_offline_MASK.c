
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int use_parent_ecpus; int flags; int child_ecpus_count; } ;
struct cgroup_subsys_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 struct cpuset* FUNC_3 (struct cgroup_subsys_state*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct cpuset*) ;
 scalar_t__ FUNC_6 (struct cpuset*) ;
 struct cpuset* FUNC_7 (struct cpuset*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,struct cpuset*,int ) ;
 int FUNC_12 (struct cpuset*,int ) ;

__attribute__((used)) static void FUNC_13(struct cgroup_subsys_state *VAR_4)
{
 struct cpuset *VAR_5 = FUNC_3(VAR_4);

 FUNC_4();
 FUNC_8(&VAR_3);

 if (FUNC_5(VAR_5))
  FUNC_12(VAR_5, 0);

 if (!FUNC_0(VAR_2) &&
     FUNC_6(VAR_5))
  FUNC_11(VAR_1, VAR_5, 0);

 if (VAR_5->use_parent_ecpus) {
  struct cpuset *VAR_6 = FUNC_7(VAR_5);

  VAR_5->use_parent_ecpus = 0;
  VAR_6->child_ecpus_count--;
 }

 FUNC_2();
 FUNC_1(VAR_0, &VAR_5->flags);

 FUNC_9(&VAR_3);
 FUNC_10();
}
