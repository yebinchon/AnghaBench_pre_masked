
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_blocks; struct super_block* i_sb; } ;
struct fs_info_t {int cluster_size_bits; scalar_t__ vol_type; int v_sem; scalar_t__ dev_ejected; TYPE_1__* fs_func; } ;
struct file_id_t {int rwoffset; scalar_t__ start_clu; int flags; scalar_t__ hint_last_off; scalar_t__ hint_last_clu; int entry; int dir; } ;
struct entry_set_cache_t {int dummy; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; int flags; scalar_t__ size; } ;
typedef int sector_t ;
typedef int s64 ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {int mmu_private; struct file_id_t fid; } ;
struct TYPE_5__ {struct fs_info_t fs_info; } ;
struct TYPE_4__ {scalar_t__ (* alloc_cluster ) (struct super_block*,int,struct chain_t*) ;int (* get_entry_flag ) (struct dentry_t*) ;scalar_t__ (* get_entry_clu0 ) (struct dentry_t*) ;int (* set_entry_clu0 ) (struct dentry_t*,scalar_t__) ;int (* set_entry_flag ) (struct dentry_t*,int) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct super_block*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct super_block*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct super_block*,int ) ;
 struct dentry_t* FUNC_9 (struct super_block*,int *,int ,int *) ;
 struct entry_set_cache_t* FUNC_10 (struct super_block*,int *,int ,int ,struct dentry_t**) ;
 int FUNC_11 (struct entry_set_cache_t*) ;
 scalar_t__ FUNC_12 (struct super_block*,int,struct chain_t*) ;
 int FUNC_13 (struct dentry_t*) ;
 int FUNC_14 (struct dentry_t*,int) ;
 scalar_t__ FUNC_15 (struct dentry_t*) ;
 int FUNC_16 (struct dentry_t*,scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct super_block*,struct entry_set_cache_t*) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_7, s32 VAR_8, u32 *VAR_9)
{
 s32 VAR_10, VAR_11;
 bool VAR_12 = 0;
 u32 VAR_13;
 int VAR_14 = VAR_5;
 sector_t VAR_15 = 0;
 struct chain_t VAR_16;
 struct dentry_t *VAR_17;
 struct entry_set_cache_t *VAR_18 = ((void*)0);
 struct super_block *VAR_19 = VAR_7->i_sb;
 struct fs_info_t *VAR_20 = &(FUNC_2(VAR_19)->fs_info);
 struct file_id_t *VAR_21 = &(FUNC_1(VAR_7)->fid);


 if (!VAR_9)
  return VAR_2;


 FUNC_6(&VAR_20->v_sem);

 VAR_21->rwoffset = (s64)(VAR_8) << VAR_20->cluster_size_bits;

 if (FUNC_1(VAR_7)->mmu_private == 0)
  VAR_10 = 0;
 else
  VAR_10 = (s32)((FUNC_1(VAR_7)->mmu_private - 1) >>
         VAR_20->cluster_size_bits) + 1;

 *VAR_9 = VAR_13 = VAR_21->start_clu;

 if (VAR_21->flags == 0x03) {
  if ((VAR_8 > 0) && (*VAR_9 != FUNC_0(~0))) {
   VAR_13 += VAR_8 - 1;

   if (VAR_8 == VAR_10)
    *VAR_9 = FUNC_0(~0);
   else
    *VAR_9 += VAR_8;
  }
 } else {

  if ((VAR_8 > 0) && (VAR_21->hint_last_off > 0) &&
      (VAR_8 >= VAR_21->hint_last_off)) {
   VAR_8 -= VAR_21->hint_last_off;
   *VAR_9 = VAR_21->hint_last_clu;
  }

  while ((VAR_8 > 0) && (*VAR_9 != FUNC_0(~0))) {
   VAR_13 = *VAR_9;
   if (FUNC_3(VAR_19, *VAR_9, VAR_9) == -1) {
    VAR_14 = VAR_4;
    goto out;
   }
   VAR_8--;
  }
 }

 if (*VAR_9 == FUNC_0(~0)) {
  FUNC_8(VAR_19, VAR_6);

  VAR_16.dir = (VAR_13 == FUNC_0(~0)) ? FUNC_0(~0) :
     VAR_13 + 1;
  VAR_16.size = 0;
  VAR_16.flags = VAR_21->flags;


  VAR_11 = VAR_20->fs_func->alloc_cluster(VAR_19, 1, &VAR_16);
  if (VAR_11 < 0) {
   VAR_14 = VAR_4;
   goto out;
  } else if (VAR_11 == 0) {
   VAR_14 = VAR_3;
   goto out;
  }


  if (VAR_13 == FUNC_0(~0)) {
   if (VAR_16.flags == 0x01)
    VAR_21->flags = 0x01;
   VAR_21->start_clu = VAR_16.dir;
   VAR_12 = 1;
  } else {
   if (VAR_16.flags != VAR_21->flags) {
    FUNC_7(VAR_19, VAR_21->start_clu,
        VAR_10);
    VAR_21->flags = 0x01;
    VAR_12 = 1;
   }
   if (VAR_16.flags == 0x01)
    FUNC_4(VAR_19, VAR_13, VAR_16.dir);
  }

  VAR_10 += VAR_11;
  *VAR_9 = VAR_16.dir;

  if (VAR_20->vol_type == VAR_1) {
   VAR_18 = FUNC_10(VAR_19, &VAR_21->dir, VAR_21->entry,
        VAR_0, &VAR_17);
   if (!VAR_18) {
    VAR_14 = VAR_4;
    goto out;
   }

   VAR_17++;
  }


  if (VAR_12) {
   if (VAR_20->vol_type != VAR_1) {
    VAR_17 = FUNC_9(VAR_19, &(VAR_21->dir),
            VAR_21->entry, &VAR_15);
    if (!VAR_17) {
     VAR_14 = VAR_4;
     goto out;
    }
   }

   if (VAR_20->fs_func->get_entry_flag(VAR_17) != VAR_21->flags)
    VAR_20->fs_func->set_entry_flag(VAR_17, VAR_21->flags);

   if (VAR_20->fs_func->get_entry_clu0(VAR_17) != VAR_21->start_clu)
    VAR_20->fs_func->set_entry_clu0(VAR_17,
             VAR_21->start_clu);

   if (VAR_20->vol_type != VAR_1)
    FUNC_5(VAR_19, VAR_15);
  }

  if (VAR_20->vol_type == VAR_1) {
   FUNC_18(VAR_19, VAR_18);
   FUNC_11(VAR_18);
  }


  VAR_7->i_blocks += VAR_11 << (VAR_20->cluster_size_bits - 9);
 }


 VAR_21->hint_last_off = (s32)(VAR_21->rwoffset >> VAR_20->cluster_size_bits);
 VAR_21->hint_last_clu = *VAR_9;

 if (VAR_20->dev_ejected)
  VAR_14 = VAR_4;

out:

 FUNC_17(&VAR_20->v_sem);

 return VAR_14;
}
