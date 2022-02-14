
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {scalar_t__ ns_flushed_device; int ns_inode_lock; struct nilfs_sc_info* ns_writer; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_transaction_info {int dummy; } ;
struct nilfs_sc_info {void* sc_dsync_end; void* sc_dsync_start; struct nilfs_inode_info* sc_dsync_inode; int sc_flags; } ;
struct nilfs_inode_info {int i_state; } ;
struct inode {int dummy; } ;
typedef void* loff_t ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct the_nilfs*) ;
 int FUNC_2 (struct nilfs_sc_info*,int ) ;
 int FUNC_3 (struct nilfs_sc_info*) ;
 scalar_t__ FUNC_4 (struct the_nilfs*,int ) ;
 int FUNC_5 (struct super_block*,struct nilfs_transaction_info*,int ) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct super_block *VAR_7, struct inode *VAR_8,
      loff_t VAR_9, loff_t VAR_10)
{
 struct the_nilfs *VAR_11 = VAR_7->s_fs_info;
 struct nilfs_sc_info *VAR_12 = VAR_11->ns_writer;
 struct nilfs_inode_info *VAR_13;
 struct nilfs_transaction_info VAR_14;
 int VAR_15 = 0;

 if (!VAR_12)
  return -VAR_0;

 FUNC_5(VAR_7, &VAR_14, 0);

 VAR_13 = FUNC_0(VAR_8);
 if (FUNC_9(VAR_2, &VAR_13->i_state) ||
     FUNC_4(VAR_11, VAR_6) ||
     FUNC_9(VAR_4, &VAR_12->sc_flags) ||
     FUNC_1(VAR_11)) {
  FUNC_6(VAR_7);
  VAR_15 = FUNC_3(VAR_12);
  return VAR_15;
 }

 FUNC_7(&VAR_11->ns_inode_lock);
 if (!FUNC_9(VAR_3, &VAR_13->i_state) &&
     !FUNC_9(VAR_1, &VAR_13->i_state)) {
  FUNC_8(&VAR_11->ns_inode_lock);
  FUNC_6(VAR_7);
  return 0;
 }
 FUNC_8(&VAR_11->ns_inode_lock);
 VAR_12->sc_dsync_inode = VAR_13;
 VAR_12->sc_dsync_start = VAR_9;
 VAR_12->sc_dsync_end = VAR_10;

 VAR_15 = FUNC_2(VAR_12, VAR_5);
 if (!VAR_15)
  VAR_11->ns_flushed_device = 0;

 FUNC_6(VAR_7);
 return VAR_15;
}
