
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {scalar_t__ type; } ;
struct TYPE_4__ {int numerator; int denominator; } ;
struct amvdec_session {int streamon_out; int streamon_cap; scalar_t__ status; int m2m_ctx; int vififo_paddr; int vififo_vaddr; int vififo_size; struct amvdec_core* core; int recycle_thread; scalar_t__ sequence_cap; int ctrl_min_buf_capture; int esparser_queued_bufs; TYPE_2__ pixelaspect; scalar_t__ wrap_count; scalar_t__ last_offset; scalar_t__ keyframe_found; scalar_t__ should_stop; TYPE_1__* fmt_out; } ;
struct amvdec_core {int dev; struct amvdec_session* cur_sess; } ;
struct amvdec_codec_ops {int (* resume ) (struct amvdec_session*) ;} ;
struct TYPE_3__ {struct amvdec_codec_ops* codec_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,struct amvdec_session*,char*) ;
 int FUNC_5 (struct amvdec_session*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_8 (int ) ;
 struct vb2_v4l2_buffer* FUNC_9 (int ) ;
 struct amvdec_session* FUNC_10 (struct vb2_queue*) ;
 scalar_t__ FUNC_11 (struct amvdec_session*) ;
 int FUNC_12 (struct amvdec_session*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(struct vb2_queue *VAR_10, unsigned int VAR_11)
{
 struct amvdec_session *VAR_12 = FUNC_10(VAR_10);
 struct amvdec_codec_ops *VAR_13 = VAR_12->fmt_out->codec_ops;
 struct amvdec_core *VAR_14 = VAR_12->core;
 struct vb2_v4l2_buffer *VAR_15;
 int VAR_16;

 if (VAR_14->cur_sess && VAR_14->cur_sess != VAR_12) {
  VAR_16 = -VAR_0;
  goto bufs_done;
 }

 if (VAR_10->type == VAR_7)
  VAR_12->streamon_out = 1;
 else
  VAR_12->streamon_cap = 1;

 if (!VAR_12->streamon_out || !VAR_12->streamon_cap)
  return 0;

 if (VAR_12->status == VAR_4 &&
     VAR_10->type == VAR_6) {
  VAR_13->resume(VAR_12);
  VAR_12->status = VAR_5;
  return 0;
 }

 VAR_12->vififo_size = VAR_3;
 VAR_12->vififo_vaddr =
  FUNC_2(VAR_12->core->dev, VAR_12->vififo_size,
       &VAR_12->vififo_paddr, VAR_2);
 if (!VAR_12->vififo_vaddr) {
  FUNC_1(VAR_12->core->dev, "Failed to request VIFIFO buffer\n");
  VAR_16 = -VAR_1;
  goto bufs_done;
 }

 VAR_12->should_stop = 0;
 VAR_12->keyframe_found = 0;
 VAR_12->last_offset = 0;
 VAR_12->wrap_count = 0;
 VAR_12->pixelaspect.numerator = 1;
 VAR_12->pixelaspect.denominator = 1;
 FUNC_0(&VAR_12->esparser_queued_bufs, 0);
 FUNC_6(VAR_12->ctrl_min_buf_capture, 1);

 VAR_16 = FUNC_12(VAR_12);
 if (VAR_16)
  goto vififo_free;

 VAR_12->sequence_cap = 0;
 if (FUNC_11(VAR_12))
  VAR_12->recycle_thread = FUNC_4(VAR_9, VAR_12,
         "vdec_recycle");

 VAR_12->status = VAR_5;
 VAR_14->cur_sess = VAR_12;

 return 0;

vififo_free:
 FUNC_3(VAR_12->core->dev, VAR_12->vififo_size,
     VAR_12->vififo_vaddr, VAR_12->vififo_paddr);
bufs_done:
 while ((VAR_15 = FUNC_9(VAR_12->m2m_ctx)))
  FUNC_7(VAR_15, VAR_8);
 while ((VAR_15 = FUNC_8(VAR_12->m2m_ctx)))
  FUNC_7(VAR_15, VAR_8);

 if (VAR_10->type == VAR_7)
  VAR_12->streamon_out = 0;
 else
  VAR_12->streamon_cap = 0;

 return VAR_16;
}
