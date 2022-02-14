
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int nrpages; } ;
struct inode {TYPE_1__ i_data; int i_dentry; int i_sb; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_ordered_extent {int len; int file_offset; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_6__ {int reserved; int size; } ;
struct TYPE_7__ {int outstanding_extents; int delalloc_bytes; int new_delalloc_bytes; int csum_bytes; int defrag_bytes; TYPE_2__ block_rsv; struct btrfs_root* root; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (struct btrfs_fs_info*,char*,int ,int ) ;
 struct btrfs_ordered_extent* FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct btrfs_ordered_extent*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct btrfs_ordered_extent*) ;
 struct btrfs_fs_info* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*) ;

void FUNC_11(struct inode *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = FUNC_8(VAR_0->i_sb);
 struct btrfs_ordered_extent *VAR_2;
 struct btrfs_root *VAR_3 = FUNC_0(VAR_0)->root;

 FUNC_1(!FUNC_9(&VAR_0->i_dentry));
 FUNC_1(VAR_0->i_data.nrpages);
 FUNC_1(FUNC_0(VAR_0)->block_rsv.reserved);
 FUNC_1(FUNC_0(VAR_0)->block_rsv.size);
 FUNC_1(FUNC_0(VAR_0)->outstanding_extents);
 FUNC_1(FUNC_0(VAR_0)->delalloc_bytes);
 FUNC_1(FUNC_0(VAR_0)->new_delalloc_bytes);
 FUNC_1(FUNC_0(VAR_0)->csum_bytes);
 FUNC_1(FUNC_0(VAR_0)->defrag_bytes);






 if (!VAR_3)
  return;

 while (1) {
  VAR_2 = FUNC_4(VAR_0, (u64)-1);
  if (!VAR_2)
   break;
  else {
   FUNC_3(VAR_1,
      "found ordered extent %llu %llu on inode cleanup",
      VAR_2->file_offset, VAR_2->len);
   FUNC_7(VAR_0, VAR_2);
   FUNC_5(VAR_2);
   FUNC_5(VAR_2);
  }
 }
 FUNC_6(VAR_0);
 FUNC_10(VAR_0);
 FUNC_2(FUNC_0(VAR_0), 0, (u64)-1, 0);
}
