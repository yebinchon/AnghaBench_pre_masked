
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {scalar_t__ log_blocks_per_seg; } ;
typedef scalar_t__ block_t ;


 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline block_t FUNC_2(struct f2fs_sb_info *VAR_0)
{
 if (FUNC_0(VAR_0) < FUNC_1(VAR_0))
  return 0;
 else
  return (FUNC_0(VAR_0) - FUNC_1(VAR_0))
   << VAR_0->log_blocks_per_seg;
}
