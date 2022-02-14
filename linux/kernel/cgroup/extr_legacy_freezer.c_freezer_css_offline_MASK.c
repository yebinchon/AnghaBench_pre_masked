
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freezer {int state; } ;
struct cgroup_subsys_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct freezer* FUNC_1 (struct cgroup_subsys_state*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct cgroup_subsys_state *VAR_3)
{
 struct freezer *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(&VAR_1);

 if (VAR_4->state & VAR_0)
  FUNC_0(&VAR_2);

 VAR_4->state = 0;

 FUNC_3(&VAR_1);
}
