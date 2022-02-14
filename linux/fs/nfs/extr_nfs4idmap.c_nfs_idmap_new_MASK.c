
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_pipe {int dummy; } ;
struct nfs_client {struct idmap* cl_idmap; TYPE_1__* cl_rpcclient; int cl_net; } ;
struct idmap {int cred; struct rpc_pipe* idmap_pipe; int idmap_pdo; int idmap_mutex; } ;
struct TYPE_2__ {int cl_pipedir_objects; int cl_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rpc_pipe*) ;
 int FUNC_1 (struct rpc_pipe*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct idmap*) ;
 struct idmap* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (struct rpc_pipe*) ;
 int FUNC_9 (int *,int *,struct idmap*) ;
 struct rpc_pipe* FUNC_10 (int *,int ) ;

int
FUNC_11(struct nfs_client *VAR_4)
{
 struct idmap *VAR_5;
 struct rpc_pipe *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_5(&VAR_5->idmap_mutex);
 VAR_5->cred = FUNC_2(VAR_4->cl_rpcclient->cl_cred);

 FUNC_9(&VAR_5->idmap_pdo,
   &VAR_3,
   VAR_5);

 VAR_6 = FUNC_10(&VAR_2, 0);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto err;
 }
 VAR_5->idmap_pipe = VAR_6;

 VAR_7 = FUNC_7(VAR_4->cl_net,
   &VAR_4->cl_rpcclient->cl_pipedir_objects,
   &VAR_5->idmap_pdo);
 if (VAR_7)
  goto err_destroy_pipe;

 VAR_4->cl_idmap = VAR_5;
 return 0;
err_destroy_pipe:
 FUNC_8(VAR_5->idmap_pipe);
err:
 FUNC_6(VAR_5->cred);
 FUNC_3(VAR_5);
 return VAR_7;
}
