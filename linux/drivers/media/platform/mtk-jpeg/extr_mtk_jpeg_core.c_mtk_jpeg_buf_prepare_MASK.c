
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {TYPE_2__* vb2_queue; } ;
struct mtk_jpeg_q_data {int * sizeimage; TYPE_1__* fmt; } ;
struct mtk_jpeg_ctx {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int colplanes; } ;


 int VAR_0 ;
 struct mtk_jpeg_q_data* FUNC_0 (struct mtk_jpeg_ctx*,int ) ;
 struct mtk_jpeg_ctx* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct vb2_buffer*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct vb2_buffer *VAR_1)
{
 struct mtk_jpeg_ctx *VAR_2 = FUNC_1(VAR_1->vb2_queue);
 struct mtk_jpeg_q_data *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_1->vb2_queue->type);
 if (!VAR_3)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->fmt->colplanes; VAR_4++)
  FUNC_2(VAR_1, VAR_4, VAR_3->sizeimage[VAR_4]);

 return 0;
}
