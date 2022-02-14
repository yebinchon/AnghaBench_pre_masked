
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct vb2_queue {int type; } ;
struct mtk_jpeg_src_buf {int dec_param; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct mtk_jpeg_ctx {scalar_t__ state; TYPE_2__* jpeg; TYPE_1__ fh; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 struct vb2_v4l2_buffer* FUNC_1 (struct mtk_jpeg_ctx*,int ) ;
 int FUNC_2 (struct mtk_jpeg_ctx*,int *) ;
 struct mtk_jpeg_src_buf* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;
 struct mtk_jpeg_ctx* FUNC_7 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_8(struct vb2_queue *VAR_4)
{
 struct mtk_jpeg_ctx *VAR_5 = FUNC_7(VAR_4);
 struct vb2_v4l2_buffer *VAR_6;






 if (VAR_5->state == VAR_2 &&
     !FUNC_0(VAR_4->type)) {
  struct mtk_jpeg_src_buf *VAR_7;

  VAR_6 = FUNC_6(VAR_5->fh.m2m_ctx);
  VAR_7 = FUNC_3(&VAR_6->vb2_buf);
  FUNC_2(VAR_5, &VAR_7->dec_param);
  VAR_5->state = VAR_1;
 } else if (FUNC_0(VAR_4->type)) {
  VAR_5->state = VAR_0;
 }

 while ((VAR_6 = FUNC_1(VAR_5, VAR_4->type)))
  FUNC_5(VAR_6, VAR_3);

 FUNC_4(VAR_5->jpeg->dev);
}
