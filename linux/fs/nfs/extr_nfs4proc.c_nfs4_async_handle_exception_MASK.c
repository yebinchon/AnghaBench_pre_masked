
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int dummy; } ;
struct nfs_server {int mig_status; struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_rpcwaitq; int cl_state; } ;
struct nfs4_exception {int retry; scalar_t__ recovering; int timeout; scalar_t__ delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfs_server*,int,struct nfs4_exception*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpc_task*,int ) ;
 int FUNC_3 (int *,struct rpc_task*,int *) ;
 int FUNC_4 (struct rpc_task*) ;
 int FUNC_5 (int *,struct rpc_task*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct rpc_task *VAR_4, struct nfs_server *VAR_5,
  int VAR_6, struct nfs4_exception *VAR_7)
{
 struct nfs_client *VAR_8 = VAR_5->nfs_client;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_7->delay) {
  FUNC_2(VAR_4, FUNC_1(&VAR_7->timeout));
  goto out_retry;
 }
 if (VAR_7->recovering) {
  FUNC_3(&VAR_8->cl_rpcwaitq, VAR_4, ((void*)0));
  if (FUNC_6(VAR_1, &VAR_8->cl_state) == 0)
   FUNC_5(&VAR_8->cl_rpcwaitq, VAR_4);
  goto out_retry;
 }
 if (FUNC_6(VAR_3, &VAR_5->mig_status))
  VAR_9 = -VAR_0;
 return VAR_9;
out_retry:
 if (VAR_9 == 0) {
  VAR_7->retry = 1;




  if (VAR_6 == -VAR_2)
   FUNC_4(VAR_4);
 }
 return VAR_9;
}
