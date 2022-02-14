
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {unsigned int ns_inode_size; int ns_dat; int ns_cpfile; int ns_nongc_ctime; int ns_sufile; int ns_sem; struct nilfs_super_block** ns_sbp; } ;
struct super_block {int dummy; } ;
struct nilfs_super_root {int sr_nongc_ctime; } ;
struct nilfs_super_block {int s_segment_usage_size; int s_checkpoint_size; int s_dat_entry_size; } ;
struct nilfs_inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*,unsigned int,struct nilfs_inode*,int *) ;
 int FUNC_9 (struct super_block*,unsigned int,struct nilfs_inode*,int *) ;
 int FUNC_10 (struct the_nilfs*,int ,struct buffer_head**,int) ;
 int FUNC_11 (struct super_block*,unsigned int,struct nilfs_inode*,int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct the_nilfs *VAR_0,
     struct super_block *VAR_1, sector_t VAR_2)
{
 struct buffer_head *VAR_3;
 struct nilfs_super_root *VAR_4;
 struct nilfs_super_block **VAR_5 = VAR_0->ns_sbp;
 struct nilfs_inode *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_10(VAR_0, VAR_2, &VAR_3, 1);
 if (FUNC_12(VAR_11))
  return VAR_11;

 FUNC_4(&VAR_0->ns_sem);
 VAR_7 = FUNC_6(VAR_5[0]->s_dat_entry_size);
 VAR_9 = FUNC_6(VAR_5[0]->s_checkpoint_size);
 VAR_8 = FUNC_6(VAR_5[0]->s_segment_usage_size);
 FUNC_13(&VAR_0->ns_sem);

 VAR_10 = VAR_0->ns_inode_size;

 VAR_6 = (void *)VAR_3->b_data + FUNC_1(VAR_10);
 VAR_11 = FUNC_9(VAR_1, VAR_7, VAR_6, &VAR_0->ns_dat);
 if (VAR_11)
  goto failed;

 VAR_6 = (void *)VAR_3->b_data + FUNC_0(VAR_10);
 VAR_11 = FUNC_8(VAR_1, VAR_9, VAR_6, &VAR_0->ns_cpfile);
 if (VAR_11)
  goto failed_dat;

 VAR_6 = (void *)VAR_3->b_data + FUNC_2(VAR_10);
 VAR_11 = FUNC_11(VAR_1, VAR_8, VAR_6,
    &VAR_0->ns_sufile);
 if (VAR_11)
  goto failed_cpfile;

 VAR_4 = (struct nilfs_super_root *)VAR_3->b_data;
 VAR_0->ns_nongc_ctime = FUNC_7(VAR_4->sr_nongc_ctime);

 failed:
 FUNC_3(VAR_3);
 return VAR_11;

 failed_cpfile:
 FUNC_5(VAR_0->ns_cpfile);

 failed_dat:
 FUNC_5(VAR_0->ns_dat);
 goto failed;
}
