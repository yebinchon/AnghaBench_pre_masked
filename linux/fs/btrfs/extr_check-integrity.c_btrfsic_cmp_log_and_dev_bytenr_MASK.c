
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfsic_state {int metablock_size; struct btrfs_fs_info* fs_info; } ;
struct btrfsic_dev_state {scalar_t__ bdev; int name; } ;
struct btrfsic_block_data_ctx {scalar_t__ dev_bytenr; TYPE_1__* dev; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ bdev; int name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,scalar_t__,int ) ;
 int FUNC_2 (struct btrfsic_state*,scalar_t__,int ,struct btrfsic_block_data_ctx*,int) ;
 int FUNC_3 (struct btrfsic_block_data_ctx*) ;
 int FUNC_4 (char*,scalar_t__,int,...) ;

__attribute__((used)) static void FUNC_5(struct btrfsic_state *VAR_0,
        u64 VAR_1,
        struct btrfsic_dev_state *VAR_2,
        u64 VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_0->fs_info;
 struct btrfsic_block_data_ctx VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_6 = FUNC_1(VAR_4, VAR_1, VAR_0->metablock_size);

 for (VAR_7 = 1; VAR_7 <= VAR_6; VAR_7++) {
  VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_0->metablock_size,
     &VAR_5, VAR_7);
  if (VAR_9) {
   FUNC_4("btrfsic: btrfsic_map_block(logical @%llu, mirror %d) failed!\n",
          VAR_1, VAR_7);
   continue;
  }

  if (VAR_2->bdev == VAR_5.dev->bdev &&
      VAR_3 == VAR_5.dev_bytenr) {
   VAR_8++;
   FUNC_3(&VAR_5);
   break;
  }
  FUNC_3(&VAR_5);
 }

 if (FUNC_0(!VAR_8)) {
  FUNC_4("btrfs: attempt to write M-block which contains logical bytenr that doesn't map to dev+physical bytenr of submit_bio, buffer->log_bytenr=%llu, submit_bio(bdev=%s, phys_bytenr=%llu)!\n",
         VAR_1, VAR_2->name, VAR_3);
  for (VAR_7 = 1; VAR_7 <= VAR_6; VAR_7++) {
   VAR_9 = FUNC_2(VAR_0, VAR_1,
      VAR_0->metablock_size,
      &VAR_5, VAR_7);
   if (VAR_9)
    continue;

   FUNC_4("Read logical bytenr @%llu maps to (%s/%llu/%d)\n",
          VAR_1, VAR_5.dev->name,
          VAR_5.dev_bytenr, VAR_7);
  }
 }
}
