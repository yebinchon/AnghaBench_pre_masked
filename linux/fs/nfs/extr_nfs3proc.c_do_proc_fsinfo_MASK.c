
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_fsinfo* rpc_resp; struct nfs_fh* rpc_argp; int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct nfs_fsinfo {int fattr; } ;
struct nfs_fh {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_clnt*,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_3(struct rpc_clnt *VAR_2, struct nfs_fh *VAR_3,
   struct nfs_fsinfo *VAR_4)
{
 struct rpc_message VAR_5 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = VAR_3,
  .rpc_resp = VAR_4,
 };
 int VAR_6;

 FUNC_0("NFS call  fsinfo\n");
 FUNC_1(VAR_4->fattr);
 VAR_6 = FUNC_2(VAR_2, &VAR_5, 0);
 FUNC_0("NFS reply fsinfo: %d\n", VAR_6);
 return VAR_6;
}
