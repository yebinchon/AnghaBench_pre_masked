
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rpc_message {struct cred const* rpc_cred; struct nfs4_fs_locations_res* rpc_resp; struct nfs4_fs_locations_arg* rpc_argp; int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct page {int dummy; } ;
struct nfs_server {TYPE_1__* nfs_client; struct rpc_clnt* client; } ;
struct nfs4_fs_locations_res {int migration; int renew; int seq_res; struct nfs4_fs_locations* fs_locations; } ;
struct nfs4_fs_locations_arg {int* bitmask; int migration; int renew; int seq_args; struct page* page; int fh; int clientid; } ;
struct nfs4_fs_locations {scalar_t__ nlocations; struct nfs_server* server; int fattr; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int cl_clientid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 unsigned long VAR_3 ;
 int FUNC_2 (struct rpc_clnt*,struct nfs_server*,struct rpc_message*,int *,int *) ;
 int FUNC_3 (int *,int *,int ,int) ;
 int * VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfs_server*,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5,
         struct nfs4_fs_locations *VAR_6,
         struct page *VAR_7, const struct cred *VAR_8)
{
 struct nfs_server *VAR_9 = FUNC_1(VAR_5);
 struct rpc_clnt *VAR_10 = VAR_9->client;
 u32 VAR_11[2] = {
  [0] = VAR_0 | VAR_1,
 };
 struct nfs4_fs_locations_arg VAR_12 = {
  .clientid = VAR_9->nfs_client->cl_clientid,
  .fh = FUNC_0(VAR_5),
  .page = VAR_7,
  .bitmask = VAR_11,
  .migration = 1,
  .renew = 1,
 };
 struct nfs4_fs_locations_res VAR_13 = {
  .fs_locations = VAR_6,
  .migration = 1,
  .renew = 1,
 };
 struct rpc_message VAR_14 = {
  .rpc_proc = &VAR_4[VAR_2],
  .rpc_argp = &VAR_12,
  .rpc_resp = &VAR_13,
  .rpc_cred = VAR_8,
 };
 unsigned long VAR_15 = VAR_3;
 int VAR_16;

 FUNC_4(&VAR_6->fattr);
 VAR_6->server = VAR_9;
 VAR_6->nlocations = 0;

 FUNC_3(&VAR_12.seq_args, &VAR_13.seq_res, 0, 1);
 VAR_16 = FUNC_2(VAR_10, VAR_9, &VAR_14,
     &VAR_12.seq_args, &VAR_13.seq_res);
 if (VAR_16)
  return VAR_16;

 FUNC_5(VAR_9, VAR_15);
 return 0;
}
