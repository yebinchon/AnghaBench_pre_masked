
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_commitres* rpc_resp; struct nfs_commitargs* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct nfs_commitres {int seq_res; } ;
struct nfs_commitargs {int seq_args; int fh; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, struct nfs_commitargs *VAR_3,
    struct nfs_commitres *VAR_4)
{
 struct inode *VAR_5 = FUNC_2(VAR_2);
 struct nfs_server *VAR_6 = FUNC_1(VAR_5);
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = VAR_3,
  .rpc_resp = VAR_4,
 };

 VAR_3->fh = FUNC_0(VAR_5);
 return FUNC_3(VAR_6->client, VAR_6, &VAR_7,
   &VAR_3->seq_args, &VAR_4->seq_res, 1);
}
