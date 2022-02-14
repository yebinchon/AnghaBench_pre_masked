
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nblocks; scalar_t__ nsumblk; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; } ;



__attribute__((used)) static inline int FUNC_0(struct nilfs_segment_buffer *VAR_0)
{
 return VAR_0->sb_sum.nblocks == VAR_0->sb_sum.nsumblk;
}
