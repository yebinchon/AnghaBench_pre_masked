
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_blocks; int i_ino; } ;
struct f2fs_sb_info {scalar_t__ reserved_blocks; scalar_t__ current_reserved_blocks; int stat_lock; int total_valid_block_count; int total_valid_node_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct f2fs_sb_info*,int) ;
 int FUNC_2 (struct inode*,int,int,int) ;
 int FUNC_3 (struct f2fs_sb_info*,char*,int ,unsigned long long) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline void FUNC_8(struct f2fs_sb_info *VAR_1,
     struct inode *VAR_2, bool VAR_3)
{
 FUNC_5(&VAR_1->stat_lock);

 FUNC_1(VAR_1, !VAR_1->total_valid_block_count);
 FUNC_1(VAR_1, !VAR_1->total_valid_node_count);

 VAR_1->total_valid_node_count--;
 VAR_1->total_valid_block_count--;
 if (VAR_1->reserved_blocks &&
  VAR_1->current_reserved_blocks < VAR_1->reserved_blocks)
  VAR_1->current_reserved_blocks++;

 FUNC_6(&VAR_1->stat_lock);

 if (VAR_3) {
  FUNC_0(VAR_2);
 } else {
  if (FUNC_7(VAR_2->i_blocks == 0)) {
   FUNC_3(VAR_1, "Inconsistent i_blocks, ino:%lu, iblocks:%llu",
      VAR_2->i_ino,
      (unsigned long long)VAR_2->i_blocks);
   FUNC_4(VAR_1, VAR_0);
   return;
  }
  FUNC_2(VAR_2, 1, 0, 1);
 }
}
