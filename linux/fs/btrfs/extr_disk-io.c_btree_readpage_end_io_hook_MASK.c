
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct page {scalar_t__ private; TYPE_1__* mapping; } ;
struct extent_buffer {int read_mirror; scalar_t__ start; int io_pages; int bflags; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_io_bio {int dummy; } ;
struct btrfs_fs_info {TYPE_2__* sb; int super_copy; } ;
struct TYPE_6__ {struct btrfs_root* root; } ;
struct TYPE_5__ {int s_id; } ;
struct TYPE_4__ {int host; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_4 (struct extent_buffer*) ;
 scalar_t__ FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct btrfs_fs_info*,char*,scalar_t__,...) ;
 int FUNC_7 (struct btrfs_fs_info*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (int ,struct extent_buffer*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct btrfs_fs_info*,char*,int ,scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct extent_buffer*) ;
 int FUNC_16 (struct extent_buffer*,int *) ;
 int FUNC_17 (struct extent_buffer*) ;
 int FUNC_18 (struct extent_buffer*) ;
 scalar_t__ FUNC_19 (struct extent_buffer*,int *,int ,int ) ;
 int FUNC_20 (int *,int *,int ) ;
 int FUNC_21 (struct extent_buffer*,int *,int ,int ) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (struct extent_buffer*) ;
 scalar_t__ FUNC_24 (int ,int *) ;
 scalar_t__ FUNC_25 (int ,int *) ;

__attribute__((used)) static int FUNC_26(struct btrfs_io_bio *VAR_7,
          u64 VAR_8, struct page *VAR_9,
          u64 VAR_10, u64 VAR_11, int VAR_12)
{
 u64 VAR_13;
 int VAR_14;
 struct extent_buffer *VAR_15;
 struct btrfs_root *VAR_16 = FUNC_0(VAR_9->mapping->host)->root;
 struct btrfs_fs_info *VAR_17 = VAR_16->fs_info;
 u16 VAR_18 = FUNC_12(VAR_17->super_copy);
 int VAR_19 = 0;
 u8 VAR_20[VAR_0];
 int VAR_21;

 if (!VAR_9->private)
  goto out;

 VAR_15 = (struct extent_buffer *)VAR_9->private;




 FUNC_17(VAR_15);

 VAR_21 = FUNC_1(&VAR_15->io_pages);
 if (!VAR_21)
  goto err;

 VAR_15->read_mirror = VAR_12;
 if (FUNC_25(VAR_6, &VAR_15->bflags)) {
  VAR_19 = -VAR_2;
  goto err;
 }

 VAR_13 = FUNC_8(VAR_15);
 if (VAR_13 != VAR_15->start) {
  FUNC_7(VAR_17, "bad tree block start, want %llu have %llu",
        VAR_15->start, VAR_13);
  VAR_19 = -VAR_2;
  goto err;
 }
 if (FUNC_14(VAR_15)) {
  FUNC_7(VAR_17, "bad fsid on block %llu",
        VAR_15->start);
  VAR_19 = -VAR_2;
  goto err;
 }
 VAR_14 = FUNC_9(VAR_15);
 if (VAR_14 >= VAR_1) {
  FUNC_6(VAR_17, "bad tree block level %d on %llu",
     (int)FUNC_9(VAR_15), VAR_15->start);
  VAR_19 = -VAR_2;
  goto err;
 }

 FUNC_11(FUNC_10(VAR_15),
           VAR_15, VAR_14);

 VAR_19 = FUNC_16(VAR_15, VAR_20);
 if (VAR_19)
  goto err;

 if (FUNC_19(VAR_15, VAR_20, 0, VAR_18)) {
  u32 VAR_22;
  u32 VAR_23 = 0;

  FUNC_20(&VAR_23, VAR_20, VAR_18);

  FUNC_21(VAR_15, &VAR_22, 0, VAR_18);
  FUNC_13(VAR_17,
  "%s checksum verify failed on %llu wanted %x found %x level %d",
         VAR_17->sb->s_id, VAR_15->start,
         VAR_22, VAR_23, FUNC_9(VAR_15));
  VAR_19 = -VAR_3;
  goto err;
 }






 if (VAR_14 == 0 && FUNC_4(VAR_15)) {
  FUNC_22(VAR_4, &VAR_15->bflags);
  VAR_19 = -VAR_2;
 }

 if (VAR_14 > 0 && FUNC_5(VAR_15))
  VAR_19 = -VAR_2;

 if (!VAR_19)
  FUNC_23(VAR_15);
 else
  FUNC_6(VAR_17,
     "block=%llu read time tree block corruption detected",
     VAR_15->start);
err:
 if (VAR_21 &&
     FUNC_24(VAR_5, &VAR_15->bflags))
  FUNC_3(VAR_15, VAR_19);

 if (VAR_19) {





  FUNC_2(&VAR_15->io_pages);
  FUNC_15(VAR_15);
 }
 FUNC_18(VAR_15);
out:
 return VAR_19;
}
