
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {unsigned int total_valid_block_count; unsigned int current_reserved_blocks; unsigned int user_block_count; int total_valid_node_count; unsigned int total_node_count; int alloc_valid_block_count; int stat_lock; scalar_t__ unusable_block_count; } ;
typedef unsigned int block_t ;
struct TYPE_2__ {scalar_t__ root_reserved_blocks; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct f2fs_sb_info*,struct inode*,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct inode*,int,int,int) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct f2fs_sb_info*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static inline int FUNC_15(struct f2fs_sb_info *VAR_3,
     struct inode *VAR_4, bool VAR_5)
{
 block_t VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 if (VAR_5) {
  if (VAR_4) {
   VAR_9 = FUNC_2(VAR_4);
   if (VAR_9)
    return VAR_9;
  }
 } else {
  VAR_9 = FUNC_5(VAR_4, 1);
  if (VAR_9)
   return VAR_9;
 }

 if (FUNC_13(VAR_3, VAR_1)) {
  FUNC_8(VAR_1);
  goto enospc;
 }

 FUNC_11(&VAR_3->stat_lock);

 VAR_6 = VAR_3->total_valid_block_count +
     VAR_3->current_reserved_blocks + 1;

 if (!FUNC_1(VAR_3, VAR_4, 0))
  VAR_6 += FUNC_0(VAR_3).root_reserved_blocks;
 VAR_8 = VAR_3->user_block_count;
 if (FUNC_14(FUNC_9(VAR_3, VAR_2)))
  VAR_8 -= VAR_3->unusable_block_count;

 if (FUNC_14(VAR_6 > VAR_8)) {
  FUNC_12(&VAR_3->stat_lock);
  goto enospc;
 }

 VAR_7 = VAR_3->total_valid_node_count + 1;
 if (FUNC_14(VAR_7 > VAR_3->total_node_count)) {
  FUNC_12(&VAR_3->stat_lock);
  goto enospc;
 }

 VAR_3->total_valid_node_count++;
 VAR_3->total_valid_block_count++;
 FUNC_12(&VAR_3->stat_lock);

 if (VAR_4) {
  if (VAR_5)
   FUNC_7(VAR_4, 1);
  else
   FUNC_6(VAR_4, 1, 1, 1);
 }

 FUNC_10(&VAR_3->alloc_valid_block_count);
 return 0;

enospc:
 if (VAR_5) {
  if (VAR_4)
   FUNC_3(VAR_4);
 } else {
  FUNC_4(VAR_4, 1);
 }
 return -VAR_0;
}
