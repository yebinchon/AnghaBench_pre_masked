
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int sumbytes; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; int sb_segsum_buffers; } ;
struct TYPE_6__ {unsigned int offset; struct buffer_head* bh; } ;
struct TYPE_5__ {unsigned int offset; struct buffer_head* bh; } ;
struct nilfs_sc_info {scalar_t__ sc_datablk_cnt; scalar_t__ sc_blk_cnt; TYPE_3__ sc_binfo_ptr; TYPE_2__ sc_finfo_ptr; int sc_cno; int sc_seg_ctime; struct nilfs_segment_buffer* sc_curseg; } ;
struct buffer_head {int dummy; } ;


 struct buffer_head* FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct nilfs_segment_buffer*,unsigned int,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct nilfs_sc_info *VAR_1)
{
 struct nilfs_segment_buffer *VAR_2 = VAR_1->sc_curseg;
 struct buffer_head *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5 = 0;
 int VAR_6;

 if (FUNC_1())
  VAR_5 = VAR_0;
 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_1->sc_seg_ctime, VAR_1->sc_cno);
 if (FUNC_3(VAR_6))
  return VAR_6;

 VAR_3 = FUNC_0(&VAR_2->sb_segsum_buffers);
 VAR_4 = VAR_2->sb_sum.sumbytes;
 VAR_1->sc_finfo_ptr.bh = VAR_3; VAR_1->sc_finfo_ptr.offset = VAR_4;
 VAR_1->sc_binfo_ptr.bh = VAR_3; VAR_1->sc_binfo_ptr.offset = VAR_4;
 VAR_1->sc_blk_cnt = VAR_1->sc_datablk_cnt = 0;
 return 0;
}
