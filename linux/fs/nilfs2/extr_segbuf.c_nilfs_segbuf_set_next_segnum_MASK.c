
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct TYPE_2__ {int next; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; int sb_nextnum; } ;
typedef int __u64 ;


 int FUNC_0 (struct the_nilfs*,int ) ;

void FUNC_1(struct nilfs_segment_buffer *VAR_0,
      __u64 VAR_1, struct the_nilfs *VAR_2)
{
 VAR_0->sb_nextnum = VAR_1;
 VAR_0->sb_sum.next = FUNC_0(VAR_2, VAR_1);
}
