
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct timestamp_t {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {int cluster_size_bits; int cluster_size; scalar_t__ vol_type; int v_sem; scalar_t__ dev_ejected; TYPE_1__* fs_func; } ;
struct file_id_t {scalar_t__ type; int rwoffset; int size; scalar_t__ start_clu; int flags; int hint_last_off; scalar_t__ hint_last_clu; int attr; int entry; int dir; } ;
struct entry_set_cache_t {int dummy; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; int flags; scalar_t__ size; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bd_info_t {int sector_size_bits; int sector_size_mask; int sector_size; } ;
typedef scalar_t__ sector_t ;
typedef int s32 ;
struct TYPE_4__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;
struct TYPE_3__ {int (* alloc_cluster ) (struct super_block*,int,struct chain_t*) ;int (* get_entry_flag ) (struct dentry_t*) ;int (* get_entry_size ) (struct dentry_t*) ;scalar_t__ (* get_entry_clu0 ) (struct dentry_t*) ;int (* set_entry_clu0 ) (struct dentry_t*,scalar_t__) ;int (* set_entry_size ) (struct dentry_t*,int) ;int (* set_entry_flag ) (struct dentry_t*,int) ;int (* set_entry_attr ) (struct dentry_t*,int ) ;int (* set_entry_time ) (struct dentry_t*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct super_block*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct super_block*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct super_block*,scalar_t__,int) ;
 int FUNC_9 (struct super_block*,int ) ;
 int FUNC_10 (struct super_block*,int) ;
 struct dentry_t* FUNC_11 (struct super_block*,int *,int ,scalar_t__*) ;
 struct entry_set_cache_t* FUNC_12 (struct super_block*,int *,int ,int ,struct dentry_t**) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (struct entry_set_cache_t*) ;
 int FUNC_15 (struct super_block*,scalar_t__,struct buffer_head**,int) ;
 int FUNC_16 (struct super_block*,scalar_t__,struct buffer_head*,int ) ;
 int FUNC_17 (struct super_block*,int,struct chain_t*) ;
 int FUNC_18 (struct dentry_t*,int ,int ) ;
 int FUNC_19 (struct dentry_t*,int ) ;
 int FUNC_20 (struct dentry_t*) ;
 int FUNC_21 (struct dentry_t*,int) ;
 int FUNC_22 (struct dentry_t*) ;
 int FUNC_23 (struct dentry_t*,int) ;
 scalar_t__ FUNC_24 (struct dentry_t*) ;
 int FUNC_25 (struct dentry_t*,scalar_t__) ;
 int FUNC_26 (struct timestamp_t*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct super_block*,struct entry_set_cache_t*) ;

__attribute__((used)) static int FUNC_29(struct inode *VAR_13, struct file_id_t *VAR_14,
   void *VAR_15, u64 VAR_16, u64 *VAR_17)
{
 bool VAR_18 = 0;
 s32 VAR_19, VAR_20, VAR_21;
 s32 VAR_22, VAR_23, VAR_24 = (s32)~0;
 int VAR_25 = 0;
 u32 VAR_26, VAR_27;
 sector_t VAR_28, VAR_29 = 0;
 u64 VAR_30, VAR_31;
 struct chain_t VAR_32;
 struct timestamp_t VAR_33;
 struct dentry_t *VAR_34, *VAR_35;
 struct entry_set_cache_t *VAR_36 = ((void*)0);
 struct buffer_head *VAR_37 = ((void*)0);
 struct super_block *VAR_38 = VAR_13->i_sb;
 struct fs_info_t *VAR_39 = &(FUNC_1(VAR_38)->fs_info);
 struct bd_info_t *VAR_40 = &(FUNC_1(VAR_38)->bd_info);


 if (!VAR_14)
  return VAR_5;


 if (!VAR_15)
  return VAR_3;


 FUNC_7(&VAR_39->v_sem);


 if (VAR_14->type != VAR_10) {
  VAR_25 = VAR_7;
  goto out;
 }

 if (VAR_14->rwoffset > VAR_14->size)
  VAR_14->rwoffset = VAR_14->size;

 if (VAR_16 == 0) {
  if (VAR_17)
   *VAR_17 = 0;
  VAR_25 = VAR_8;
  goto out;
 }

 FUNC_9(VAR_38, VAR_12);

 if (VAR_14->size == 0)
  VAR_22 = 0;
 else
  VAR_22 = (s32)((VAR_14->size - 1) >>
         VAR_39->cluster_size_bits) + 1;

 VAR_31 = 0;

 while (VAR_16 > 0) {
  VAR_21 = (s32)(VAR_14->rwoffset >> VAR_39->cluster_size_bits);
  VAR_26 = VAR_27 = VAR_14->start_clu;

  if (VAR_14->flags == 0x03) {
   if ((VAR_21 > 0) && (VAR_26 != FUNC_0(~0))) {
    VAR_27 += VAR_21 - 1;

    if (VAR_21 == VAR_22)
     VAR_26 = FUNC_0(~0);
    else
     VAR_26 += VAR_21;
   }
  } else {

   if ((VAR_21 > 0) && (VAR_14->hint_last_off > 0) &&
       (VAR_21 >= VAR_14->hint_last_off)) {
    VAR_21 -= VAR_14->hint_last_off;
    VAR_26 = VAR_14->hint_last_clu;
   }

   while ((VAR_21 > 0) && (VAR_26 != FUNC_0(~0))) {
    VAR_27 = VAR_26;

    if (FUNC_2(VAR_38, VAR_26, &VAR_26) == -1) {
     VAR_25 = VAR_6;
     goto out;
    }
    VAR_21--;
   }
  }

  if (VAR_26 == FUNC_0(~0)) {
   VAR_23 = (s32)((VAR_16 - 1) >>
       VAR_39->cluster_size_bits) + 1;
   VAR_32.dir = (VAR_27 == FUNC_0(~0)) ?
     FUNC_0(~0) : VAR_27 + 1;
   VAR_32.size = 0;
   VAR_32.flags = VAR_14->flags;


   VAR_24 = VAR_39->fs_func->alloc_cluster(VAR_38,
           VAR_23,
           &VAR_32);
   if (VAR_24 == 0)
    break;
   if (VAR_24 < 0) {
    VAR_25 = VAR_6;
    goto out;
   }


   if (VAR_27 == FUNC_0(~0)) {
    if (VAR_32.flags == 0x01)
     VAR_14->flags = 0x01;
    VAR_14->start_clu = VAR_32.dir;
    VAR_18 = 1;
   } else {
    if (VAR_32.flags != VAR_14->flags) {
     FUNC_8(VAR_38,
         VAR_14->start_clu,
         VAR_22);
     VAR_14->flags = 0x01;
     VAR_18 = 1;
    }
    if (VAR_32.flags == 0x01)
     FUNC_3(VAR_38, VAR_27, VAR_32.dir);
   }

   VAR_22 += VAR_24;
   VAR_26 = VAR_32.dir;
  }


  VAR_14->hint_last_off = (s32)(VAR_14->rwoffset >>
        VAR_39->cluster_size_bits);
  VAR_14->hint_last_clu = VAR_26;


  VAR_19 = (s32)(VAR_14->rwoffset & (VAR_39->cluster_size - 1));


  VAR_20 = VAR_19 >> VAR_40->sector_size_bits;


  VAR_19 &= VAR_40->sector_size_mask;

  VAR_28 = FUNC_4(VAR_26) + VAR_20;

  VAR_30 = (u64)(VAR_40->sector_size - VAR_19);
  if (VAR_30 > VAR_16)
   VAR_30 = VAR_16;

  if ((VAR_19 == 0) && (VAR_30 == VAR_40->sector_size)) {
   if (FUNC_15(VAR_38, VAR_28, &VAR_37, 0) !=
       VAR_8)
    goto err_out;
   FUNC_13((char *)VAR_37->b_data,
          (char *)VAR_15 + VAR_31, (s32)VAR_30);
   if (FUNC_16(VAR_38, VAR_28, VAR_37, 0) !=
       VAR_8) {
    FUNC_5(VAR_37);
    goto err_out;
   }
  } else {
   if ((VAR_19 > 0) ||
       ((VAR_14->rwoffset + VAR_30) < VAR_14->size)) {
    if (FUNC_15(VAR_38, VAR_28, &VAR_37, 1) !=
        VAR_8)
     goto err_out;
   } else {
    if (FUNC_15(VAR_38, VAR_28, &VAR_37, 0) !=
        VAR_8)
     goto err_out;
   }

   FUNC_13((char *)VAR_37->b_data + VAR_19,
          (char *)VAR_15 + VAR_31, (s32)VAR_30);
   if (FUNC_16(VAR_38, VAR_28, VAR_37, 0) !=
       VAR_8) {
    FUNC_5(VAR_37);
    goto err_out;
   }
  }

  VAR_16 -= VAR_30;
  VAR_31 += VAR_30;
  VAR_14->rwoffset += VAR_30;

  VAR_14->attr |= VAR_0;

  if (VAR_14->size < VAR_14->rwoffset) {
   VAR_14->size = VAR_14->rwoffset;
   VAR_18 = 1;
  }
 }

 FUNC_5(VAR_37);


 if (VAR_39->vol_type == VAR_2) {
  VAR_36 = FUNC_12(VAR_38, &(VAR_14->dir), VAR_14->entry,
       VAR_1, &VAR_34);
  if (!VAR_36)
   goto err_out;
  VAR_35 = VAR_34 + 1;
 } else {
  VAR_34 = FUNC_11(VAR_38, &(VAR_14->dir), VAR_14->entry, &VAR_29);
  if (!VAR_34)
   goto err_out;
  VAR_35 = VAR_34;
 }

 VAR_39->fs_func->set_entry_time(VAR_34, FUNC_26(&VAR_33), VAR_9);
 VAR_39->fs_func->set_entry_attr(VAR_34, VAR_14->attr);

 if (VAR_39->vol_type != VAR_2)
  FUNC_6(VAR_38, VAR_29);

 if (VAR_18) {
  if (VAR_39->fs_func->get_entry_flag(VAR_35) != VAR_14->flags)
   VAR_39->fs_func->set_entry_flag(VAR_35, VAR_14->flags);

  if (VAR_39->fs_func->get_entry_size(VAR_35) != VAR_14->size)
   VAR_39->fs_func->set_entry_size(VAR_35, VAR_14->size);

  if (VAR_39->fs_func->get_entry_clu0(VAR_35) != VAR_14->start_clu)
   VAR_39->fs_func->set_entry_clu0(VAR_35, VAR_14->start_clu);

  if (VAR_39->vol_type != VAR_2)
   FUNC_6(VAR_38, VAR_29);
 }

 if (VAR_39->vol_type == VAR_2) {
  FUNC_28(VAR_38, VAR_36);
  FUNC_14(VAR_36);
 }






err_out:

 if (VAR_17)
  *VAR_17 = VAR_31;

 if (VAR_24 == 0)
  VAR_25 = VAR_4;

 else if (VAR_39->dev_ejected)
  VAR_25 = VAR_6;

out:

 FUNC_27(&VAR_39->v_sem);

 return VAR_25;
}
