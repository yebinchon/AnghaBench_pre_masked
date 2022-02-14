
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct the_nilfs {scalar_t__ ns_first_data_block; int ns_blocksize_bits; int ns_blocksize; struct nilfs_super_block** ns_sbp; struct buffer_head** ns_sbh; int ns_sbsize; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int sector_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct nilfs_super_block*,struct nilfs_super_block*,int ) ;
 int FUNC_2 (struct nilfs_super_block*,int ,int) ;
 int FUNC_3 (struct super_block*,int ,char*,unsigned long long) ;
 struct buffer_head* FUNC_4 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2, loff_t VAR_3)
{
 struct the_nilfs *VAR_4 = VAR_2->s_fs_info;
 struct buffer_head *VAR_5;
 struct nilfs_super_block *VAR_6;
 sector_t VAR_7, VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 int VAR_11 = 0;


 if (VAR_4->ns_sbh[1] &&
     VAR_4->ns_sbh[1]->b_blocknr > VAR_4->ns_first_data_block) {
  VAR_10 = 1;
  VAR_7 = VAR_4->ns_sbh[1]->b_blocknr;
 } else if (VAR_4->ns_sbh[0]->b_blocknr > VAR_4->ns_first_data_block) {
  VAR_10 = 0;
  VAR_7 = VAR_4->ns_sbh[0]->b_blocknr;
 } else {
  VAR_10 = -1;
  VAR_7 = 0;
 }
 if (VAR_10 >= 0 && (u64)VAR_7 << VAR_4->ns_blocksize_bits == VAR_3)
  goto out;


 VAR_8 = VAR_3 >> VAR_4->ns_blocksize_bits;
 VAR_9 = VAR_3 & (VAR_4->ns_blocksize - 1);
 VAR_5 = FUNC_4(VAR_2, VAR_8);
 if (!VAR_5) {
  FUNC_3(VAR_2, VAR_1,
     "unable to move secondary superblock to block %llu",
     (unsigned long long)VAR_8);
  VAR_11 = -VAR_0;
  goto out;
 }
 VAR_6 = (void *)VAR_5->b_data + VAR_9;
 FUNC_2(VAR_6, 0, VAR_4->ns_blocksize);

 if (VAR_10 >= 0) {
  FUNC_1(VAR_6, VAR_4->ns_sbp[VAR_10], VAR_4->ns_sbsize);
  FUNC_0(VAR_4->ns_sbh[VAR_10]);
  VAR_4->ns_sbh[VAR_10] = VAR_5;
  VAR_4->ns_sbp[VAR_10] = VAR_6;
 } else if (VAR_4->ns_sbh[0]->b_blocknr < VAR_4->ns_first_data_block) {

  VAR_4->ns_sbh[1] = VAR_5;
  VAR_4->ns_sbp[1] = VAR_6;
 } else {
  FUNC_0(VAR_5);
 }
out:
 return VAR_11;
}
