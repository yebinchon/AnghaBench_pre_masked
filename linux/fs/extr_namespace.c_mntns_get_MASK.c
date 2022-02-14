
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct nsproxy* nsproxy; } ;
struct nsproxy {TYPE_1__* mnt_ns; } ;
struct ns_common {int dummy; } ;
struct TYPE_2__ {struct ns_common ns; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct ns_common*) ;

__attribute__((used)) static struct ns_common *FUNC_4(struct task_struct *VAR_0)
{
 struct ns_common *VAR_1 = ((void*)0);
 struct nsproxy *VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = VAR_0->nsproxy;
 if (VAR_2) {
  VAR_1 = &VAR_2->mnt_ns->ns;
  FUNC_0(FUNC_3(VAR_1));
 }
 FUNC_2(VAR_0);

 return VAR_1;
}
