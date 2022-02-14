
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int subtree_control; scalar_t__ nr_populated_domain_children; } ;


 scalar_t__ FUNC_0 (struct cgroup*) ;
 scalar_t__ FUNC_1 (struct cgroup*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct cgroup *VAR_1)
{

 if (FUNC_0(VAR_1))
  return 1;


 if (FUNC_1(VAR_1))
  return 0;


 if (VAR_1->nr_populated_domain_children)
  return 0;


 if (VAR_1->subtree_control & ~VAR_0)
  return 0;

 return 1;
}
