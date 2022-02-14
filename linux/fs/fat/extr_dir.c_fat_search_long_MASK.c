
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct super_block {int dummy; } ;
struct msdos_sb_info {int dummy; } ;
struct msdos_dir_entry {scalar_t__* name; int attr; } ;
struct inode {struct super_block* i_sb; } ;
struct fat_slot_info {unsigned char nr_slots; struct msdos_dir_entry* de; struct buffer_head* bh; int i_pos; scalar_t__ slot_off; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 struct msdos_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,scalar_t__*,struct buffer_head**,struct msdos_dir_entry**) ;
 int FUNC_4 (struct super_block*,struct buffer_head*,struct msdos_dir_entry*) ;
 scalar_t__ FUNC_5 (struct msdos_sb_info*,unsigned char const*,int,void*,int) ;
 int FUNC_6 (struct inode*,scalar_t__*,struct buffer_head**,struct msdos_dir_entry**,int **,unsigned char*) ;
 int FUNC_7 (struct super_block*,struct msdos_dir_entry*,unsigned char*,int ) ;
 int FUNC_8 (struct super_block*,int *,void*,int) ;

int FUNC_9(struct inode *VAR_11, const unsigned char *VAR_12,
      int VAR_13, struct fat_slot_info *VAR_14)
{
 struct super_block *VAR_15 = VAR_11->i_sb;
 struct msdos_sb_info *VAR_16 = FUNC_1(VAR_15);
 struct buffer_head *VAR_17 = ((void*)0);
 struct msdos_dir_entry *VAR_18;
 unsigned char VAR_19;
 wchar_t *VAR_20 = ((void*)0);
 unsigned char VAR_21[VAR_4];
 loff_t VAR_22 = 0;
 int VAR_23, VAR_24;

 VAR_23 = -VAR_3;
 while (1) {
  if (FUNC_3(VAR_11, &VAR_22, &VAR_17, &VAR_18) == -1)
   goto end_of_dir;
parse_record:
  VAR_19 = 0;
  if (VAR_18->name[0] == VAR_2)
   continue;
  if (VAR_18->attr != VAR_0 && (VAR_18->attr & VAR_1))
   continue;
  if (VAR_18->attr != VAR_0 && FUNC_0(VAR_18->name))
   continue;
  if (VAR_18->attr == VAR_0) {
   int VAR_25 = FUNC_6(VAR_11, &VAR_22, &VAR_17, &VAR_18,
          &VAR_20, &VAR_19);
   if (VAR_25 < 0) {
    VAR_23 = VAR_25;
    goto end_of_dir;
   } else if (VAR_25 == VAR_8)
    continue;
   else if (VAR_25 == VAR_9)
    goto parse_record;
   else if (VAR_25 == VAR_7)
    goto end_of_dir;
  }






  VAR_24 = FUNC_7(VAR_15, VAR_18, VAR_21, 0);
  if (VAR_24 == 0)
   continue;


  if (FUNC_5(VAR_16, VAR_12, VAR_13, VAR_21, VAR_24))
   goto found;

  if (VAR_19) {
   void *VAR_26 = VAR_20 + VAR_5;
   int VAR_27 = VAR_10 - VAR_6;


   VAR_24 = FUNC_8(VAR_15, VAR_20, VAR_26, VAR_27);
   if (FUNC_5(VAR_16, VAR_12, VAR_13, VAR_26, VAR_24))
    goto found;
  }
 }

found:
 VAR_19++;
 VAR_14->slot_off = VAR_22 - VAR_19 * sizeof(*VAR_18);
 VAR_14->nr_slots = VAR_19;
 VAR_14->de = VAR_18;
 VAR_14->bh = VAR_17;
 VAR_14->i_pos = FUNC_4(VAR_15, VAR_14->bh, VAR_14->de);
 VAR_23 = 0;
end_of_dir:
 if (VAR_20)
  FUNC_2(VAR_20);

 return VAR_23;
}
