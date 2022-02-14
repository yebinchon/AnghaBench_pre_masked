
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_message {struct nfs4_link_res* rpc_resp; struct nfs4_link_arg* rpc_argp; int * rpc_proc; } ;
struct qstr {int dummy; } ;
struct nfs_server {int client; } ;
struct nfs4_link_res {TYPE_1__* fattr; int * label; int cinfo; int seq_res; struct nfs_server* server; } ;
struct nfs4_link_arg {int seq_args; int * bitmask; struct qstr const* name; int dir_fh; int fh; } ;
struct inode {int dummy; } ;
typedef int __u32 ;
struct TYPE_5__ {int time_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct inode*) ;
 struct nfs_server* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,struct inode*) ;
 int FUNC_5 (struct nfs_server*,int *) ;
 int FUNC_6 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 int FUNC_7 (struct inode*) ;
 int * FUNC_8 (struct nfs_server*,int ) ;
 int FUNC_9 (int *) ;
 int * VAR_4 ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct inode*,TYPE_1__*) ;
 int FUNC_13 (struct inode*,TYPE_1__*,int *) ;
 int FUNC_14 (struct inode*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_5, struct inode *VAR_6, const struct qstr *VAR_7)
{
 struct nfs_server *VAR_8 = FUNC_2(VAR_5);
 __u32 VAR_9[VAR_2];
 struct nfs4_link_arg VAR_10 = {
  .fh = FUNC_1(VAR_5),
  .dir_fh = FUNC_1(VAR_6),
  .name = VAR_7,
  .bitmask = VAR_9,
 };
 struct nfs4_link_res VAR_11 = {
  .server = VAR_8,
  .label = ((void*)0),
 };
 struct rpc_message VAR_12 = {
  .rpc_proc = &VAR_4[VAR_3],
  .rpc_argp = &VAR_10,
  .rpc_resp = &VAR_11,
 };
 int VAR_13 = -VAR_0;

 VAR_11.fattr = FUNC_10();
 if (VAR_11.fattr == ((void*)0))
  goto out;

 VAR_11.label = FUNC_8(VAR_8, VAR_1);
 if (FUNC_0(VAR_11.label)) {
  VAR_13 = FUNC_3(VAR_11.label);
  goto out;
 }

 FUNC_7(VAR_5);
 FUNC_4(VAR_9, FUNC_5(VAR_8, VAR_11.label), VAR_5);

 VAR_13 = FUNC_6(VAR_8->client, VAR_8, &VAR_12, &VAR_10.seq_args, &VAR_11.seq_res, 1);
 if (!VAR_13) {
  FUNC_14(VAR_6, &VAR_11.cinfo, VAR_11.fattr->time_start, 0);
  VAR_13 = FUNC_12(VAR_5, VAR_11.fattr);
  if (!VAR_13)
   FUNC_13(VAR_5, VAR_11.fattr, VAR_11.label);
 }


 FUNC_9(VAR_11.label);

out:
 FUNC_11(VAR_11.fattr);
 return VAR_13;
}
