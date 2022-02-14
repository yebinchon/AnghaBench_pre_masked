
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nblocks; } ;
struct nilfs_segment_buffer {scalar_t__ sb_pseg_start; scalar_t__ sb_fseg_end; scalar_t__ sb_rest_blocks; TYPE_1__ sb_sum; int sb_fseg_start; int sb_segnum; } ;



void FUNC_0(struct nilfs_segment_buffer *VAR_0,
      struct nilfs_segment_buffer *VAR_1)
{
 VAR_0->sb_segnum = VAR_1->sb_segnum;
 VAR_0->sb_fseg_start = VAR_1->sb_fseg_start;
 VAR_0->sb_fseg_end = VAR_1->sb_fseg_end;
 VAR_0->sb_pseg_start = VAR_1->sb_pseg_start + VAR_1->sb_sum.nblocks;
 VAR_0->sb_rest_blocks =
  VAR_0->sb_fseg_end - VAR_0->sb_pseg_start + 1;
}
