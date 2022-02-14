
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nlmclnt_operations {int (* nlmclnt_unlock_prepare ) (struct rpc_task*,int ) ;} ;
struct nlm_rqst {int a_callback_data; TYPE_1__* a_host; } ;
struct TYPE_2__ {struct nlmclnt_operations* h_nlmclnt_ops; } ;


 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*,int ) ;

__attribute__((used)) static void FUNC_2(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nlm_rqst *VAR_2 = VAR_1;
 const struct nlmclnt_operations *VAR_3 = VAR_2->a_host->h_nlmclnt_ops;
 bool VAR_4 = 0;

 if (VAR_3 && VAR_3->nlmclnt_unlock_prepare)
  VAR_4 = VAR_3->nlmclnt_unlock_prepare(VAR_0, VAR_2->a_callback_data);

 if (!VAR_4)
  FUNC_0(VAR_0);
}
