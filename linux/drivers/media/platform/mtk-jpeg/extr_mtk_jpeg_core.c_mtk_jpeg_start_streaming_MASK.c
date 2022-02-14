
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int type; } ;
struct mtk_jpeg_ctx {TYPE_1__* jpeg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct mtk_jpeg_ctx*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vb2_v4l2_buffer*,int ) ;
 struct mtk_jpeg_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_1, unsigned int VAR_2)
{
 struct mtk_jpeg_ctx *VAR_3 = FUNC_3(VAR_1);
 struct vb2_v4l2_buffer *VAR_4;
 int VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_3->jpeg->dev);
 if (VAR_5 < 0)
  goto err;

 return 0;
err:
 while ((VAR_4 = FUNC_0(VAR_3, VAR_1->type)))
  FUNC_2(VAR_4, VAR_0);
 return VAR_5;
}
