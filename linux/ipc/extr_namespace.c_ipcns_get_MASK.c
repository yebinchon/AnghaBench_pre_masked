
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct nsproxy* nsproxy; } ;
struct nsproxy {int ipc_ns; } ;
struct ns_common {int dummy; } ;
struct ipc_namespace {struct ns_common ns; } ;


 struct ipc_namespace* FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static struct ns_common *FUNC_3(struct task_struct *VAR_0)
{
 struct ipc_namespace *VAR_1 = ((void*)0);
 struct nsproxy *VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = VAR_0->nsproxy;
 if (VAR_2)
  VAR_1 = FUNC_0(VAR_2->ipc_ns);
 FUNC_2(VAR_0);

 return VAR_1 ? &VAR_1->ns : ((void*)0);
}
