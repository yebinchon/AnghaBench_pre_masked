
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_cpfile; int ns_inode_size; int ns_segctor_sem; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_root {int blocks_count; int inodes_count; scalar_t__ ifile; } ;
struct nilfs_checkpoint {int cp_blocks_count; int cp_inodes_count; int cp_ifile_inode; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ,struct nilfs_checkpoint**,struct buffer_head**) ;
 int FUNC_4 (int ,scalar_t__,struct buffer_head*) ;
 struct nilfs_root* FUNC_5 (struct the_nilfs*,scalar_t__) ;
 int FUNC_6 (struct super_block*,struct nilfs_root*,int ,int *,scalar_t__*) ;
 int FUNC_7 (struct super_block*,int ,char*,unsigned long long) ;
 int FUNC_8 (struct nilfs_root*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct super_block *VAR_5, __u64 VAR_6, int VAR_7,
       struct nilfs_root **VAR_8)
{
 struct the_nilfs *VAR_9 = VAR_5->s_fs_info;
 struct nilfs_root *VAR_10;
 struct nilfs_checkpoint *VAR_11;
 struct buffer_head *VAR_12;
 int VAR_13 = -VAR_2;

 VAR_10 = FUNC_5(
  VAR_9, VAR_7 ? VAR_4 : VAR_6);
 if (!VAR_10)
  return VAR_13;

 if (VAR_10->ifile)
  goto reuse;

 FUNC_1(&VAR_9->ns_segctor_sem);
 VAR_13 = FUNC_3(VAR_9->ns_cpfile, VAR_6, 0, &VAR_11,
       &VAR_12);
 FUNC_10(&VAR_9->ns_segctor_sem);
 if (FUNC_9(VAR_13)) {
  if (VAR_13 == -VAR_1 || VAR_13 == -VAR_0) {
   FUNC_7(VAR_5, VAR_3,
      "Invalid checkpoint (checkpoint number=%llu)",
      (unsigned long long)VAR_6);
   VAR_13 = -VAR_0;
  }
  goto failed;
 }

 VAR_13 = FUNC_6(VAR_5, VAR_10, VAR_9->ns_inode_size,
          &VAR_11->cp_ifile_inode, &VAR_10->ifile);
 if (VAR_13)
  goto failed_bh;

 FUNC_0(&VAR_10->inodes_count,
   FUNC_2(VAR_11->cp_inodes_count));
 FUNC_0(&VAR_10->blocks_count,
   FUNC_2(VAR_11->cp_blocks_count));

 FUNC_4(VAR_9->ns_cpfile, VAR_6, VAR_12);

 reuse:
 *VAR_8 = VAR_10;
 return 0;

 failed_bh:
 FUNC_4(VAR_9->ns_cpfile, VAR_6, VAR_12);
 failed:
 FUNC_8(VAR_10);

 return VAR_13;
}
