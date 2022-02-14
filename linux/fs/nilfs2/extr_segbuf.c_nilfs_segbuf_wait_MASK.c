
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nblocks; } ;
struct nilfs_segment_buffer {scalar_t__ sb_nbio; scalar_t__ sb_segnum; TYPE_1__ sb_sum; scalar_t__ sb_pseg_start; int sb_super; int sb_err; int sb_bio_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,unsigned long long,int ,unsigned long long) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct nilfs_segment_buffer *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2->sb_nbio)
  return 0;

 do {
  FUNC_3(&VAR_2->sb_bio_event);
 } while (--VAR_2->sb_nbio > 0);

 if (FUNC_2(FUNC_0(&VAR_2->sb_err) > 0)) {
  FUNC_1(VAR_2->sb_super, VAR_1,
     "I/O error writing log (start-blocknr=%llu, block-count=%lu) in segment %llu",
     (unsigned long long)VAR_2->sb_pseg_start,
     VAR_2->sb_sum.nblocks,
     (unsigned long long)VAR_2->sb_segnum);
  VAR_3 = -VAR_0;
 }
 return VAR_3;
}
