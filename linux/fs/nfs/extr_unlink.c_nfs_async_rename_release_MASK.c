
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_renamedata {int cred; TYPE_1__* new_dir; TYPE_1__* old_dir; int new_dentry; int old_dentry; scalar_t__ cancelled; } ;
struct TYPE_3__ {int i_lock; struct super_block* i_sb; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct nfs_renamedata*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void *VAR_0)
{
 struct nfs_renamedata *VAR_1 = VAR_0;
 struct super_block *VAR_2 = VAR_1->old_dir->i_sb;

 if (FUNC_1(VAR_1->old_dentry))
  FUNC_6(FUNC_0(VAR_1->old_dentry));



 if (VAR_1->cancelled) {
  FUNC_9(&VAR_1->old_dir->i_lock);
  FUNC_5(VAR_1->old_dir);
  FUNC_10(&VAR_1->old_dir->i_lock);
  if (VAR_1->new_dir != VAR_1->old_dir) {
   FUNC_9(&VAR_1->new_dir->i_lock);
   FUNC_5(VAR_1->new_dir);
   FUNC_10(&VAR_1->new_dir->i_lock);
  }
 }

 FUNC_2(VAR_1->old_dentry);
 FUNC_2(VAR_1->new_dentry);
 FUNC_3(VAR_1->old_dir);
 FUNC_3(VAR_1->new_dir);
 FUNC_7(VAR_2);
 FUNC_8(VAR_1->cred);
 FUNC_4(VAR_1);
}
