
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nfileblk; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct nilfs_segment_buffer*,struct buffer_head*) ;

__attribute__((used)) static inline void
FUNC_2(struct nilfs_segment_buffer *VAR_0,
        struct buffer_head *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_0, VAR_1);
 VAR_0->sb_sum.nfileblk++;
}
