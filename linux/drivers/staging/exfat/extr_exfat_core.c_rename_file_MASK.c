
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uni_name_t {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {scalar_t__ vol_type; struct fs_func* fs_func; } ;
struct fs_func {scalar_t__ (* count_ext_entries ) (struct super_block*,struct chain_t*,scalar_t__,struct dentry_t*) ;scalar_t__ (* get_entry_type ) (struct dentry_t*) ;int (* get_entry_attr ) (struct dentry_t*) ;scalar_t__ (* init_ext_entry ) (struct super_block*,struct chain_t*,scalar_t__,scalar_t__,struct uni_name_t*,struct dos_name_t*) ;int (* delete_dir_entry ) (struct super_block*,struct chain_t*,scalar_t__,scalar_t__,scalar_t__) ;int (* set_entry_attr ) (struct dentry_t*,int) ;} ;
struct file_id_t {int attr; scalar_t__ entry; } ;
struct dos_name_t {int dummy; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*,int ) ;
 scalar_t__ FUNC_4 (struct inode*,struct chain_t*,scalar_t__) ;
 struct dentry_t* FUNC_5 (struct super_block*,struct chain_t*,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (struct super_block*,struct chain_t*,struct uni_name_t*,scalar_t__*,struct dos_name_t*) ;
 int FUNC_7 (void*,void*,int ) ;
 scalar_t__ FUNC_8 (struct super_block*,struct chain_t*,scalar_t__,struct dentry_t*) ;
 scalar_t__ FUNC_9 (struct super_block*,struct chain_t*,scalar_t__,scalar_t__,struct uni_name_t*,struct dos_name_t*) ;
 int FUNC_10 (struct super_block*,struct chain_t*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (struct dentry_t*) ;
 int FUNC_12 (struct dentry_t*,int) ;
 int FUNC_13 (struct dentry_t*) ;
 scalar_t__ FUNC_14 (struct super_block*,struct chain_t*,scalar_t__,scalar_t__,struct uni_name_t*,struct dos_name_t*) ;
 int FUNC_15 (struct super_block*,struct chain_t*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (struct dentry_t*) ;
 int FUNC_17 (struct dentry_t*,int) ;
 int FUNC_18 (struct dentry_t*) ;

s32 FUNC_19(struct inode *VAR_7, struct chain_t *VAR_8, s32 VAR_9,
  struct uni_name_t *VAR_10, struct file_id_t *VAR_11)
{
 s32 VAR_12, VAR_13 = -1, VAR_14, VAR_15;
 sector_t VAR_16, VAR_17;
 struct dos_name_t VAR_18;
 struct dentry_t *VAR_19, *VAR_20;
 struct super_block *VAR_21 = VAR_7->i_sb;
 struct fs_info_t *VAR_22 = &(FUNC_0(VAR_21)->fs_info);
 struct fs_func *VAR_23 = VAR_22->fs_func;

 VAR_19 = FUNC_5(VAR_21, VAR_8, VAR_9, &VAR_16);
 if (!VAR_19)
  return VAR_4;

 FUNC_1(VAR_21, VAR_16);


 VAR_14 = VAR_23->count_ext_entries(VAR_21, VAR_8, VAR_9,
           VAR_19);
 if (VAR_14 < 0) {
  FUNC_3(VAR_21, VAR_16);
  return VAR_4;
 }
 VAR_14++;

 VAR_12 = FUNC_6(VAR_21, VAR_8, VAR_10,
        &VAR_15, &VAR_18);
 if (VAR_12) {
  FUNC_3(VAR_21, VAR_16);
  return VAR_12;
 }

 if (VAR_14 < VAR_15) {
  VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_15);
  if (VAR_13 < 0) {
   FUNC_3(VAR_21, VAR_16);
   return VAR_3;
  }

  VAR_20 = FUNC_5(VAR_21, VAR_8, VAR_13, &VAR_17);
  if (!VAR_20) {
   FUNC_3(VAR_21, VAR_16);
   return VAR_4;
  }

  FUNC_7((void *)VAR_20, (void *)VAR_19, VAR_1);
  if (VAR_23->get_entry_type(VAR_20) == VAR_6) {
   VAR_23->set_entry_attr(VAR_20,
      VAR_23->get_entry_attr(VAR_20) |
      VAR_0);
   VAR_11->attr |= VAR_0;
  }
  FUNC_2(VAR_21, VAR_17);
  FUNC_3(VAR_21, VAR_16);

  if (VAR_22->vol_type == VAR_2) {
   VAR_19 = FUNC_5(VAR_21, VAR_8, VAR_9 + 1,
       &VAR_16);
   FUNC_1(VAR_21, VAR_16);
   VAR_20 = FUNC_5(VAR_21, VAR_8, VAR_13 + 1,
       &VAR_17);

   if (!VAR_19 || !VAR_20) {
    FUNC_3(VAR_21, VAR_16);
    return VAR_4;
   }

   FUNC_7((void *)VAR_20, (void *)VAR_19, VAR_1);
   FUNC_2(VAR_21, VAR_17);
   FUNC_3(VAR_21, VAR_16);
  }

  VAR_12 = VAR_23->init_ext_entry(VAR_21, VAR_8, VAR_13,
           VAR_15, VAR_10,
           &VAR_18);
  if (VAR_12 != VAR_5)
   return VAR_12;

  VAR_23->delete_dir_entry(VAR_21, VAR_8, VAR_9, 0,
       VAR_14);
  VAR_11->entry = VAR_13;
 } else {
  if (VAR_23->get_entry_type(VAR_19) == VAR_6) {
   VAR_23->set_entry_attr(VAR_19,
      VAR_23->get_entry_attr(VAR_19) |
      VAR_0);
   VAR_11->attr |= VAR_0;
  }
  FUNC_2(VAR_21, VAR_16);
  FUNC_3(VAR_21, VAR_16);

  VAR_12 = VAR_23->init_ext_entry(VAR_21, VAR_8, VAR_9,
           VAR_15, VAR_10,
           &VAR_18);
  if (VAR_12 != VAR_5)
   return VAR_12;

  VAR_23->delete_dir_entry(VAR_21, VAR_8, VAR_9, VAR_15,
       VAR_14);
 }

 return VAR_5;
}
