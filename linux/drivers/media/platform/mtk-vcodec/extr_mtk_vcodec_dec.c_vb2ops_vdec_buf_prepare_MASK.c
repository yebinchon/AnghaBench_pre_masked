
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {TYPE_2__* vb2_queue; int index; } ;
struct mtk_vcodec_ctx {int id; } ;
struct mtk_q_data {scalar_t__* sizeimage; TYPE_1__* fmt; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int num_planes; } ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (char*,int,scalar_t__,scalar_t__) ;
 struct mtk_q_data* FUNC_2 (struct mtk_vcodec_ctx*,int ) ;
 struct mtk_vcodec_ctx* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct vb2_buffer*,int) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_0)
{
 struct mtk_vcodec_ctx *VAR_1 = FUNC_3(VAR_0->vb2_queue);
 struct mtk_q_data *VAR_2;
 int VAR_3;

 FUNC_0(3, "[%d] (%d) id=%d",
   VAR_1->id, VAR_0->vb2_queue->type, VAR_0->index);

 VAR_2 = FUNC_2(VAR_1, VAR_0->vb2_queue->type);

 for (VAR_3 = 0; VAR_3 < VAR_2->fmt->num_planes; VAR_3++) {
  if (FUNC_4(VAR_0, VAR_3) < VAR_2->sizeimage[VAR_3]) {
   FUNC_1("data will not fit into plane %d (%lu < %d)",
    VAR_3, FUNC_4(VAR_0, VAR_3),
    VAR_2->sizeimage[VAR_3]);
  }
 }

 return 0;
}
