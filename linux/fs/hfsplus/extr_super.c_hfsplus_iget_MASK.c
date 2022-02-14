
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_state; scalar_t__ i_ino; int i_sb; } ;
struct hfs_find_data {int dummy; } ;
struct TYPE_4__ {int opencnt; int * rsrc_inode; scalar_t__ extent_state; scalar_t__ flags; int extents_lock; int open_dir_lock; int open_dir_list; } ;
struct TYPE_3__ {int cat_tree; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (int ,struct hfs_find_data*) ;
 int FUNC_7 (struct inode*,struct hfs_find_data*) ;
 int FUNC_8 (int ,scalar_t__,struct hfs_find_data*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 struct inode* FUNC_11 (struct super_block*,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct inode*) ;

struct inode *FUNC_15(struct super_block *VAR_4, unsigned long VAR_5)
{
 struct hfs_find_data VAR_6;
 struct inode *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_11(VAR_4, VAR_5);
 if (!VAR_7)
  return FUNC_0(-VAR_0);
 if (!(VAR_7->i_state & VAR_3))
  return VAR_7;

 FUNC_3(&FUNC_1(VAR_7)->open_dir_list);
 FUNC_13(&FUNC_1(VAR_7)->open_dir_lock);
 FUNC_12(&FUNC_1(VAR_7)->extents_lock);
 FUNC_1(VAR_7)->flags = 0;
 FUNC_1(VAR_7)->extent_state = 0;
 FUNC_1(VAR_7)->rsrc_inode = ((void*)0);
 FUNC_4(&FUNC_1(VAR_7)->opencnt, 0);

 if (VAR_7->i_ino >= VAR_1 ||
     VAR_7->i_ino == VAR_2) {
  VAR_8 = FUNC_6(FUNC_2(VAR_7->i_sb)->cat_tree, &VAR_6);
  if (!VAR_8) {
   VAR_8 = FUNC_8(VAR_7->i_sb, VAR_7->i_ino, &VAR_6);
   if (!VAR_8)
    VAR_8 = FUNC_7(VAR_7, &VAR_6);
   FUNC_5(&VAR_6);
  }
 } else {
  VAR_8 = FUNC_9(VAR_7);
 }

 if (VAR_8) {
  FUNC_10(VAR_7);
  return FUNC_0(VAR_8);
 }

 FUNC_14(VAR_7);
 return VAR_7;
}
