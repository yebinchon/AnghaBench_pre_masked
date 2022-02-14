
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int tk_status; int tk_pid; } ;
struct nfs_commit_data {int inode; } ;
struct TYPE_2__ {int (* commit_done ) (struct rpc_task*,struct nfs_commit_data*) ;} ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct rpc_task*,struct nfs_commit_data*) ;
 int FUNC_3 (struct nfs_commit_data*) ;

__attribute__((used)) static void FUNC_4(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_commit_data *VAR_2 = VAR_1;

        FUNC_1("NFS: %5u nfs_commit_done (status %d)\n",
                                VAR_0->tk_pid, VAR_0->tk_status);


 FUNC_0(VAR_2->inode)->commit_done(VAR_0, VAR_2);
 FUNC_3(VAR_2);
}
