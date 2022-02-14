
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_rstat_cpu {struct cgroup* updated_next; struct cgroup* updated_children; } ;
struct cgroup {int dummy; } ;


 int FUNC_0 (int) ;
 struct cgroup* FUNC_1 (struct cgroup*) ;
 struct cgroup_rstat_cpu* FUNC_2 (struct cgroup*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static struct cgroup *FUNC_4(struct cgroup *VAR_0,
         struct cgroup *VAR_1, int VAR_2)
{
 struct cgroup_rstat_cpu *VAR_3;

 if (VAR_0 == VAR_1)
  return ((void*)0);





 if (!VAR_0)
  VAR_0 = VAR_1;
 else
  VAR_0 = FUNC_1(VAR_0);


 while (1) {
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  if (VAR_3->updated_children == VAR_0)
   break;
  VAR_0 = VAR_3->updated_children;
 }







 if (VAR_3->updated_next) {
  struct cgroup *VAR_4 = FUNC_1(VAR_0);
  struct cgroup_rstat_cpu *VAR_5 = FUNC_2(VAR_4, VAR_2);
  struct cgroup_rstat_cpu *VAR_6;
  struct cgroup **VAR_7;

  VAR_7 = &VAR_5->updated_children;
  while (1) {
   VAR_6 = FUNC_2(*VAR_7, VAR_2);
   if (*VAR_7 == VAR_0)
    break;

   FUNC_0(*VAR_7 == VAR_4);
   VAR_7 = &VAR_6->updated_next;
  }

  *VAR_7 = VAR_3->updated_next;
  VAR_3->updated_next = ((void*)0);






  FUNC_3();

  return VAR_0;
 }


 return ((void*)0);
}
