
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_sb_info {struct fatent_operations* fatent_ops; } ;
struct inode {struct super_block* i_sb; } ;
struct fatent_operations {int (* ent_bread ) (struct super_block*,struct fat_entry*,int,int ) ;int (* ent_get ) (struct fat_entry*) ;int (* ent_blocknr ) (struct super_block*,int,int*,int *) ;} ;
struct fat_entry {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct fat_entry*,int,int ) ;
 int FUNC_2 (struct super_block*,char*,int) ;
 int FUNC_3 (struct msdos_sb_info*,int) ;
 int FUNC_4 (struct fat_entry*) ;
 int FUNC_5 (struct fat_entry*,int) ;
 int FUNC_6 (struct super_block*,int,int*,int *) ;
 int FUNC_7 (struct super_block*,struct fat_entry*,int,int ) ;
 int FUNC_8 (struct fat_entry*) ;

int FUNC_9(struct inode *VAR_1, struct fat_entry *VAR_2, int VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 struct msdos_sb_info *VAR_5 = FUNC_0(VAR_1->i_sb);
 const struct fatent_operations *VAR_6 = VAR_5->fatent_ops;
 int VAR_7, VAR_8;
 sector_t VAR_9;

 if (!FUNC_3(VAR_5, VAR_3)) {
  FUNC_4(VAR_2);
  FUNC_2(VAR_4, "invalid access to FAT (entry 0x%08x)", VAR_3);
  return -VAR_0;
 }

 FUNC_5(VAR_2, VAR_3);
 VAR_6->ent_blocknr(VAR_4, VAR_3, &VAR_8, &VAR_9);

 if (!FUNC_1(VAR_4, VAR_2, VAR_8, VAR_9)) {
  FUNC_4(VAR_2);
  VAR_7 = VAR_6->ent_bread(VAR_4, VAR_2, VAR_8, VAR_9);
  if (VAR_7)
   return VAR_7;
 }
 return VAR_6->ent_get(VAR_2);
}
