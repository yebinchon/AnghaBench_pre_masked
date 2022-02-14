
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct inode {TYPE_1__* i_sb; } ;
struct btrfs_io_bio {int * csum; } ;
struct btrfs_dio_private {scalar_t__ logical_offset; struct bio* orig_bio; } ;
struct bio {int dummy; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_2__ {scalar_t__ s_blocksize_bits; } ;


 struct btrfs_io_bio* FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct inode*,struct bio*,scalar_t__) ;

__attribute__((used)) static inline blk_status_t FUNC_2(struct inode *VAR_0,
       struct btrfs_dio_private *VAR_1,
       struct bio *VAR_2,
       u64 VAR_3)
{
 struct btrfs_io_bio *VAR_4 = FUNC_0(VAR_2);
 struct btrfs_io_bio *VAR_5 = FUNC_0(VAR_1->orig_bio);
 blk_status_t VAR_6;






 if (VAR_1->logical_offset == VAR_3) {
  VAR_6 = FUNC_1(VAR_0, VAR_1->orig_bio,
      VAR_3);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_2 == VAR_1->orig_bio)
  return 0;

 VAR_3 -= VAR_1->logical_offset;
 VAR_3 >>= VAR_0->i_sb->s_blocksize_bits;
 VAR_4->csum = (u8 *)(((u32 *)VAR_5->csum) + VAR_3);

 return 0;
}
