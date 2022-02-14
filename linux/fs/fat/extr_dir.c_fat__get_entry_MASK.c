
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct msdos_dir_entry {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
typedef int loff_t ;
typedef int llu ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*,int,int*,unsigned long*,int ,int) ;
 int FUNC_2 (struct inode*,int,int) ;
 int FUNC_3 (struct super_block*,int ,char*,int ) ;
 struct buffer_head* FUNC_4 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, loff_t *VAR_2,
     struct buffer_head **VAR_3, struct msdos_dir_entry **VAR_4)
{
 struct super_block *VAR_5 = VAR_1->i_sb;
 sector_t VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10;

next:
 FUNC_0(*VAR_3);
 *VAR_3 = ((void*)0);
 VAR_7 = *VAR_2 >> VAR_5->s_blocksize_bits;
 VAR_9 = FUNC_1(VAR_1, VAR_7, &VAR_6, &VAR_8, 0, 0);
 if (VAR_9 || !VAR_6)
  return -1;

 FUNC_2(VAR_1, VAR_7, VAR_6);

 *VAR_3 = FUNC_4(VAR_5, VAR_6);
 if (*VAR_3 == ((void*)0)) {
  FUNC_3(VAR_5, VAR_0,
   "Directory bread(block %llu) failed", (llu)VAR_6);

  *VAR_2 = (VAR_7 + 1) << VAR_5->s_blocksize_bits;
  goto next;
 }

 VAR_10 = *VAR_2 & (VAR_5->s_blocksize - 1);
 *VAR_2 += sizeof(struct msdos_dir_entry);
 *VAR_4 = (struct msdos_dir_entry *)((*VAR_3)->b_data + VAR_10);

 return 0;
}
