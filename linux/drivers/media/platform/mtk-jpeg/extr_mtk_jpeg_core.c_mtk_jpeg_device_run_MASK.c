
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_planes; } ;
struct vb2_v4l2_buffer {TYPE_2__ vb2_buf; } ;
struct mtk_jpeg_src_buf {int flags; int dec_param; } ;
struct mtk_jpeg_fb {int dummy; } ;
struct mtk_jpeg_dev {int m2m_dev; int hw_lock; int dec_reg_base; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct mtk_jpeg_ctx {TYPE_1__ fh; int state; struct mtk_jpeg_dev* jpeg; } ;
struct mtk_jpeg_bs {int dummy; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mtk_jpeg_ctx*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,struct mtk_jpeg_bs*,struct mtk_jpeg_fb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mtk_jpeg_ctx*) ;
 scalar_t__ FUNC_5 (struct mtk_jpeg_ctx*,int *,TYPE_2__*,struct mtk_jpeg_fb*) ;
 int FUNC_6 (struct mtk_jpeg_ctx*,TYPE_2__*,struct mtk_jpeg_bs*) ;
 struct mtk_jpeg_src_buf* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct vb2_v4l2_buffer*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_13 (int ) ;
 struct vb2_v4l2_buffer* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void FUNC_17(void *VAR_4)
{
 struct mtk_jpeg_ctx *VAR_5 = VAR_4;
 struct mtk_jpeg_dev *VAR_6 = VAR_5->jpeg;
 struct vb2_v4l2_buffer *VAR_7, *VAR_8;
 enum vb2_buffer_state VAR_9 = VAR_3;
 unsigned long VAR_10;
 struct mtk_jpeg_src_buf *VAR_11;
 struct mtk_jpeg_bs VAR_12;
 struct mtk_jpeg_fb VAR_13;
 int VAR_14;

 VAR_7 = FUNC_14(VAR_5->fh.m2m_ctx);
 VAR_8 = FUNC_13(VAR_5->fh.m2m_ctx);
 VAR_11 = FUNC_7(&VAR_7->vb2_buf);

 if (VAR_11->flags & VAR_0) {
  for (VAR_14 = 0; VAR_14 < VAR_8->vb2_buf.num_planes; VAR_14++)
   FUNC_16(&VAR_8->vb2_buf, VAR_14, 0);
  VAR_9 = VAR_2;
  goto dec_end;
 }

 if (FUNC_0(VAR_5, &VAR_11->dec_param)) {
  FUNC_4(VAR_5);
  VAR_5->state = VAR_1;
  FUNC_12(VAR_6->m2m_dev, VAR_5->fh.m2m_ctx);
  return;
 }

 FUNC_6(VAR_5, &VAR_7->vb2_buf, &VAR_12);
 if (FUNC_5(VAR_5, &VAR_11->dec_param, &VAR_8->vb2_buf, &VAR_13))
  goto dec_end;

 FUNC_8(&VAR_6->hw_lock, VAR_10);
 FUNC_1(VAR_6->dec_reg_base);
 FUNC_2(VAR_6->dec_reg_base,
    &VAR_11->dec_param, &VAR_12, &VAR_13);

 FUNC_3(VAR_6->dec_reg_base);
 FUNC_9(&VAR_6->hw_lock, VAR_10);
 return;

dec_end:
 FUNC_15(VAR_5->fh.m2m_ctx);
 FUNC_11(VAR_5->fh.m2m_ctx);
 FUNC_10(VAR_7, VAR_9);
 FUNC_10(VAR_8, VAR_9);
 FUNC_12(VAR_6->m2m_dev, VAR_5->fh.m2m_ctx);
}
