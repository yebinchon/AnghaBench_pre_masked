
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup_subsys_state {int dummy; } ;
struct TYPE_2__ {int effective_mems; int mems_allowed; int effective_cpus; int cpus_allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_6(struct cgroup_subsys_state *VAR_5)
{
 FUNC_2(&VAR_2);
 FUNC_4(&VAR_0);

 if (FUNC_1()) {
  FUNC_0(VAR_4.cpus_allowed, VAR_1);
  VAR_4.mems_allowed = VAR_3;
 } else {
  FUNC_0(VAR_4.cpus_allowed,
        VAR_4.effective_cpus);
  VAR_4.mems_allowed = VAR_4.effective_mems;
 }

 FUNC_5(&VAR_0);
 FUNC_3(&VAR_2);
}
