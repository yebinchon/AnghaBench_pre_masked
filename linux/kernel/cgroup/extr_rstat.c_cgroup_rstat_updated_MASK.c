
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_rstat_cpu {struct cgroup* updated_children; struct cgroup* updated_next; } ;
struct cgroup {int dummy; } ;
typedef int raw_spinlock_t ;


 struct cgroup* FUNC_0 (struct cgroup*) ;
 struct cgroup_rstat_cpu* FUNC_1 (struct cgroup*,int) ;
 int VAR_0 ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;

void FUNC_6(struct cgroup *VAR_1, int VAR_2)
{
 raw_spinlock_t *VAR_3 = FUNC_2(&VAR_0, VAR_2);
 struct cgroup *VAR_4;
 unsigned long VAR_5;


 if (!FUNC_0(VAR_1))
  return;





 FUNC_5();






 if (FUNC_1(VAR_1, VAR_2)->updated_next)
  return;

 FUNC_3(VAR_3, VAR_5);


 for (VAR_4 = FUNC_0(VAR_1); VAR_4;
      VAR_1 = VAR_4, VAR_4 = FUNC_0(VAR_1)) {
  struct cgroup_rstat_cpu *VAR_6 = FUNC_1(VAR_1, VAR_2);
  struct cgroup_rstat_cpu *VAR_7 = FUNC_1(VAR_4, VAR_2);





  if (VAR_6->updated_next)
   break;

  VAR_6->updated_next = VAR_7->updated_children;
  VAR_7->updated_children = VAR_1;
 }

 FUNC_4(VAR_3, VAR_5);
}
