
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {scalar_t__ total_valid_block_count; scalar_t__ user_block_count; scalar_t__ current_reserved_blocks; scalar_t__ unusable_block_count; int alloc_valid_block_count; int stat_lock; } ;
typedef scalar_t__ block_t ;
typedef scalar_t__ blkcnt_t ;
struct TYPE_2__ {scalar_t__ root_reserved_blocks; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct f2fs_sb_info*,struct inode*,int) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__,int,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*,int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_13(struct f2fs_sb_info *VAR_3,
     struct inode *VAR_4, blkcnt_t *VAR_5)
{
 blkcnt_t VAR_6 = 0, VAR_7 = 0;
 block_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4, *VAR_5);
 if (VAR_9)
  return VAR_9;

 if (FUNC_11(VAR_3, VAR_1)) {
  FUNC_5(VAR_1);
  VAR_7 = *VAR_5;
  goto release_quota;
 }





 FUNC_7(&VAR_3->alloc_valid_block_count, (*VAR_5));

 FUNC_9(&VAR_3->stat_lock);
 VAR_3->total_valid_block_count += (block_t)(*VAR_5);
 VAR_8 = VAR_3->user_block_count -
     VAR_3->current_reserved_blocks;

 if (!FUNC_1(VAR_3, VAR_4, 1))
  VAR_8 -= FUNC_0(VAR_3).root_reserved_blocks;
 if (FUNC_12(FUNC_6(VAR_3, VAR_2))) {
  if (VAR_8 > VAR_3->unusable_block_count)
   VAR_8 -= VAR_3->unusable_block_count;
  else
   VAR_8 = 0;
 }
 if (FUNC_12(VAR_3->total_valid_block_count > VAR_8)) {
  VAR_6 = VAR_3->total_valid_block_count - VAR_8;
  if (VAR_6 > *VAR_5)
   VAR_6 = *VAR_5;
  *VAR_5 -= VAR_6;
  VAR_7 = VAR_6;
  VAR_3->total_valid_block_count -= VAR_6;
  if (!*VAR_5) {
   FUNC_10(&VAR_3->stat_lock);
   goto enospc;
  }
 }
 FUNC_10(&VAR_3->stat_lock);

 if (FUNC_12(VAR_7)) {
  FUNC_8(&VAR_3->alloc_valid_block_count, VAR_7);
  FUNC_2(VAR_4, VAR_7);
 }
 FUNC_4(VAR_4, *VAR_5, 1, 1);
 return 0;

enospc:
 FUNC_8(&VAR_3->alloc_valid_block_count, VAR_7);
release_quota:
 FUNC_2(VAR_4, VAR_7);
 return -VAR_0;
}
