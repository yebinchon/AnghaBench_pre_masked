
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int flags; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgroup_subsys_state*) ;
 int FUNC_1 (struct cgroup_subsys_state*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct cgroup_subsys_state *VAR_3)
{
 FUNC_2(&VAR_1);

 if (VAR_3->flags & VAR_0)
  return;

 VAR_3->flags |= VAR_0;





 FUNC_0(VAR_3);





 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->refcnt, VAR_2);
}
