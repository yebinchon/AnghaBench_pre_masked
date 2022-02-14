
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys {int dummy; } ;
struct cftype {char* name; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgroup_subsys*,struct cftype*) ;

int FUNC_1(struct cgroup_subsys *VAR_1, struct cftype *VAR_2)
{
 struct cftype *VAR_3;

 for (VAR_3 = VAR_2; VAR_3 && VAR_3->name[0] != '\0'; VAR_3++)
  VAR_3->flags |= VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
