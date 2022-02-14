
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time64_t ;
struct nilfs_segment_summary {int dummy; } ;
struct TYPE_2__ {unsigned int flags; int sumbytes; int cno; int ctime; scalar_t__ nfileblk; scalar_t__ nfinfo; scalar_t__ nsumblk; scalar_t__ nblocks; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; } ;
typedef int __u64 ;


 int FUNC_0 (struct nilfs_segment_buffer*) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct nilfs_segment_buffer *VAR_0, unsigned int VAR_1,
         time64_t VAR_2, __u64 VAR_3)
{
 int VAR_4;

 VAR_0->sb_sum.nblocks = VAR_0->sb_sum.nsumblk = 0;
 VAR_4 = FUNC_0(VAR_0);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_0->sb_sum.flags = VAR_1;
 VAR_0->sb_sum.sumbytes = sizeof(struct nilfs_segment_summary);
 VAR_0->sb_sum.nfinfo = VAR_0->sb_sum.nfileblk = 0;
 VAR_0->sb_sum.ctime = VAR_2;
 VAR_0->sb_sum.cno = VAR_3;
 return 0;
}
