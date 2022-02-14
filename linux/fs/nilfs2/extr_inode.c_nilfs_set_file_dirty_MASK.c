
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_inode_lock; int ns_dirty_files; int ns_ndirtyblks; } ;
struct nilfs_inode_info {int i_state; int i_dirty; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct the_nilfs* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int,int *) ;
 int * FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(struct inode *VAR_5, unsigned int VAR_6)
{
 struct nilfs_inode_info *VAR_7 = FUNC_0(VAR_5);
 struct the_nilfs *VAR_8 = VAR_5->i_sb->s_fs_info;

 FUNC_1(VAR_6, &VAR_8->ns_ndirtyblks);

 if (FUNC_9(VAR_3, &VAR_7->i_state))
  return 0;

 FUNC_7(&VAR_8->ns_inode_lock);
 if (!FUNC_10(VAR_4, &VAR_7->i_state) &&
     !FUNC_10(VAR_2, &VAR_7->i_state)) {




  if (FUNC_3(&VAR_7->i_dirty) && FUNC_2(VAR_5) == ((void*)0)) {




   FUNC_5(VAR_5->i_sb, VAR_1,
      "cannot set file dirty (ino=%lu): the file is being freed",
      VAR_5->i_ino);
   FUNC_8(&VAR_8->ns_inode_lock);
   return -VAR_0;



  }
  FUNC_4(&VAR_7->i_dirty, &VAR_8->ns_dirty_files);
  FUNC_6(VAR_4, &VAR_7->i_state);
 }
 FUNC_8(&VAR_8->ns_inode_lock);
 return 0;
}
