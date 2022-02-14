
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_rstat_cpu {int dummy; } ;
struct cgroup {int rstat_cpu; } ;


 struct cgroup_rstat_cpu* FUNC_0 (int ,int) ;

__attribute__((used)) static struct cgroup_rstat_cpu *FUNC_1(struct cgroup *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->rstat_cpu, VAR_1);
}
