
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys {int cfts; int id; } ;
struct cftype {char* name; int node; } ;


 int FUNC_0 (struct cftype*,int) ;
 int FUNC_1 (struct cgroup_subsys*,struct cftype*) ;
 int VAR_0 ;
 int FUNC_2 (struct cftype*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct cgroup_subsys *VAR_1, struct cftype *VAR_2)
{
 int VAR_3;

 if (!FUNC_3(VAR_1->id))
  return 0;

 if (!VAR_2 || VAR_2[0].name[0] == '\0')
  return 0;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_5(&VAR_0);

 FUNC_4(&VAR_2->node, &VAR_1->cfts);
 VAR_3 = FUNC_0(VAR_2, 1);
 if (VAR_3)
  FUNC_2(VAR_2);

 FUNC_6(&VAR_0);
 return VAR_3;
}
