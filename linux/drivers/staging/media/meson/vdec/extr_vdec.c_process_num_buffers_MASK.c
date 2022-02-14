
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {unsigned int num_buffers; int min_buffers_needed; } ;
struct amvdec_session {unsigned int num_dst_bufs; struct amvdec_format* fmt_out; } ;
struct amvdec_format {unsigned int min_buffers; unsigned int max_buffers; } ;


 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct vb2_queue *VAR_0,
    struct amvdec_session *VAR_1,
    unsigned int *VAR_2,
    bool VAR_3)
{
 const struct amvdec_format *VAR_4 = VAR_1->fmt_out;
 unsigned int VAR_5 = VAR_0->num_buffers + *VAR_2;

 if (VAR_3 && VAR_5 < VAR_4->min_buffers)
  *VAR_2 = VAR_4->min_buffers - VAR_0->num_buffers;
 if (VAR_5 > VAR_4->max_buffers)
  *VAR_2 = VAR_4->max_buffers - VAR_0->num_buffers;






 VAR_1->num_dst_bufs = VAR_0->num_buffers + *VAR_2;
 VAR_0->min_buffers_needed = FUNC_0(VAR_4->min_buffers, VAR_1->num_dst_bufs);
}
