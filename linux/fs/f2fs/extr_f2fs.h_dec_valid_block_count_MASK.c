
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_blocks; int i_ino; } ;
struct f2fs_sb_info {scalar_t__ total_valid_block_count; scalar_t__ reserved_blocks; scalar_t__ current_reserved_blocks; int stat_lock; } ;
typedef scalar_t__ block_t ;
typedef scalar_t__ blkcnt_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f2fs_sb_info*,int) ;
 int FUNC_1 (struct inode*,scalar_t__,int,int) ;
 int FUNC_2 (struct f2fs_sb_info*,char*,int ,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline void FUNC_8(struct f2fs_sb_info *VAR_2,
      struct inode *VAR_3,
      block_t VAR_4)
{
 blkcnt_t VAR_5 = VAR_4 << VAR_0;

 FUNC_5(&VAR_2->stat_lock);
 FUNC_0(VAR_2, VAR_2->total_valid_block_count < (block_t) VAR_4);
 VAR_2->total_valid_block_count -= (block_t)VAR_4;
 if (VAR_2->reserved_blocks &&
  VAR_2->current_reserved_blocks < VAR_2->reserved_blocks)
  VAR_2->current_reserved_blocks = FUNC_3(VAR_2->reserved_blocks,
     VAR_2->current_reserved_blocks + VAR_4);
 FUNC_6(&VAR_2->stat_lock);
 if (FUNC_7(VAR_3->i_blocks < VAR_5)) {
  FUNC_2(VAR_2, "Inconsistent i_blocks, ino:%lu, iblocks:%llu, sectors:%llu",
     VAR_3->i_ino,
     (unsigned long long)VAR_3->i_blocks,
     (unsigned long long)VAR_5);
  FUNC_4(VAR_2, VAR_1);
  return;
 }
 FUNC_1(VAR_3, VAR_4, 0, 1);
}
