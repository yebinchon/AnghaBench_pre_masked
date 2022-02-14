
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nsumblk; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; scalar_t__ sb_pseg_start; int sb_super; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nilfs_segment_buffer*,struct buffer_head*) ;
 struct buffer_head* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct nilfs_segment_buffer *VAR_1)
{
 struct buffer_head *VAR_2;

 VAR_2 = FUNC_1(VAR_1->sb_super,
         VAR_1->sb_pseg_start + VAR_1->sb_sum.nsumblk);
 if (FUNC_2(!VAR_2))
  return -VAR_0;

 FUNC_0(VAR_1, VAR_2);
 return 0;
}
