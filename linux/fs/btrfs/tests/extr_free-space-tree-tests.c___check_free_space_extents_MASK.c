
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef unsigned int u32 ;
struct free_space_extent {scalar_t__ start; scalar_t__ length; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_path {scalar_t__* slots; int * nodes; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_fs_info {scalar_t__ sectorsize; } ;
struct btrfs_free_space_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {TYPE_1__ key; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct btrfs_free_space_info*) ;
 int FUNC_1 (struct btrfs_free_space_info*) ;
 unsigned int FUNC_2 (int ,struct btrfs_free_space_info*) ;
 unsigned int FUNC_3 (int ,struct btrfs_free_space_info*) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct btrfs_key*,unsigned int) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (struct btrfs_block_group_cache*,struct btrfs_path*,scalar_t__) ;
 struct btrfs_free_space_info* FUNC_8 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct btrfs_trans_handle *VAR_4,
          struct btrfs_fs_info *VAR_5,
          struct btrfs_block_group_cache *VAR_6,
          struct btrfs_path *VAR_7,
          const struct free_space_extent * const VAR_8,
          unsigned int VAR_9)
{
 struct btrfs_free_space_info *VAR_10;
 struct btrfs_key VAR_11;
 int VAR_12 = 0, VAR_13;
 u64 VAR_14 = 0, VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 VAR_10 = FUNC_8(VAR_4, VAR_6, VAR_7, 0);
 if (FUNC_0(VAR_10)) {
  FUNC_9("could not find free space info");
  VAR_20 = FUNC_1(VAR_10);
  goto out;
 }
 VAR_17 = FUNC_3(VAR_7->nodes[0], VAR_10);
 VAR_18 = FUNC_2(VAR_7->nodes[0], VAR_10);

 if (VAR_18 != VAR_9) {
  FUNC_9("extent count is wrong");
  VAR_20 = -VAR_3;
  goto out;
 }
 if (VAR_17 & VAR_2) {
  if (VAR_7->slots[0] != 0)
   goto invalid;
  VAR_16 = VAR_6->key.objectid + VAR_6->key.offset;
  VAR_19 = 0;
  while (++VAR_7->slots[0] < FUNC_4(VAR_7->nodes[0])) {
   FUNC_5(VAR_7->nodes[0], &VAR_11, VAR_7->slots[0]);
   if (VAR_11.type != VAR_0)
    goto invalid;
   VAR_15 = VAR_11.objectid;
   while (VAR_15 < VAR_11.objectid + VAR_11.offset) {
    VAR_13 = FUNC_7(VAR_6, VAR_7, VAR_15);
    if (VAR_12 == 0 && VAR_13 == 1) {
     VAR_14 = VAR_15;
    } else if (VAR_12 == 1 && VAR_13 == 0) {
     if (VAR_19 >= VAR_9)
      goto invalid;
     if (VAR_19 >= VAR_9 ||
         VAR_14 != VAR_8[VAR_19].start ||
         VAR_15 - VAR_14 != VAR_8[VAR_19].length)
      goto invalid;
     VAR_19++;
    }
    VAR_12 = VAR_13;
    VAR_15 += VAR_5->sectorsize;
   }
  }
  if (VAR_12 == 1) {
   if (VAR_19 >= VAR_9 ||
       VAR_14 != VAR_8[VAR_19].start ||
       VAR_16 - VAR_14 != VAR_8[VAR_19].length)
    goto invalid;
   VAR_19++;
  }
  if (VAR_19 != VAR_9)
   goto invalid;
 } else {
  if (FUNC_4(VAR_7->nodes[0]) != VAR_9 + 1 ||
      VAR_7->slots[0] != 0)
   goto invalid;
  for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
   VAR_7->slots[0]++;
   FUNC_5(VAR_7->nodes[0], &VAR_11, VAR_7->slots[0]);
   if (VAR_11.type != VAR_1 ||
       VAR_11.objectid != VAR_8[VAR_19].start ||
       VAR_11.offset != VAR_8[VAR_19].length)
    goto invalid;
  }
 }

 VAR_20 = 0;
out:
 FUNC_6(VAR_7);
 return VAR_20;
invalid:
 FUNC_9("free space tree is invalid");
 VAR_20 = -VAR_3;
 goto out;
}
