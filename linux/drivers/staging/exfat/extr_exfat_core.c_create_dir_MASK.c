
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct uni_name_t {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {scalar_t__ vol_type; scalar_t__ root_dir; struct fs_func* fs_func; scalar_t__ cluster_size; } ;
struct fs_func {scalar_t__ (* alloc_cluster ) (struct super_block*,int,struct chain_t*) ;scalar_t__ (* init_dir_entry ) (struct super_block*,struct chain_t*,int,int ,scalar_t__,scalar_t__) ;scalar_t__ (* init_ext_entry ) (struct super_block*,struct chain_t*,scalar_t__,int,struct uni_name_t*,struct dos_name_t*) ;} ;
struct TYPE_3__ {scalar_t__ dir; int flags; scalar_t__ size; } ;
struct file_id_t {int flags; scalar_t__ start_clu; int hint_last_off; scalar_t__ rwoffset; int type; scalar_t__ size; int attr; scalar_t__ entry; TYPE_1__ dir; } ;
struct dos_name_t {int name_case; int name; } ;
struct chain_t {scalar_t__ dir; int flags; scalar_t__ size; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct inode*,struct chain_t*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct super_block*,struct chain_t*,struct uni_name_t*,scalar_t__*,struct dos_name_t*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct super_block*,int,struct chain_t*) ;
 scalar_t__ FUNC_7 (struct super_block*,struct chain_t*,int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct super_block*,struct chain_t*,scalar_t__,int,struct uni_name_t*,struct dos_name_t*) ;
 scalar_t__ FUNC_9 (struct super_block*,struct chain_t*,int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct super_block*,struct chain_t*,int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (struct super_block*,struct chain_t*,int,int,struct uni_name_t*,struct dos_name_t*) ;
 scalar_t__ FUNC_12 (struct super_block*,struct chain_t*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (struct super_block*,struct chain_t*,scalar_t__,scalar_t__,struct uni_name_t*,struct dos_name_t*) ;

s32 FUNC_14(struct inode *VAR_9, struct chain_t *VAR_10,
        struct uni_name_t *VAR_11, struct file_id_t *VAR_12)
{
 s32 VAR_13, VAR_14, VAR_15;
 u64 VAR_16;
 struct chain_t VAR_17;
 struct dos_name_t VAR_18, VAR_19;
 struct super_block *VAR_20 = VAR_9->i_sb;
 struct fs_info_t *VAR_21 = &(FUNC_1(VAR_20)->fs_info);
 struct fs_func *VAR_22 = VAR_21->fs_func;

 VAR_13 = FUNC_4(VAR_20, VAR_10, VAR_11, &VAR_15,
        &VAR_18);
 if (VAR_13)
  return VAR_13;


 VAR_14 = FUNC_3(VAR_9, VAR_10, VAR_15);
 if (VAR_14 < 0)
  return VAR_5;

 VAR_17.dir = FUNC_0(~0);
 VAR_17.size = 0;
 VAR_17.flags = (VAR_21->vol_type == VAR_4) ? 0x03 : 0x01;


 VAR_13 = VAR_22->alloc_cluster(VAR_20, 1, &VAR_17);
 if (VAR_13 < 0)
  return VAR_6;
 else if (VAR_13 == 0)
  return VAR_5;

 VAR_13 = FUNC_2(VAR_20, VAR_17.dir);
 if (VAR_13 != VAR_7)
  return VAR_13;

 if (VAR_21->vol_type == VAR_4) {
  VAR_16 = VAR_21->cluster_size;
 } else {
  VAR_16 = 0;






  VAR_19.name_case = 0x0;
  FUNC_5(VAR_19.name, VAR_1, VAR_2);

  VAR_13 = VAR_22->init_dir_entry(VAR_20, &VAR_17, 0, VAR_8, VAR_17.dir,
           0);
  if (VAR_13 != VAR_7)
   return VAR_13;

  VAR_13 = VAR_22->init_ext_entry(VAR_20, &VAR_17, 0, 1, ((void*)0), &VAR_19);
  if (VAR_13 != VAR_7)
   return VAR_13;

  FUNC_5(VAR_19.name, VAR_3, VAR_2);

  if (VAR_10->dir == VAR_21->root_dir)
   VAR_13 = VAR_22->init_dir_entry(VAR_20, &VAR_17, 1, VAR_8,
            FUNC_0(0), 0);
  else
   VAR_13 = VAR_22->init_dir_entry(VAR_20, &VAR_17, 1, VAR_8,
            VAR_10->dir, 0);

  if (VAR_13 != VAR_7)
   return VAR_13;

  VAR_13 = VAR_21->fs_func->init_ext_entry(VAR_20, &VAR_17, 1, 1, ((void*)0),
          &VAR_19);
  if (VAR_13 != VAR_7)
   return VAR_13;
 }



 VAR_13 = VAR_22->init_dir_entry(VAR_20, VAR_10, VAR_14, VAR_8, VAR_17.dir,
          VAR_16);
 if (VAR_13 != VAR_7)
  return VAR_13;

 VAR_13 = VAR_22->init_ext_entry(VAR_20, VAR_10, VAR_14, VAR_15, VAR_11,
          &VAR_18);
 if (VAR_13 != VAR_7)
  return VAR_13;

 VAR_12->dir.dir = VAR_10->dir;
 VAR_12->dir.size = VAR_10->size;
 VAR_12->dir.flags = VAR_10->flags;
 VAR_12->entry = VAR_14;

 VAR_12->attr = VAR_0;
 VAR_12->flags = (VAR_21->vol_type == VAR_4) ? 0x03 : 0x01;
 VAR_12->size = VAR_16;
 VAR_12->start_clu = VAR_17.dir;

 VAR_12->type = VAR_8;
 VAR_12->rwoffset = 0;
 VAR_12->hint_last_off = -1;

 return VAR_7;
}
