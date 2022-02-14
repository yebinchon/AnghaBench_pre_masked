
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; } ;
struct nfs_server {int dummy; } ;
struct nfs4_state {int dummy; } ;
struct nfs4_exception {long timeout; scalar_t__ retry; scalar_t__ delay; struct nfs4_state* state; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*,struct nfs_server*,int ,struct nfs4_exception*) ;

int
FUNC_1(struct rpc_task *VAR_1, struct nfs_server *VAR_2,
   struct nfs4_state *VAR_3, long *VAR_4)
{
 struct nfs4_exception VAR_5 = {
  .state = VAR_3,
 };

 if (VAR_1->tk_status >= 0)
  return 0;
 if (VAR_4)
  VAR_5.timeout = *VAR_4;
 VAR_1->tk_status = FUNC_0(VAR_1, VAR_2,
   VAR_1->tk_status,
   &VAR_5);
 if (VAR_5.delay && VAR_4)
  *VAR_4 = VAR_5.timeout;
 if (VAR_5.retry)
  return -VAR_0;
 return 0;
}
