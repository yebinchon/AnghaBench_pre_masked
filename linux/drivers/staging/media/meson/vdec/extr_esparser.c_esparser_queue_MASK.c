
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vb2_buffer {int timestamp; } ;
struct vb2_v4l2_buffer {int field; scalar_t__ flags; struct vb2_buffer vb2_buf; } ;
struct amvdec_session {int esparser_queued_bufs; scalar_t__ keyframe_found; int m2m_ctx; TYPE_1__* fmt_out; struct amvdec_core* core; } ;
struct amvdec_core {int dev; } ;
struct amvdec_codec_ops {scalar_t__ (* num_pending_bufs ) (struct amvdec_session*) ;} ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct amvdec_codec_ops* codec_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amvdec_session*,int ,scalar_t__) ;
 int FUNC_1 (struct amvdec_session*,int ) ;
 int FUNC_2 (struct amvdec_core*,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (struct amvdec_session*) ;
 scalar_t__ FUNC_8 (struct vb2_buffer*) ;
 scalar_t__ FUNC_9 (struct amvdec_session*) ;
 int FUNC_10 (struct amvdec_core*,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (struct amvdec_session*) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (struct vb2_v4l2_buffer*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,struct vb2_v4l2_buffer*) ;
 int FUNC_16 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_17 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int
FUNC_18(struct amvdec_session *VAR_5, struct vb2_v4l2_buffer *VAR_6)
{
 int VAR_7;
 struct vb2_buffer *VAR_8 = &VAR_6->vb2_buf;
 struct amvdec_core *VAR_9 = VAR_5->core;
 struct amvdec_codec_ops *VAR_10 = VAR_5->fmt_out->codec_ops;
 u32 VAR_11 = 0;
 u32 VAR_12 = FUNC_17(VAR_8, 0);
 dma_addr_t VAR_13 = FUNC_16(VAR_8, 0);
 u32 VAR_14;
 u32 VAR_15;

 if (VAR_10->num_pending_bufs)
  VAR_11 = VAR_10->num_pending_bufs(VAR_5);

 VAR_11 += FUNC_14(VAR_5->m2m_ctx);

 if (FUNC_9(VAR_5) < VAR_12 ||
     FUNC_4(&VAR_5->esparser_queued_bufs) >= VAR_11)
  return -VAR_0;

 FUNC_15(VAR_5->m2m_ctx, VAR_6);

 VAR_14 = FUNC_7(VAR_5);

 FUNC_0(VAR_5, VAR_8->timestamp, VAR_14);
 FUNC_5(VAR_9->dev, "esparser: ts = %llu pld_size = %u offset = %08X\n",
  VAR_8->timestamp, VAR_12, VAR_14);

 VAR_15 = FUNC_8(VAR_8);
 VAR_7 = FUNC_10(VAR_9, VAR_13, VAR_12 + VAR_15);

 if (VAR_7 <= 0) {
  FUNC_6(VAR_9->dev, "esparser: input parsing error\n");
  FUNC_1(VAR_5, VAR_8->timestamp);
  FUNC_13(VAR_6, VAR_4);
  FUNC_2(VAR_9, VAR_1, 0);

  return 0;
 }




 if (!VAR_5->keyframe_found)
  FUNC_12(1000, 2000);

 if (VAR_5->keyframe_found)
  FUNC_3(&VAR_5->esparser_queued_bufs);
 else
  FUNC_1(VAR_5, VAR_8->timestamp);

 VAR_6->flags = 0;
 VAR_6->field = VAR_2;
 FUNC_13(VAR_6, VAR_3);

 return 0;
}
