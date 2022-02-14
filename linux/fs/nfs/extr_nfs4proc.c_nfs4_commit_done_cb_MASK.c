
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; } ;
struct nfs_commit_data {struct inode* inode; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct rpc_task*,int ,int *,int *) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (struct nfs_commit_data*,int ) ;

__attribute__((used)) static int FUNC_4(struct rpc_task *VAR_1, struct nfs_commit_data *VAR_2)
{
 struct inode *VAR_3 = VAR_2->inode;

 FUNC_3(VAR_2, VAR_1->tk_status);
 if (FUNC_1(VAR_1, FUNC_0(VAR_3),
        ((void*)0), ((void*)0)) == -VAR_0) {
  FUNC_2(VAR_1);
  return -VAR_0;
 }
 return 0;
}
