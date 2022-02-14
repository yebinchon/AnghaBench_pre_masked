
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_commit_info {int * completion_ops; int * dreq; int ds; int * mds; struct inode* inode; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int commit_info; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static void FUNC_2(struct nfs_commit_info *VAR_1,
          struct inode *VAR_2)
{
 VAR_1->inode = VAR_2;
 VAR_1->mds = &FUNC_0(VAR_2)->commit_info;
 VAR_1->ds = FUNC_1(VAR_2);
 VAR_1->dreq = ((void*)0);
 VAR_1->completion_ops = &VAR_0;
}
