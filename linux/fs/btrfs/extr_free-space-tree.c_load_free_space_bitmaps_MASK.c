
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; int * nodes; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_fs_info {scalar_t__ sectorsize; struct btrfs_root* free_space_root; } ;
struct btrfs_caching_control {scalar_t__ progress; int wait; struct btrfs_block_group_cache* block_group; } ;
struct TYPE_2__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {TYPE_1__ key; struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct btrfs_block_group_cache*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,struct btrfs_key*,int ) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_block_group_cache*,struct btrfs_path*,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct btrfs_caching_control *VAR_4,
       struct btrfs_path *VAR_5,
       u32 VAR_6)
{
 struct btrfs_block_group_cache *VAR_7;
 struct btrfs_fs_info *VAR_8;
 struct btrfs_root *VAR_9;
 struct btrfs_key VAR_10;
 int VAR_11 = 0, VAR_12;

 u64 VAR_13 = 0;
 u64 VAR_14, VAR_15;
 u64 VAR_16 = 0;
 u32 VAR_17 = 0;
 int VAR_18;

 VAR_7 = VAR_4->block_group;
 VAR_8 = VAR_7->fs_info;
 VAR_9 = VAR_8->free_space_root;

 VAR_14 = VAR_7->key.objectid + VAR_7->key.offset;

 while (1) {
  VAR_18 = FUNC_4(VAR_9, VAR_5);
  if (VAR_18 < 0)
   goto out;
  if (VAR_18)
   break;

  FUNC_3(VAR_5->nodes[0], &VAR_10, VAR_5->slots[0]);

  if (VAR_10.type == VAR_1)
   break;

  FUNC_0(VAR_10.type == VAR_0);
  FUNC_0(VAR_10.objectid < VAR_14 && VAR_10.objectid + VAR_10.offset <= VAR_14);

  VAR_4->progress = VAR_10.objectid;

  VAR_15 = VAR_10.objectid;
  while (VAR_15 < VAR_10.objectid + VAR_10.offset) {
   VAR_12 = FUNC_5(VAR_7, VAR_5, VAR_15);
   if (VAR_11 == 0 && VAR_12 == 1) {
    VAR_13 = VAR_15;
   } else if (VAR_11 == 1 && VAR_12 == 0) {
    VAR_16 += FUNC_1(VAR_7,
          VAR_13,
          VAR_15);
    if (VAR_16 > VAR_2) {
     VAR_16 = 0;
     FUNC_6(&VAR_4->wait);
    }
    VAR_17++;
   }
   VAR_11 = VAR_12;
   VAR_15 += VAR_8->sectorsize;
  }
 }
 if (VAR_11 == 1) {
  VAR_16 += FUNC_1(VAR_7, VAR_13,
        VAR_14);
  VAR_17++;
 }

 if (VAR_17 != VAR_6) {
  FUNC_2(VAR_8,
     "incorrect extent count for %llu; counted %u, expected %u",
     VAR_7->key.objectid, VAR_17,
     VAR_6);
  FUNC_0(0);
  VAR_18 = -VAR_3;
  goto out;
 }

 VAR_4->progress = (u64)-1;

 VAR_18 = 0;
out:
 return VAR_18;
}
