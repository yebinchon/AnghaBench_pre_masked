
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uni_name_t {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {scalar_t__ vol_type; scalar_t__ root_dir; struct fs_func* fs_func; } ;
struct fs_func {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;scalar_t__ (* get_entry_clu0 ) (struct dentry_t*) ;scalar_t__ (* count_ext_entries ) (struct super_block*,struct chain_t*,scalar_t__,struct dentry_t*) ;int (* get_entry_attr ) (struct dentry_t*) ;scalar_t__ (* init_ext_entry ) (struct super_block*,struct chain_t*,scalar_t__,scalar_t__,struct uni_name_t*,struct dos_name_t*) ;int (* delete_dir_entry ) (struct super_block*,struct chain_t*,scalar_t__,int ,scalar_t__) ;int (* set_entry_clu0 ) (struct dentry_t*,scalar_t__) ;int (* set_entry_attr ) (struct dentry_t*,int) ;} ;
struct TYPE_3__ {scalar_t__ dir; int flags; int size; } ;
struct file_id_t {int attr; scalar_t__ entry; TYPE_1__ dir; } ;
struct dos_name_t {int dummy; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; int flags; int size; } ;
typedef int sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,int ) ;
 scalar_t__ FUNC_5 (struct inode*,struct chain_t*,scalar_t__) ;
 struct dentry_t* FUNC_6 (struct super_block*,struct chain_t*,int,int *) ;
 scalar_t__ FUNC_7 (struct super_block*,struct chain_t*,struct uni_name_t*,scalar_t__*,struct dos_name_t*) ;
 int FUNC_8 (void*,void*,int ) ;
 scalar_t__ FUNC_9 (struct dentry_t*) ;
 int FUNC_10 (struct dentry_t*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct super_block*,struct chain_t*,scalar_t__,scalar_t__,struct uni_name_t*,struct dos_name_t*) ;
 int FUNC_12 (struct super_block*,struct chain_t*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (struct dentry_t*) ;
 scalar_t__ FUNC_14 (struct super_block*,struct chain_t*,scalar_t__,struct dentry_t*) ;
 scalar_t__ FUNC_15 (struct dentry_t*) ;
 int FUNC_16 (struct dentry_t*,int) ;
 int FUNC_17 (struct dentry_t*) ;
 scalar_t__ FUNC_18 (struct dentry_t*) ;
 scalar_t__ FUNC_19 (struct dentry_t*) ;
 int FUNC_20 (struct dentry_t*,scalar_t__) ;

s32 FUNC_21(struct inode *VAR_9, struct chain_t *VAR_10, s32 VAR_11,
       struct chain_t *VAR_12, struct uni_name_t *VAR_13,
       struct file_id_t *VAR_14)
{
 s32 VAR_15, VAR_16, VAR_17, VAR_18;
 sector_t VAR_19, VAR_20;
 struct chain_t VAR_21;
 struct dos_name_t VAR_22;
 struct dentry_t *VAR_23, *VAR_24;
 struct super_block *VAR_25 = VAR_9->i_sb;
 struct fs_info_t *VAR_26 = &(FUNC_1(VAR_25)->fs_info);
 struct fs_func *VAR_27 = VAR_26->fs_func;

 VAR_23 = FUNC_6(VAR_25, VAR_10, VAR_11, &VAR_19);
 if (!VAR_23)
  return VAR_5;


 if (VAR_27->get_entry_type(VAR_23) == VAR_7 &&
     VAR_27->get_entry_clu0(VAR_23) == VAR_12->dir)
  return VAR_4;

 FUNC_2(VAR_25, VAR_19);


 VAR_18 = VAR_27->count_ext_entries(VAR_25, VAR_10, VAR_11,
           VAR_23);
 if (VAR_18 < 0) {
  FUNC_4(VAR_25, VAR_19);
  return VAR_5;
 }
 VAR_18++;

 VAR_15 = FUNC_7(VAR_25, VAR_12, VAR_13,
        &VAR_17, &VAR_22);
 if (VAR_15) {
  FUNC_4(VAR_25, VAR_19);
  return VAR_15;
 }

 VAR_16 = FUNC_5(VAR_9, VAR_12, VAR_17);
 if (VAR_16 < 0) {
  FUNC_4(VAR_25, VAR_19);
  return VAR_3;
 }

 VAR_24 = FUNC_6(VAR_25, VAR_12, VAR_16, &VAR_20);
 if (!VAR_24) {
  FUNC_4(VAR_25, VAR_19);
  return VAR_5;
 }

 FUNC_8((void *)VAR_24, (void *)VAR_23, VAR_1);
 if (VAR_27->get_entry_type(VAR_24) == VAR_8) {
  VAR_27->set_entry_attr(VAR_24, VAR_27->get_entry_attr(VAR_24) |
     VAR_0);
  VAR_14->attr |= VAR_0;
 }
 FUNC_3(VAR_25, VAR_20);
 FUNC_4(VAR_25, VAR_19);

 if (VAR_26->vol_type == VAR_2) {
  VAR_23 = FUNC_6(VAR_25, VAR_10, VAR_11 + 1,
      &VAR_19);
  FUNC_2(VAR_25, VAR_19);
  VAR_24 = FUNC_6(VAR_25, VAR_12, VAR_16 + 1,
      &VAR_20);
  if (!VAR_23 || !VAR_24) {
   FUNC_4(VAR_25, VAR_19);
   return VAR_5;
  }

  FUNC_8((void *)VAR_24, (void *)VAR_23, VAR_1);
  FUNC_3(VAR_25, VAR_20);
  FUNC_4(VAR_25, VAR_19);
 } else if (VAR_27->get_entry_type(VAR_24) == VAR_7) {

  VAR_21.dir = VAR_27->get_entry_clu0(VAR_24);
  VAR_21.flags = 0x01;

  VAR_24 = FUNC_6(VAR_25, &VAR_21, 1, &VAR_20);
  if (!VAR_24)
   return VAR_5;

  if (VAR_12->dir == VAR_26->root_dir)
   VAR_27->set_entry_clu0(VAR_24, FUNC_0(0));
  else
   VAR_27->set_entry_clu0(VAR_24, VAR_12->dir);
  FUNC_3(VAR_25, VAR_20);
 }

 VAR_15 = VAR_27->init_ext_entry(VAR_25, VAR_12, VAR_16, VAR_17,
          VAR_13, &VAR_22);
 if (VAR_15 != VAR_6)
  return VAR_15;

 VAR_27->delete_dir_entry(VAR_25, VAR_10, VAR_11, 0, VAR_18);

 VAR_14->dir.dir = VAR_12->dir;
 VAR_14->dir.size = VAR_12->size;
 VAR_14->dir.flags = VAR_12->flags;

 VAR_14->entry = VAR_16;

 return VAR_6;
}
