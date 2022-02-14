
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int dummy; } ;


 int FUNC_0 (struct cgroup*) ;
 scalar_t__ FUNC_1 (struct cgroup*) ;
 scalar_t__ FUNC_2 (struct cgroup*) ;
 struct cgroup* FUNC_3 (struct cgroup*) ;

__attribute__((used)) static bool FUNC_4(struct cgroup *VAR_0)
{

 if (FUNC_2(VAR_0))
  return 0;


 while ((VAR_0 = FUNC_3(VAR_0))) {
  if (!FUNC_0(VAR_0) && FUNC_1(VAR_0))
   return 0;
  if (FUNC_2(VAR_0))
   return 0;
 }

 return 1;
}
