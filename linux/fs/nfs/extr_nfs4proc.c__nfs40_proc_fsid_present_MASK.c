
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct cred const* rpc_cred; struct nfs4_fsid_present_res* rpc_resp; struct nfs4_fsid_present_arg* rpc_argp; int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct nfs_server {struct rpc_clnt* client; struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_clientid; } ;
struct nfs4_fsid_present_res {int renew; int * fh; int seq_res; } ;
struct nfs4_fsid_present_arg {int renew; int seq_args; int clientid; int fh; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_client*,unsigned long) ;
 unsigned long VAR_2 ;
 int FUNC_3 (struct rpc_clnt*,struct nfs_server*,struct rpc_message*,int *,int *) ;
 int FUNC_4 (int *,int *,int ,int) ;
 int * VAR_3 ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, const struct cred *VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_1(VAR_4);
 struct nfs_client *VAR_7 = FUNC_1(VAR_4)->nfs_client;
 struct rpc_clnt *VAR_8 = VAR_6->client;
 struct nfs4_fsid_present_arg VAR_9 = {
  .fh = FUNC_0(VAR_4),
  .clientid = VAR_7->cl_clientid,
  .renew = 1,
 };
 struct nfs4_fsid_present_res VAR_10 = {
  .renew = 1,
 };
 struct rpc_message VAR_11 = {
  .rpc_proc = &VAR_3[VAR_1],
  .rpc_argp = &VAR_9,
  .rpc_resp = &VAR_10,
  .rpc_cred = VAR_5,
 };
 unsigned long VAR_12 = VAR_2;
 int VAR_13;

 VAR_10.fh = FUNC_5();
 if (VAR_10.fh == ((void*)0))
  return -VAR_0;

 FUNC_4(&VAR_9.seq_args, &VAR_10.seq_res, 0, 1);
 VAR_13 = FUNC_3(VAR_8, VAR_6, &VAR_11,
      &VAR_9.seq_args, &VAR_10.seq_res);
 FUNC_6(VAR_10.fh);
 if (VAR_13)
  return VAR_13;

 FUNC_2(VAR_7, VAR_12);
 return 0;
}
