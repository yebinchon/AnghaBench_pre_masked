
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cgroup_subsys_state {TYPE_1__* cgroup; } ;
struct cftype {int dummy; } ;
struct TYPE_2__ {int self; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u64 FUNC_2(struct cgroup_subsys_state *VAR_0, struct cftype *VAR_1)
{
 return (!FUNC_0(VAR_0->cgroup) &&
  !FUNC_1(&VAR_0->cgroup->self));
}
