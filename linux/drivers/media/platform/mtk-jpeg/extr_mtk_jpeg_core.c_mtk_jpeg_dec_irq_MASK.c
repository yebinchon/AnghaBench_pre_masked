
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int num_planes; } ;
struct vb2_v4l2_buffer {TYPE_3__ vb2_buf; } ;
struct TYPE_5__ {int * comp_size; } ;
struct mtk_jpeg_src_buf {TYPE_1__ dec_param; } ;
struct mtk_jpeg_dev {int m2m_dev; int dev; int dec_reg_base; int v4l2_dev; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct mtk_jpeg_ctx {TYPE_2__ fh; } ;
typedef int irqreturn_t ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mtk_jpeg_src_buf* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_7 (int ) ;
 struct mtk_jpeg_ctx* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_5, void *VAR_6)
{
 struct mtk_jpeg_dev *VAR_7 = VAR_6;
 struct mtk_jpeg_ctx *VAR_8;
 struct vb2_v4l2_buffer *VAR_9, *VAR_10;
 struct mtk_jpeg_src_buf *VAR_11;
 enum vb2_buffer_state VAR_12 = VAR_4;
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(VAR_7->dec_reg_base);
 VAR_13 = FUNC_1(VAR_14);
 VAR_8 = FUNC_8(VAR_7->m2m_dev);
 if (!VAR_8) {
  FUNC_5(&VAR_7->v4l2_dev, "Context is NULL\n");
  return VAR_0;
 }

 VAR_9 = FUNC_10(VAR_8->fh.m2m_ctx);
 VAR_10 = FUNC_7(VAR_8->fh.m2m_ctx);
 VAR_11 = FUNC_4(&VAR_9->vb2_buf);

 if (VAR_13 >= VAR_2)
  FUNC_3(VAR_7->dec_reg_base);

 if (VAR_13 != VAR_1) {
  FUNC_0(VAR_7->dev, "decode failed\n");
  goto dec_end;
 }

 for (VAR_15 = 0; VAR_15 < VAR_10->vb2_buf.num_planes; VAR_15++)
  FUNC_11(&VAR_10->vb2_buf, VAR_15,
          VAR_11->dec_param.comp_size[VAR_15]);

 VAR_12 = VAR_3;

dec_end:
 FUNC_6(VAR_9, VAR_12);
 FUNC_6(VAR_10, VAR_12);
 FUNC_9(VAR_7->m2m_dev, VAR_8->fh.m2m_ctx);
 return VAR_0;
}
