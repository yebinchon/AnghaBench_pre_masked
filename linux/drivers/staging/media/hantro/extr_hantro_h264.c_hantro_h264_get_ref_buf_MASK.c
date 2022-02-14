
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_buffer {int dummy; } ;
struct vb2_v4l2_buffer {struct vb2_buffer vb2_buf; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_h264_dpb_entry {int flags; int reference_ts; } ;
struct TYPE_8__ {struct v4l2_h264_dpb_entry* dpb; } ;
struct TYPE_7__ {TYPE_2__* m2m_ctx; } ;
struct hantro_ctx {TYPE_4__ h264_dec; TYPE_3__ fh; } ;
struct TYPE_5__ {struct vb2_queue q; } ;
struct TYPE_6__ {TYPE_1__ cap_q_ctx; } ;


 int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct hantro_ctx*) ;
 int FUNC_1 (struct vb2_queue*,int ,int ) ;
 struct vb2_buffer* FUNC_2 (struct vb2_queue*,int) ;

struct vb2_buffer *FUNC_3(struct hantro_ctx *VAR_1,
        unsigned int VAR_2)
{
 struct vb2_queue *VAR_3 = &VAR_1->fh.m2m_ctx->cap_q_ctx.q;
 struct v4l2_h264_dpb_entry *VAR_4 = VAR_1->h264_dec.dpb;
 struct vb2_buffer *VAR_5;
 int VAR_6 = -1;

 if (VAR_4[VAR_2].flags & VAR_0)
  VAR_6 = FUNC_1(VAR_3,
          VAR_4[VAR_2].reference_ts, 0);

 if (VAR_6 >= 0) {
  VAR_5 = FUNC_2(VAR_3, VAR_6);
 } else {
  struct vb2_v4l2_buffer *VAR_7;





  VAR_7 = FUNC_0(VAR_1);
  VAR_5 = &VAR_7->vb2_buf;
 }

 return VAR_5;
}
