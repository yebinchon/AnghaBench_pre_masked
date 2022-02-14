
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_ctrl_vp8_frame_header {int flags; scalar_t__ alt_frame_ts; scalar_t__ golden_frame_ts; scalar_t__ last_frame_ts; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct hantro_ctx {TYPE_1__ fh; struct hantro_dev* dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct hantro_ctx*) ;
 int FUNC_3 (struct vb2_queue*,scalar_t__) ;
 struct vb2_queue* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct hantro_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct hantro_ctx *VAR_6,
      const struct v4l2_ctrl_vp8_frame_header *VAR_7)
{
 struct hantro_dev *VAR_8 = VAR_6->dev;
 struct vb2_v4l2_buffer *VAR_9;
 struct vb2_queue *VAR_10;
 dma_addr_t VAR_11;

 VAR_10 = FUNC_4(VAR_6->fh.m2m_ctx, VAR_0);
 VAR_9 = FUNC_2(VAR_6);

 VAR_11 = FUNC_3(VAR_10, VAR_7->last_frame_ts);
 if (!VAR_11)
  VAR_11 = FUNC_5(&VAR_9->vb2_buf, 0);
 FUNC_6(VAR_8, VAR_11, VAR_3);

 VAR_11 = FUNC_3(VAR_10, VAR_7->golden_frame_ts);
 FUNC_1(!VAR_11 && VAR_7->golden_frame_ts);
 if (!VAR_11)
  VAR_11 = FUNC_5(&VAR_9->vb2_buf, 0);
 if (VAR_7->flags & VAR_2)
  VAR_11 |= VAR_5;
 FUNC_6(VAR_8, VAR_11, FUNC_0(2));

 VAR_11 = FUNC_3(VAR_10, VAR_7->alt_frame_ts);
 FUNC_1(!VAR_11 && VAR_7->alt_frame_ts);
 if (!VAR_11)
  VAR_11 = FUNC_5(&VAR_9->vb2_buf, 0);
 if (VAR_7->flags & VAR_1)
  VAR_11 |= VAR_4;
 FUNC_6(VAR_8, VAR_11, FUNC_0(3));
}
