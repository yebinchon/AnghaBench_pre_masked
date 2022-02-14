
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_namespace {int root_cset; } ;
struct cgroup {int kn; int root; } ;


 struct cgroup* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*,size_t) ;

int FUNC_2(struct cgroup *VAR_0, char *VAR_1, size_t VAR_2,
     struct cgroup_namespace *VAR_3)
{
 struct cgroup *VAR_4 = FUNC_0(VAR_3->root_cset, VAR_0->root);

 return FUNC_1(VAR_0->kn, VAR_4->kn, VAR_1, VAR_2);
}
