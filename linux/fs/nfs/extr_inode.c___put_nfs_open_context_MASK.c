
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_5__ {int count; } ;
struct nfs_open_context {int mdsthreshold; int ll_cred; TYPE_2__* dentry; int cred; int list; TYPE_1__ lock_context; } ;
struct inode {int i_lock; } ;
struct TYPE_7__ {int (* close_context ) (struct nfs_open_context*,int) ;} ;
struct TYPE_6__ {struct super_block* d_sb; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfs_open_context*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct nfs_open_context*,int) ;

__attribute__((used)) static void FUNC_14(struct nfs_open_context *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_1->dentry);
 struct super_block *VAR_4 = VAR_1->dentry->d_sb;

 if (!FUNC_10(&VAR_1->lock_context.count))
  return;
 if (!FUNC_6(&VAR_1->list)) {
  FUNC_11(&VAR_3->i_lock);
  FUNC_5(&VAR_1->list);
  FUNC_12(&VAR_3->i_lock);
 }
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3)->close_context(VAR_1, VAR_2);
 FUNC_8(VAR_1->cred);
 FUNC_2(VAR_1->dentry);
 FUNC_7(VAR_4);
 FUNC_9(VAR_1->ll_cred);
 FUNC_3(VAR_1->mdsthreshold);
 FUNC_4(VAR_1, VAR_0);
}
