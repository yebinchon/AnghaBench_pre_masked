
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int * rpc_proc; struct nfs_renameres* rpc_resp; struct nfs_renameargs* rpc_argp; } ;
struct nfs_renameres {int seq_res; int server; } ;
struct nfs_renameargs {int seq_args; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_5(struct rpc_message *VAR_2,
  struct dentry *VAR_3,
  struct dentry *VAR_4)
{
 struct nfs_renameargs *VAR_5 = VAR_2->rpc_argp;
 struct nfs_renameres *VAR_6 = VAR_2->rpc_resp;
 struct inode *VAR_7 = FUNC_1(VAR_3);
 struct inode *VAR_8 = FUNC_1(VAR_4);

 if (VAR_7)
  FUNC_3(VAR_7);
 if (VAR_8)
  FUNC_4(VAR_8);
 VAR_2->rpc_proc = &VAR_1[VAR_0];
 VAR_6->server = FUNC_0(VAR_3->d_sb);
 FUNC_2(&VAR_5->seq_args, &VAR_6->seq_res, 1, 0);
}
