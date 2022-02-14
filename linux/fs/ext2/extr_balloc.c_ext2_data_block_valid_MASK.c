
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext2_sb_info {unsigned int s_sb_block; TYPE_1__* s_es; } ;
typedef unsigned int ext2_fsblk_t ;
struct TYPE_2__ {int s_blocks_count; int s_first_data_block; } ;


 unsigned int FUNC_0 (int ) ;

int FUNC_1(struct ext2_sb_info *VAR_0, ext2_fsblk_t VAR_1,
     unsigned int VAR_2)
{
 if ((VAR_1 <= FUNC_0(VAR_0->s_es->s_first_data_block)) ||
     (VAR_1 + VAR_2 - 1 < VAR_1) ||
     (VAR_1 + VAR_2 - 1 >= FUNC_0(VAR_0->s_es->s_blocks_count)))
  return 0;


 if ((VAR_1 <= VAR_0->s_sb_block) &&
     (VAR_1 + VAR_2 - 1 >= VAR_0->s_sb_block))
  return 0;

 return 1;
}
