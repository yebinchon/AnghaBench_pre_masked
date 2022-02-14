
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int rpc_cred; struct nfs4_accessres* rpc_resp; struct nfs4_accessargs* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; int cache_consistency_bitmask; } ;
struct nfs_access_entry {int cred; int mask; } ;
struct nfs4_accessres {int * fattr; int access; int seq_res; struct nfs_server* server; } ;
struct nfs4_accessargs {int seq_args; int bitmask; int access; int fh; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int * VAR_3 ;
 int FUNC_4 (struct nfs_access_entry*,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct nfs_access_entry *VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_1(VAR_4);
 struct nfs4_accessargs VAR_7 = {
  .fh = FUNC_0(VAR_4),
  .access = VAR_5->mask,
 };
 struct nfs4_accessres VAR_8 = {
  .server = VAR_6,
 };
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_3[VAR_2],
  .rpc_argp = &VAR_7,
  .rpc_resp = &VAR_8,
  .rpc_cred = VAR_5->cred,
 };
 int VAR_10 = 0;

 if (!FUNC_3(VAR_4, VAR_1)) {
  VAR_8.fattr = FUNC_5();
  if (VAR_8.fattr == ((void*)0))
   return -VAR_0;
  VAR_7.bitmask = VAR_6->cache_consistency_bitmask;
 }
 VAR_10 = FUNC_2(VAR_6->client, VAR_6, &VAR_9, &VAR_7.seq_args, &VAR_8.seq_res, 0);
 if (!VAR_10) {
  FUNC_4(VAR_5, VAR_8.access);
  if (VAR_8.fattr)
   FUNC_7(VAR_4, VAR_8.fattr);
 }
 FUNC_6(VAR_8.fattr);
 return VAR_10;
}
