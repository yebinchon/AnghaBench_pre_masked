
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int * rpc_proc; struct nfs_removeres* rpc_resp; struct nfs_removeargs* rpc_argp; } ;
struct nfs_removeres {int dir_attr; int seq_res; int server; } ;
struct nfs_removeargs {int seq_args; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int,int ) ;
 int FUNC_2 (struct inode*) ;
 int * VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct rpc_message *VAR_2,
  struct dentry *VAR_3,
  struct inode *VAR_4)
{
 struct nfs_removeargs *VAR_5 = VAR_2->rpc_argp;
 struct nfs_removeres *VAR_6 = VAR_2->rpc_resp;

 VAR_6->server = FUNC_0(VAR_3->d_sb);
 VAR_2->rpc_proc = &VAR_1[VAR_0];
 FUNC_1(&VAR_5->seq_args, &VAR_6->seq_res, 1, 0);

 FUNC_3(VAR_6->dir_attr);

 if (VAR_4)
  FUNC_2(VAR_4);
}
