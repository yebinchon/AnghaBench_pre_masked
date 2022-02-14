
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct nfs_open_context {TYPE_1__ lock_context; int dentry; } ;
struct nfs_lock_context {int list; scalar_t__ open_context; } ;
struct inode {int i_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_lock_context* FUNC_0 (int ) ;
 int VAR_2 ;
 struct nfs_lock_context* FUNC_1 (struct nfs_open_context*) ;
 struct inode* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct nfs_open_context*) ;
 int FUNC_4 (struct nfs_lock_context*) ;
 struct nfs_lock_context* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct nfs_lock_context*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct nfs_lock_context *FUNC_12(struct nfs_open_context *VAR_3)
{
 struct nfs_lock_context *VAR_4, *VAR_5 = ((void*)0);
 struct inode *VAR_6 = FUNC_2(VAR_3->dentry);

 FUNC_8();
 VAR_4 = FUNC_1(VAR_3);
 FUNC_9();
 if (VAR_4 == ((void*)0)) {
  VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_2);
  if (VAR_5 == ((void*)0))
   return FUNC_0(-VAR_1);
  FUNC_7(VAR_5);
  FUNC_10(&VAR_6->i_lock);
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == ((void*)0)) {
   VAR_5->open_context = FUNC_3(VAR_3);
   if (VAR_5->open_context) {
    FUNC_6(&VAR_5->list,
      &VAR_3->lock_context.list);
    VAR_4 = VAR_5;
    VAR_5 = ((void*)0);
   } else
    VAR_4 = FUNC_0(-VAR_0);
  }
  FUNC_11(&VAR_6->i_lock);
  FUNC_4(VAR_5);
 }
 return VAR_4;
}
