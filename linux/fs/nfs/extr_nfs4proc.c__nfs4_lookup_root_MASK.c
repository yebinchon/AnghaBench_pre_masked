
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpc_message {struct nfs4_lookup_res* rpc_resp; struct nfs4_lookup_root_arg* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct nfs_fsinfo {int fattr; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_lookup_root_arg {int* bitmask; int seq_args; } ;
struct nfs4_lookup_res {int seq_res; struct nfs_fh* fh; int fattr; struct nfs_server* server; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int* VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_4, struct nfs_fh *VAR_5,
  struct nfs_fsinfo *VAR_6)
{
 u32 VAR_7[3];
 struct nfs4_lookup_root_arg VAR_8 = {
  .bitmask = VAR_7,
 };
 struct nfs4_lookup_res VAR_9 = {
  .server = VAR_4,
  .fattr = VAR_6->fattr,
  .fh = VAR_5,
 };
 struct rpc_message VAR_10 = {
  .rpc_proc = &VAR_3[VAR_1],
  .rpc_argp = &VAR_8,
  .rpc_resp = &VAR_9,
 };

 VAR_7[0] = VAR_2[0];
 VAR_7[1] = VAR_2[1];



 VAR_7[2] = VAR_2[2] & ~VAR_0;

 FUNC_1(VAR_6->fattr);
 return FUNC_0(VAR_4->client, VAR_4, &VAR_10, &VAR_8.seq_args, &VAR_9.seq_res, 0);
}
