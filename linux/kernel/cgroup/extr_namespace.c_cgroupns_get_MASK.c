
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct nsproxy* nsproxy; } ;
struct nsproxy {struct cgroup_namespace* cgroup_ns; } ;
struct ns_common {int dummy; } ;
struct cgroup_namespace {struct ns_common ns; } ;


 int FUNC_0 (struct cgroup_namespace*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static struct ns_common *FUNC_3(struct task_struct *VAR_0)
{
 struct cgroup_namespace *VAR_1 = ((void*)0);
 struct nsproxy *VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = VAR_0->nsproxy;
 if (VAR_2) {
  VAR_1 = VAR_2->cgroup_ns;
  FUNC_0(VAR_1);
 }
 FUNC_2(VAR_0);

 return VAR_1 ? &VAR_1->ns : ((void*)0);
}
