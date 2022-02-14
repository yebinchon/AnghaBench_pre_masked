
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct the_nilfs {int ns_next_gen_lock; int ns_next_generation; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_root {int inodes_count; int ifile; } ;
struct nilfs_inode_info {int i_flags; scalar_t__ i_dir_start_lookup; int i_state; int i_bmap; int i_bh; struct nilfs_root* i_root; } ;
struct inode {scalar_t__ i_generation; int i_ctime; int i_atime; int i_mtime; int i_ino; int i_mapping; struct super_block* i_sb; } ;
typedef int ino_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_1 (int) ;
 int VAR_2 ;
 struct nilfs_inode_info* FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct inode*,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 struct inode* FUNC_14 (struct super_block*) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (struct inode*,struct inode*) ;
 scalar_t__ FUNC_18 (struct inode*,struct nilfs_root*,int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (struct inode*) ;

struct inode *FUNC_26(struct inode *VAR_6, umode_t VAR_7)
{
 struct super_block *VAR_8 = VAR_6->i_sb;
 struct the_nilfs *VAR_9 = VAR_8->s_fs_info;
 struct inode *VAR_10;
 struct nilfs_inode_info *VAR_11;
 struct nilfs_root *VAR_12;
 int VAR_13 = -VAR_1;
 ino_t VAR_14;

 VAR_10 = FUNC_14(VAR_8);
 if (FUNC_24(!VAR_10))
  goto failed;

 FUNC_13(VAR_10->i_mapping,
      FUNC_12(VAR_10->i_mapping, ~VAR_5));

 VAR_12 = FUNC_2(VAR_6)->i_root;
 VAR_11 = FUNC_2(VAR_10);
 VAR_11->i_state = FUNC_0(VAR_4);
 VAR_11->i_root = VAR_12;

 VAR_13 = FUNC_16(VAR_12->ifile, &VAR_14, &VAR_11->i_bh);
 if (FUNC_24(VAR_13))
  goto failed_ifile_create_inode;


 FUNC_6(&VAR_12->inodes_count);
 FUNC_9(VAR_10, VAR_6, VAR_7);
 VAR_10->i_ino = VAR_14;
 VAR_10->i_mtime = VAR_10->i_atime = VAR_10->i_ctime = FUNC_8(VAR_10);

 if (FUNC_5(VAR_7) || FUNC_3(VAR_7) || FUNC_4(VAR_7)) {
  VAR_13 = FUNC_15(VAR_11->i_bmap, ((void*)0));
  if (VAR_13 < 0)
   goto failed_after_creation;

  FUNC_21(VAR_3, &VAR_11->i_state);

 }

 VAR_11->i_flags = FUNC_19(
  VAR_7, FUNC_2(VAR_6)->i_flags & VAR_2);



 VAR_11->i_dir_start_lookup = 0;
 FUNC_20(VAR_10);
 FUNC_22(&VAR_9->ns_next_gen_lock);
 VAR_10->i_generation = VAR_9->ns_next_generation++;
 FUNC_23(&VAR_9->ns_next_gen_lock);
 if (FUNC_18(VAR_10, VAR_12, VAR_14) < 0) {
  VAR_13 = -VAR_0;
  goto failed_after_creation;
 }

 VAR_13 = FUNC_17(VAR_10, VAR_6);
 if (FUNC_24(VAR_13))




  goto failed_after_creation;

 return VAR_10;

 failed_after_creation:
 FUNC_7(VAR_10);
 FUNC_25(VAR_10);
 FUNC_10(VAR_10);



 goto failed;

 failed_ifile_create_inode:
 FUNC_11(VAR_10);
 FUNC_10(VAR_10);
 failed:
 return FUNC_1(VAR_13);
}
