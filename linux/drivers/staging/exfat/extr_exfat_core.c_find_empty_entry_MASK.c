
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {int i_blocks; struct super_block* i_sb; } ;
struct TYPE_6__ {int flags; scalar_t__ dir; scalar_t__ size; } ;
struct TYPE_7__ {int entry; scalar_t__ dir; TYPE_1__ clu; } ;
struct fs_info_t {scalar_t__ vol_type; scalar_t__ root_dir; int cluster_size_bits; scalar_t__ cluster_size; TYPE_3__* fs_func; TYPE_2__ hint_uentry; scalar_t__ dev_ejected; } ;
struct file_id_t {int flags; int size; scalar_t__ entry; int dir; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; int size; int flags; } ;
typedef int sector_t ;
typedef int s32 ;
struct TYPE_10__ {struct file_id_t fid; int mmu_private; } ;
struct TYPE_9__ {struct fs_info_t fs_info; } ;
struct TYPE_8__ {int (* alloc_cluster ) (struct super_block*,int,struct chain_t*) ;int (* set_entry_flag ) (struct dentry_t*,int) ;int (* set_entry_size ) (struct dentry_t*,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_1 (struct inode*) ;
 TYPE_4__* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct super_block*,int ) ;
 scalar_t__ FUNC_5 (struct super_block*,scalar_t__) ;
 int FUNC_6 (struct super_block*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (struct super_block*,struct chain_t*) ;
 struct dentry_t* FUNC_8 (struct super_block*,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,scalar_t__) ;
 int FUNC_11 (struct super_block*,struct chain_t*,int) ;
 int FUNC_12 (struct super_block*,int,struct chain_t*) ;
 int FUNC_13 (struct dentry_t*,scalar_t__) ;
 int FUNC_14 (struct dentry_t*,int) ;
 int FUNC_15 (struct super_block*,int *,scalar_t__) ;

s32 FUNC_16(struct inode *VAR_3, struct chain_t *VAR_4, s32 VAR_5)
{
 s32 VAR_6, VAR_7;
 u32 VAR_8;
 sector_t VAR_9;
 u64 VAR_10 = 0;
 struct chain_t VAR_11;
 struct dentry_t *VAR_12 = ((void*)0);
 struct super_block *VAR_13 = VAR_3->i_sb;
 struct fs_info_t *VAR_14 = &(FUNC_2(VAR_13)->fs_info);
 struct file_id_t *VAR_15 = &(FUNC_1(VAR_3)->fid);

 if (VAR_4->dir == FUNC_0(0))
  return FUNC_11(VAR_13, VAR_4, VAR_5);

 while ((VAR_7 = FUNC_11(VAR_13, VAR_4, VAR_5)) < 0) {
  if (VAR_14->dev_ejected)
   break;

  if (VAR_14->vol_type == VAR_1) {
   if (VAR_4->dir != VAR_14->root_dir)
    VAR_10 = FUNC_9(VAR_3);
  }

  VAR_8 = FUNC_7(VAR_13, VAR_4);
  VAR_11.dir = VAR_8 + 1;
  VAR_11.size = 0;
  VAR_11.flags = VAR_4->flags;


  VAR_6 = VAR_14->fs_func->alloc_cluster(VAR_13, 1, &VAR_11);
  if (VAR_6 < 1)
   return -1;

  if (FUNC_5(VAR_13, VAR_11.dir) != VAR_2)
   return -1;


  if (VAR_11.flags != VAR_4->flags) {
   FUNC_6(VAR_13, VAR_4->dir, VAR_4->size);
   VAR_4->flags = 0x01;
   VAR_14->hint_uentry.clu.flags = 0x01;
  }
  if (VAR_11.flags == 0x01)
   if (FUNC_3(VAR_13, VAR_8, VAR_11.dir) < 0)
    return -1;

  if (VAR_14->hint_uentry.entry == -1) {
   VAR_14->hint_uentry.dir = VAR_4->dir;
   VAR_14->hint_uentry.entry = VAR_4->size << (VAR_14->cluster_size_bits - VAR_0);

   VAR_14->hint_uentry.clu.dir = VAR_11.dir;
   VAR_14->hint_uentry.clu.size = 0;
   VAR_14->hint_uentry.clu.flags = VAR_11.flags;
  }
  VAR_14->hint_uentry.clu.size++;
  VAR_4->size++;


  if (VAR_14->vol_type == VAR_1) {
   if (VAR_4->dir != VAR_14->root_dir) {
    VAR_10 += VAR_14->cluster_size;

    VAR_12 = FUNC_8(VAR_13, &VAR_15->dir,
            VAR_15->entry + 1, &VAR_9);
    if (!VAR_12)
     return -1;
    VAR_14->fs_func->set_entry_size(VAR_12, VAR_10);
    VAR_14->fs_func->set_entry_flag(VAR_12, VAR_4->flags);
    FUNC_4(VAR_13, VAR_9);

    FUNC_15(VAR_13, &(VAR_15->dir),
          VAR_15->entry);
   }
  }

  FUNC_10(VAR_3, FUNC_9(VAR_3) + VAR_14->cluster_size);
  FUNC_1(VAR_3)->mmu_private += VAR_14->cluster_size;
  FUNC_1(VAR_3)->fid.size += VAR_14->cluster_size;
  FUNC_1(VAR_3)->fid.flags = VAR_4->flags;
  VAR_3->i_blocks += 1 << (VAR_14->cluster_size_bits - 9);
 }

 return VAR_7;
}
