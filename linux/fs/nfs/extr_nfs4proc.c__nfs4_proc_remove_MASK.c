
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rpc_message {struct nfs_removeres* rpc_resp; struct nfs_removeargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int dummy; } ;
struct nfs_server {int client; } ;
struct nfs_removeres {int cinfo; int seq_res; struct nfs_server* server; } ;
struct nfs_removeargs {int seq_args; struct qstr const name; int fh; } ;
struct inode {int i_nlink; int i_lock; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 unsigned long VAR_2 ;
 int FUNC_2 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 int FUNC_3 (struct inode*) ;
 int * VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int *,unsigned long,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_4, const struct qstr *VAR_5, u32 VAR_6)
{
 struct nfs_server *VAR_7 = FUNC_1(VAR_4);
 struct nfs_removeargs VAR_8 = {
  .fh = FUNC_0(VAR_4),
  .name = *VAR_5,
 };
 struct nfs_removeres VAR_9 = {
  .server = VAR_7,
 };
 struct rpc_message VAR_10 = {
  .rpc_proc = &VAR_3[VAR_1],
  .rpc_argp = &VAR_8,
  .rpc_resp = &VAR_9,
 };
 unsigned long VAR_11 = VAR_2;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_7->client, VAR_7, &VAR_10, &VAR_8.seq_args, &VAR_9.seq_res, 1);
 if (VAR_12 == 0) {
  FUNC_4(&VAR_4->i_lock);
  FUNC_6(VAR_4, &VAR_9.cinfo, VAR_11, 0);

  if (VAR_6 == VAR_0 && VAR_4->i_nlink > 2)
   FUNC_3(VAR_4);
  FUNC_5(&VAR_4->i_lock);
 }
 return VAR_12;
}
