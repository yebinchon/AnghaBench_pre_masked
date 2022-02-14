
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_ctrl_vp8_frame_header {int flags; scalar_t__ alt_frame_ts; scalar_t__ golden_frame_ts; scalar_t__ last_frame_ts; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_6__ {TYPE_2__* m2m_ctx; } ;
struct hantro_ctx {struct hantro_dev* dev; TYPE_3__ fh; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct vb2_queue q; } ;
struct TYPE_5__ {TYPE_1__ cap_q_ctx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct hantro_ctx*) ;
 int FUNC_3 (struct vb2_queue*,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct hantro_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hantro_ctx *VAR_3,
      const struct v4l2_ctrl_vp8_frame_header *VAR_4)
{
 struct vb2_queue *VAR_5 = &VAR_3->fh.m2m_ctx->cap_q_ctx.q;
 struct hantro_dev *VAR_6 = VAR_3->dev;
 struct vb2_v4l2_buffer *VAR_7;
 dma_addr_t VAR_8;

 VAR_7 = FUNC_2(VAR_3);

 VAR_8 = FUNC_3(VAR_5, VAR_4->last_frame_ts);
 if (!VAR_8)
  VAR_8 = FUNC_4(&VAR_7->vb2_buf, 0);
 FUNC_5(VAR_6, VAR_8, FUNC_0(0));

 VAR_8 = FUNC_3(VAR_5, VAR_4->golden_frame_ts);
 FUNC_1(!VAR_8 && VAR_4->golden_frame_ts);
 if (!VAR_8)
  VAR_8 = FUNC_4(&VAR_7->vb2_buf, 0);
 if (VAR_4->flags & VAR_2)
  VAR_8 |= VAR_0;
 FUNC_5(VAR_6, VAR_8, FUNC_0(4));

 VAR_8 = FUNC_3(VAR_5, VAR_4->alt_frame_ts);
 FUNC_1(!VAR_8 && VAR_4->alt_frame_ts);
 if (!VAR_8)
  VAR_8 = FUNC_4(&VAR_7->vb2_buf, 0);
 if (VAR_4->flags & VAR_1)
  VAR_8 |= VAR_0;
 FUNC_5(VAR_6, VAR_8, FUNC_0(5));
}
