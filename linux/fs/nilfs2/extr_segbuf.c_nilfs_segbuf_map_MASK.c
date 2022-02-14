
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int dummy; } ;
struct nilfs_segment_buffer {scalar_t__ sb_pseg_start; scalar_t__ sb_fseg_end; scalar_t__ sb_rest_blocks; scalar_t__ sb_fseg_start; int sb_segnum; } ;
typedef int __u64 ;


 int FUNC_0 (struct the_nilfs*,int ,scalar_t__*,scalar_t__*) ;

void FUNC_1(struct nilfs_segment_buffer *VAR_0, __u64 VAR_1,
       unsigned long VAR_2, struct the_nilfs *VAR_3)
{
 VAR_0->sb_segnum = VAR_1;
 FUNC_0(VAR_3, VAR_1, &VAR_0->sb_fseg_start,
    &VAR_0->sb_fseg_end);

 VAR_0->sb_pseg_start = VAR_0->sb_fseg_start + VAR_2;
 VAR_0->sb_rest_blocks =
  VAR_0->sb_fseg_end - VAR_0->sb_pseg_start + 1;
}
