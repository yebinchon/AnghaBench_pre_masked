
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int flags; } ;
struct rpc_message {int dummy; } ;
struct nfs_rpc_ops {int (* read_setup ) (struct nfs_pgio_header*,struct rpc_message*) ;} ;
struct nfs_pgio_header {int good_bytes; int io_start; struct inode* inode; } ;
struct inode {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct nfs_pgio_header*,struct rpc_message*) ;
 int FUNC_2 (struct inode*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct nfs_pgio_header *VAR_1,
         struct rpc_message *VAR_2,
         const struct nfs_rpc_ops *VAR_3,
         struct rpc_task_setup *VAR_4, int VAR_5)
{
 struct inode *VAR_6 = VAR_1->inode;
 int VAR_7 = FUNC_0(VAR_6) ? VAR_0 : 0;

 VAR_4->flags |= VAR_7;
 VAR_3->read_setup(VAR_1, VAR_2);
 FUNC_2(VAR_6, VAR_1->io_start, VAR_1->good_bytes);
}
