
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {scalar_t__ i_blkbits; int i_sb; } ;
struct extent_map {scalar_t__ block_start; scalar_t__ start; int flags; int bdev; scalar_t__ len; } ;
struct buffer_head {scalar_t__ b_size; int b_bdev; scalar_t__ b_blocknr; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_dio_data {scalar_t__ reserve; scalar_t__ unsubmitted_oe_range_end; int overwrite; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct btrfs_dio_data* journal_info; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct extent_map*) ;
 int FUNC_2 (struct extent_map*) ;
 int FUNC_3 (int) ;
 struct extent_map* FUNC_4 (struct inode*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct btrfs_fs_info*,scalar_t__) ;
 struct extent_map* FUNC_8 (struct inode*,scalar_t__,scalar_t__) ;
 struct btrfs_fs_info* FUNC_9 (int ) ;
 int FUNC_10 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_11 (struct extent_map*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct buffer_head*) ;
 scalar_t__ FUNC_17 (int ,int *) ;

__attribute__((used)) static int FUNC_18(struct extent_map **VAR_6,
      struct buffer_head *VAR_7,
      struct inode *VAR_8,
      struct btrfs_dio_data *VAR_9,
      u64 VAR_10, u64 VAR_11)
{
 struct btrfs_fs_info *VAR_12 = FUNC_9(VAR_8->i_sb);
 struct extent_map *VAR_13 = *VAR_6;
 int VAR_14 = 0;
 if (FUNC_17(VAR_3, &VAR_13->flags) ||
     ((FUNC_0(VAR_8)->flags & VAR_0) &&
      VAR_13->block_start != VAR_4)) {
  int VAR_15;
  u64 VAR_16, VAR_17, VAR_18, VAR_19;

  if (FUNC_17(VAR_3, &VAR_13->flags))
   VAR_15 = VAR_2;
  else
   VAR_15 = VAR_1;
  VAR_11 = FUNC_14(VAR_11, VAR_13->len - (VAR_10 - VAR_13->start));
  VAR_16 = VAR_13->block_start + (VAR_10 - VAR_13->start);

  if (FUNC_10(VAR_8, VAR_10, &VAR_11, &VAR_17,
         &VAR_18, &VAR_19) == 1 &&
      FUNC_7(VAR_12, VAR_16)) {
   struct extent_map *VAR_20;

   VAR_20 = FUNC_4(VAR_8, VAR_10, VAR_11,
            VAR_17, VAR_16,
            VAR_11, VAR_18,
            VAR_19, VAR_15);
   FUNC_5(VAR_12, VAR_16);
   if (VAR_15 == VAR_2) {
    FUNC_11(VAR_13);
    *VAR_6 = VAR_13 = VAR_20;
   }

   if (VAR_20 && FUNC_1(VAR_20)) {
    VAR_14 = FUNC_2(VAR_20);
    goto out;
   }





   FUNC_6(VAR_8, VAR_10,
              VAR_11);
   goto skip_cow;
  }
 }


 VAR_11 = VAR_7->b_size;
 FUNC_11(VAR_13);
 *VAR_6 = VAR_13 = FUNC_8(VAR_8, VAR_10, VAR_11);
 if (FUNC_1(VAR_13)) {
  VAR_14 = FUNC_2(VAR_13);
  goto out;
 }

 VAR_11 = FUNC_14(VAR_11, VAR_13->len - (VAR_10 - VAR_13->start));

skip_cow:
 VAR_7->b_blocknr = (VAR_13->block_start + (VAR_10 - VAR_13->start)) >>
  VAR_8->i_blkbits;
 VAR_7->b_size = VAR_11;
 VAR_7->b_bdev = VAR_13->bdev;
 FUNC_15(VAR_7);

 if (!FUNC_17(VAR_3, &VAR_13->flags))
  FUNC_16(VAR_7);





 if (!VAR_9->overwrite && VAR_10 + VAR_11 > FUNC_12(VAR_8))
  FUNC_13(VAR_8, VAR_10 + VAR_11);

 FUNC_3(VAR_9->reserve < VAR_11);
 VAR_9->reserve -= VAR_11;
 VAR_9->unsubmitted_oe_range_end = VAR_10 + VAR_11;
 VAR_5->journal_info = VAR_9;
out:
 return VAR_14;
}
