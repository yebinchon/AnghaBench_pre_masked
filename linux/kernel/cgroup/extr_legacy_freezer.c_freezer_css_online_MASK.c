
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freezer {int state; } ;
struct cgroup_subsys_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct freezer* FUNC_1 (struct cgroup_subsys_state*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct freezer* FUNC_4 (struct freezer*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct cgroup_subsys_state *VAR_6)
{
 struct freezer *VAR_7 = FUNC_1(VAR_6);
 struct freezer *VAR_8 = FUNC_4(VAR_7);

 FUNC_2(&VAR_4);

 VAR_7->state |= VAR_0;

 if (VAR_8 && (VAR_8->state & VAR_1)) {
  VAR_7->state |= VAR_2 | VAR_3;
  FUNC_0(&VAR_5);
 }

 FUNC_3(&VAR_4);
 return 0;
}
