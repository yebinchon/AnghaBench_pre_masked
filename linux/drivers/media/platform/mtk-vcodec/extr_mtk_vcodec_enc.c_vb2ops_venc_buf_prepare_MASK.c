
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {TYPE_2__* vb2_queue; } ;
struct mtk_vcodec_ctx {int dummy; } ;
struct mtk_q_data {scalar_t__* sizeimage; TYPE_1__* fmt; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int num_planes; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,scalar_t__,scalar_t__) ;
 struct mtk_q_data* FUNC_1 (struct mtk_vcodec_ctx*,int ) ;
 struct mtk_vcodec_ctx* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct vb2_buffer*,int) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct mtk_vcodec_ctx *VAR_2 = FUNC_2(VAR_1->vb2_queue);
 struct mtk_q_data *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_1->vb2_queue->type);

 for (VAR_4 = 0; VAR_4 < VAR_3->fmt->num_planes; VAR_4++) {
  if (FUNC_3(VAR_1, VAR_4) < VAR_3->sizeimage[VAR_4]) {
   FUNC_0("data will not fit into plane %d (%lu < %d)",
    VAR_4, FUNC_3(VAR_1, VAR_4),
    VAR_3->sizeimage[VAR_4]);
   return -VAR_0;
  }
 }

 return 0;
}
