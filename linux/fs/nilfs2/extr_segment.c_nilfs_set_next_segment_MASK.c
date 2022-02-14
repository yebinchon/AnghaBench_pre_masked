
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_ctime; int ns_seg_seq; scalar_t__ ns_pseg_offset; int ns_nextnum; int ns_segnum; } ;
struct TYPE_2__ {int ctime; int seg_seq; scalar_t__ nblocks; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; scalar_t__ sb_fseg_start; scalar_t__ sb_pseg_start; int sb_nextnum; int sb_segnum; } ;



__attribute__((used)) static void FUNC_0(struct the_nilfs *VAR_0,
       struct nilfs_segment_buffer *VAR_1)
{
 VAR_0->ns_segnum = VAR_1->sb_segnum;
 VAR_0->ns_nextnum = VAR_1->sb_nextnum;
 VAR_0->ns_pseg_offset = VAR_1->sb_pseg_start - VAR_1->sb_fseg_start
  + VAR_1->sb_sum.nblocks;
 VAR_0->ns_seg_seq = VAR_1->sb_sum.seg_seq;
 VAR_0->ns_ctime = VAR_1->sb_sum.ctime;
}
