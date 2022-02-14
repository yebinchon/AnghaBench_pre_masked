
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int release_agent_work; int self; } ;


 int FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct cgroup*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct cgroup*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cgroup *VAR_0)
{
 if (FUNC_3(VAR_0) && !FUNC_1(VAR_0) &&
     !FUNC_2(&VAR_0->self) && !FUNC_0(VAR_0))
  FUNC_4(&VAR_0->release_agent_work);
}
