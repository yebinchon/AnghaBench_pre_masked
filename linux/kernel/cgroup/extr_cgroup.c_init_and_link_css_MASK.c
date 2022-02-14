
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int id; int rstat_css_node; int parent; int online_cnt; scalar_t__ serial_nr; int children; int sibling; struct cgroup_subsys* ss; struct cgroup* cgroup; } ;
struct cgroup_subsys {scalar_t__ css_rstat_flush; } ;
struct cgroup {int rstat_css_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct cgroup*,struct cgroup_subsys*) ;
 int FUNC_4 (struct cgroup*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (struct cgroup*) ;
 struct cgroup* FUNC_6 (struct cgroup*) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct cgroup_subsys_state*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct cgroup_subsys_state *VAR_2,
         struct cgroup_subsys *VAR_3, struct cgroup *VAR_4)
{
 FUNC_9(&VAR_0);

 FUNC_4(VAR_4);

 FUNC_10(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->cgroup = VAR_4;
 VAR_2->ss = VAR_3;
 VAR_2->id = -1;
 FUNC_1(&VAR_2->sibling);
 FUNC_1(&VAR_2->children);
 FUNC_1(&VAR_2->rstat_css_node);
 VAR_2->serial_nr = VAR_1++;
 FUNC_2(&VAR_2->online_cnt, 0);

 if (FUNC_6(VAR_4)) {
  VAR_2->parent = FUNC_3(FUNC_6(VAR_4), VAR_3);
  FUNC_7(VAR_2->parent);
 }

 if (FUNC_5(VAR_4) && VAR_3->css_rstat_flush)
  FUNC_8(&VAR_2->rstat_css_node, &VAR_4->rstat_css_list);

 FUNC_0(FUNC_3(VAR_4, VAR_3));
}
