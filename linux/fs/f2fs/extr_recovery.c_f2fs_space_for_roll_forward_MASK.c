
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {scalar_t__ last_valid_block_count; scalar_t__ user_block_count; int alloc_valid_block_count; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (int *) ;

bool FUNC_1(struct f2fs_sb_info *VAR_0)
{
 s64 VAR_1 = FUNC_0(&VAR_0->alloc_valid_block_count);

 if (VAR_0->last_valid_block_count + VAR_1 > VAR_0->user_block_count)
  return 0;
 return 1;
}
