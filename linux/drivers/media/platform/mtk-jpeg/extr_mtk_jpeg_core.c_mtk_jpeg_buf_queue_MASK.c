
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vb2_queue {int dummy; } ;
struct vb2_buffer {TYPE_2__* vb2_queue; int index; } ;
struct mtk_jpeg_dec_param {int dummy; } ;
struct mtk_jpeg_src_buf {int flags; struct mtk_jpeg_dec_param dec_param; } ;
struct mtk_jpeg_dev {int v4l2_dev; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct mtk_jpeg_ctx {scalar_t__ state; TYPE_1__ fh; struct mtk_jpeg_dev* jpeg; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mtk_jpeg_dec_param*,int ,int) ;
 int FUNC_1 (struct mtk_jpeg_dec_param*,int *,int ) ;
 int FUNC_2 (struct mtk_jpeg_ctx*) ;
 int FUNC_3 (struct mtk_jpeg_ctx*,struct mtk_jpeg_dec_param*) ;
 struct mtk_jpeg_src_buf* FUNC_4 (struct vb2_buffer*) ;
 int FUNC_5 (struct vb2_buffer*) ;
 int FUNC_6 (int,int ,int *,char*,...) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ,int ) ;
 struct vb2_queue* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct vb2_buffer*,int ) ;
 struct mtk_jpeg_ctx* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_13 (struct vb2_queue*) ;
 scalar_t__ FUNC_14 (struct vb2_buffer*,int ) ;

__attribute__((used)) static void FUNC_15(struct vb2_buffer *VAR_8)
{
 struct mtk_jpeg_ctx *VAR_9 = FUNC_11(VAR_8->vb2_queue);
 struct mtk_jpeg_dec_param *VAR_10;
 struct mtk_jpeg_dev *VAR_11 = VAR_9->jpeg;
 struct mtk_jpeg_src_buf *VAR_12;
 bool VAR_13;

 FUNC_6(2, VAR_7, &VAR_11->v4l2_dev, "(%d) buf_q id=%d, vb=%p\n",
   VAR_8->vb2_queue->type, VAR_8->index, VAR_8);

 if (VAR_8->vb2_queue->type != VAR_5)
  goto end;

 VAR_12 = FUNC_4(VAR_8);
 VAR_10 = &VAR_12->dec_param;
 FUNC_0(VAR_10, 0, sizeof(*VAR_10));

 if (VAR_12->flags & VAR_0) {
  FUNC_6(1, VAR_7, &VAR_11->v4l2_dev, "Got eos\n");
  goto end;
 }
 VAR_13 = FUNC_1(VAR_10, (u8 *)FUNC_14(VAR_8, 0),
          FUNC_12(VAR_8, 0));
 if (!VAR_13) {
  FUNC_7(&VAR_11->v4l2_dev, "Header invalid.\n");
  FUNC_10(VAR_8, VAR_6);
  return;
 }

 if (VAR_9->state == VAR_1) {
  struct vb2_queue *VAR_14 = FUNC_9(
   VAR_9->fh.m2m_ctx, VAR_4);

  FUNC_2(VAR_9);
  FUNC_3(VAR_9, VAR_10);
  VAR_9->state = FUNC_13(VAR_14) ?
    VAR_3 : VAR_2;
 }
end:
 FUNC_8(VAR_9->fh.m2m_ctx, FUNC_5(VAR_8));
}
