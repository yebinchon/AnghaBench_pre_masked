
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int s_bdev; } ;
struct hfsplus_vh {void* file_count; void* folder_count; void* next_cnid; void* free_blocks; } ;
struct hfsplus_sb_info {int flags; int vh_mutex; int alloc_mutex; int s_backup_vhdr_buf; scalar_t__ sect_count; scalar_t__ part_start; int s_vhdr_buf; struct hfsplus_vh* s_vhdr; int s_backup_vhdr; int file_count; int folder_count; int next_cnid; int free_blocks; TYPE_7__* alloc_file; TYPE_6__* attr_tree; TYPE_4__* ext_tree; TYPE_2__* cat_tree; } ;
struct TYPE_14__ {int i_mapping; } ;
struct TYPE_13__ {TYPE_5__* inode; } ;
struct TYPE_12__ {int i_mapping; } ;
struct TYPE_11__ {TYPE_3__* inode; } ;
struct TYPE_10__ {int i_mapping; } ;
struct TYPE_9__ {TYPE_1__* inode; } ;
struct TYPE_8__ {int i_mapping; } ;


 int VAR_0 ;
 struct hfsplus_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct super_block*,scalar_t__,int ,int *,int ,int ) ;
 int FUNC_6 (int ,struct hfsplus_vh*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_7, int VAR_8)
{
 struct hfsplus_sb_info *VAR_9 = FUNC_0(VAR_7);
 struct hfsplus_vh *VAR_10 = VAR_9->s_vhdr;
 int VAR_11 = 0;
 int VAR_12, VAR_13;

 if (!VAR_8)
  return 0;

 FUNC_4(VAR_6, "hfsplus_sync_fs\n");
 VAR_12 = FUNC_3(VAR_9->cat_tree->inode->i_mapping);
 VAR_13 = FUNC_3(VAR_9->ext_tree->inode->i_mapping);
 if (!VAR_12)
  VAR_12 = VAR_13;
 if (VAR_9->attr_tree) {
  VAR_13 =
      FUNC_3(VAR_9->attr_tree->inode->i_mapping);
  if (!VAR_12)
   VAR_12 = VAR_13;
 }
 VAR_13 = FUNC_3(VAR_9->alloc_file->i_mapping);
 if (!VAR_12)
  VAR_12 = VAR_13;

 FUNC_7(&VAR_9->vh_mutex);
 FUNC_7(&VAR_9->alloc_mutex);
 VAR_10->free_blocks = FUNC_2(VAR_9->free_blocks);
 VAR_10->next_cnid = FUNC_2(VAR_9->next_cnid);
 VAR_10->folder_count = FUNC_2(VAR_9->folder_count);
 VAR_10->file_count = FUNC_2(VAR_9->file_count);

 if (FUNC_9(VAR_2, &VAR_9->flags)) {
  FUNC_6(VAR_9->s_backup_vhdr, VAR_9->s_vhdr, sizeof(*VAR_9->s_vhdr));
  VAR_11 = 1;
 }

 VAR_13 = FUNC_5(VAR_7,
       VAR_9->part_start + VAR_3,
       VAR_9->s_vhdr_buf, ((void*)0), VAR_4,
       VAR_5);
 if (!VAR_12)
  VAR_12 = VAR_13;
 if (!VAR_11)
  goto out;

 VAR_13 = FUNC_5(VAR_7,
      VAR_9->part_start + VAR_9->sect_count - 2,
      VAR_9->s_backup_vhdr_buf, ((void*)0), VAR_4,
      VAR_5);
 if (!VAR_12)
  VAR_13 = VAR_12;
out:
 FUNC_8(&VAR_9->alloc_mutex);
 FUNC_8(&VAR_9->vh_mutex);

 if (!FUNC_10(VAR_1, &VAR_9->flags))
  FUNC_1(VAR_7->s_bdev, VAR_0, ((void*)0));

 return VAR_12;
}
