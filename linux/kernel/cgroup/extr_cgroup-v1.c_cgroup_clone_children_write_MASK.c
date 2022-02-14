
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct cgroup_subsys_state {TYPE_1__* cgroup; } ;
struct cftype {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct cgroup_subsys_state *VAR_1,
           struct cftype *VAR_2, u64 VAR_3)
{
 if (VAR_3)
  FUNC_1(VAR_0, &VAR_1->cgroup->flags);
 else
  FUNC_0(VAR_0, &VAR_1->cgroup->flags);
 return 0;
}
