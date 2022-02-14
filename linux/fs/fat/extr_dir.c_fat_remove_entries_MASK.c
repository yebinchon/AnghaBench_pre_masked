
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_dir_entry {int * name; } ;
struct inode {struct super_block* i_sb; } ;
struct fat_slot_info {int nr_slots; int slot_off; struct buffer_head* bh; struct msdos_dir_entry* de; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,int ,int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct super_block*,int ,char*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int *,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct buffer_head*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct buffer_head*) ;

int FUNC_10(struct inode *VAR_4, struct fat_slot_info *VAR_5)
{
 struct super_block *VAR_6 = VAR_4->i_sb;
 struct msdos_dir_entry *VAR_7;
 struct buffer_head *VAR_8;
 int VAR_9 = 0, VAR_10;





 VAR_10 = VAR_5->nr_slots;
 VAR_7 = VAR_5->de;
 VAR_5->de = ((void*)0);
 VAR_8 = VAR_5->bh;
 VAR_5->bh = ((void*)0);
 while (VAR_10 && VAR_7 >= (struct msdos_dir_entry *)VAR_8->b_data) {
  VAR_7->name[0] = VAR_0;
  VAR_7--;
  VAR_10--;
 }
 FUNC_7(VAR_8, VAR_4);
 if (FUNC_0(VAR_4))
  VAR_9 = FUNC_9(VAR_8);
 FUNC_2(VAR_8);
 if (VAR_9)
  return VAR_9;
 FUNC_6(VAR_4);

 if (VAR_10) {





  VAR_9 = FUNC_1(VAR_4, VAR_5->slot_off, VAR_10);
  if (VAR_9) {
   FUNC_3(VAR_6, VAR_1,
          "Couldn't remove the long name slots");
  }
 }

 FUNC_5(VAR_4, ((void*)0), VAR_2|VAR_3);
 if (FUNC_0(VAR_4))
  (void)FUNC_4(VAR_4);
 else
  FUNC_8(VAR_4);

 return 0;
}
