
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int dentry; } ;
struct nfs_lock_context {int list; int count; struct nfs_open_context* open_context; } ;
struct inode {int i_lock; } ;


 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs_lock_context*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs_open_context*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct nfs_lock_context *VAR_1)
{
 struct nfs_open_context *VAR_2 = VAR_1->open_context;
 struct inode *VAR_3 = FUNC_0(VAR_2->dentry);

 if (!FUNC_4(&VAR_1->count, &VAR_3->i_lock))
  return;
 FUNC_2(&VAR_1->list);
 FUNC_5(&VAR_3->i_lock);
 FUNC_3(VAR_2);
 FUNC_1(VAR_1, VAR_0);
}
