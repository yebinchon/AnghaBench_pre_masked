
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_sufile; int ns_nextnum; int ns_segnum; int ns_seg_seq; int ns_pseg_offset; } ;
struct TYPE_2__ {int seg_seq; } ;
struct nilfs_segment_buffer {scalar_t__ sb_rest_blocks; int sb_list; int sb_segnum; TYPE_1__ sb_sum; int sb_nextnum; } ;
struct nilfs_sc_info {scalar_t__ sc_segbuf_nblocks; int sc_segbufs; int sc_write_logs; int sc_super; } ;
typedef int __u64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct nilfs_segment_buffer* FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct nilfs_segment_buffer*) ;
 int FUNC_5 (struct nilfs_segment_buffer*,int ,int ,struct the_nilfs*) ;
 int FUNC_6 (struct nilfs_segment_buffer*,struct nilfs_segment_buffer*) ;
 struct nilfs_segment_buffer* FUNC_7 (int ) ;
 int FUNC_8 (struct nilfs_segment_buffer*,int ,struct the_nilfs*) ;
 int FUNC_9 (struct the_nilfs*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct nilfs_sc_info *VAR_2,
         struct the_nilfs *VAR_3)
{
 struct nilfs_segment_buffer *VAR_4, *VAR_5;
 __u64 VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_4 = FUNC_7(VAR_2->sc_super);
 if (FUNC_12(!VAR_4))
  return -VAR_0;

 if (FUNC_3(&VAR_2->sc_write_logs)) {
  FUNC_5(VAR_4, VAR_3->ns_segnum,
     VAR_3->ns_pseg_offset, VAR_3);
  if (VAR_4->sb_rest_blocks < VAR_1) {
   FUNC_9(VAR_3);
   FUNC_5(VAR_4, VAR_3->ns_segnum, 0, VAR_3);
  }

  VAR_4->sb_sum.seg_seq = VAR_3->ns_seg_seq;
  VAR_6 = VAR_3->ns_nextnum;

  if (VAR_3->ns_segnum == VAR_3->ns_nextnum)

   VAR_8++;
 } else {

  VAR_5 = FUNC_1(&VAR_2->sc_write_logs);
  FUNC_6(VAR_4, VAR_5);
  VAR_4->sb_sum.seg_seq = VAR_5->sb_sum.seg_seq;
  VAR_6 = VAR_5->sb_nextnum;

  if (VAR_4->sb_rest_blocks < VAR_1) {
   FUNC_5(VAR_4, VAR_5->sb_nextnum, 0, VAR_3);
   VAR_4->sb_sum.seg_seq++;
   VAR_8++;
  }
 }

 VAR_7 = FUNC_11(VAR_3->ns_sufile, VAR_4->sb_segnum);
 if (VAR_7)
  goto failed;

 if (VAR_8) {
  VAR_7 = FUNC_10(VAR_3->ns_sufile, &VAR_6);
  if (VAR_7)
   goto failed;
 }
 FUNC_8(VAR_4, VAR_6, VAR_3);

 FUNC_0(!FUNC_3(&VAR_2->sc_segbufs));
 FUNC_2(&VAR_4->sb_list, &VAR_2->sc_segbufs);
 VAR_2->sc_segbuf_nblocks = VAR_4->sb_rest_blocks;
 return 0;

 failed:
 FUNC_4(VAR_4);
 return VAR_7;
}
