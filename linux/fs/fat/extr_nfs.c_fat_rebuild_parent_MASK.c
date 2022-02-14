
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct msdos_sb_info {int dummy; } ;
struct msdos_dir_entry {int dummy; } ;
struct inode {int i_ino; } ;
struct fat_slot_info {int i_pos; int de; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
struct TYPE_2__ {int i_pos; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct msdos_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct inode* FUNC_3 (struct super_block*,int ,int ) ;
 int FUNC_4 (struct msdos_sb_info*,int) ;
 struct inode* FUNC_5 (struct super_block*,int) ;
 int FUNC_6 (struct inode*,struct msdos_dir_entry*) ;
 int FUNC_7 (struct msdos_sb_info*,struct msdos_dir_entry*) ;
 int FUNC_8 (struct super_block*,int ,char*) ;
 int FUNC_9 (struct inode*,int,struct fat_slot_info*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct super_block*,int ) ;
 struct inode* FUNC_12 (struct super_block*) ;
 struct buffer_head* FUNC_13 (struct super_block*,int ) ;

__attribute__((used)) static
struct inode *FUNC_14(struct super_block *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct msdos_dir_entry *VAR_6;
 struct inode *VAR_7 = ((void*)0);
 struct inode *VAR_8 = ((void*)0);
 struct fat_slot_info VAR_9;
 struct msdos_sb_info *VAR_10 = FUNC_1(VAR_2);
 sector_t VAR_11 = FUNC_4(VAR_10, VAR_3);
 struct buffer_head *VAR_12 = FUNC_13(VAR_2, VAR_11);
 if (!VAR_12) {
  FUNC_8(VAR_2, VAR_0,
   "unable to read cluster of parent directory");
  return ((void*)0);
 }

 VAR_6 = (struct msdos_dir_entry *) VAR_12->b_data;
 VAR_5 = FUNC_7(VAR_10, &VAR_6[0]);
 VAR_4 = FUNC_7(VAR_10, &VAR_6[1]);

 VAR_8 = FUNC_5(VAR_2, VAR_4);
 if (!VAR_8) {
  VAR_8 = FUNC_12(VAR_2);
  if (!VAR_8) {
   FUNC_2(VAR_12);
   return VAR_7;
  }

  VAR_8->i_ino = FUNC_11(VAR_2, VAR_1);
  FUNC_6(VAR_8, &VAR_6[1]);
  FUNC_0(VAR_8)->i_pos = -1;
 }

 if (!FUNC_9(VAR_8, VAR_5, &VAR_9))
  VAR_7 = FUNC_3(VAR_2, VAR_9.de, VAR_9.i_pos);

 FUNC_2(VAR_12);
 FUNC_10(VAR_8);

 return VAR_7;
}
