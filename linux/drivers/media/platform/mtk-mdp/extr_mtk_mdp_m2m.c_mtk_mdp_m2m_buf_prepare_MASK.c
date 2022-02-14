
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {TYPE_2__* vb2_queue; } ;
struct mtk_mdp_frame {int * payload; TYPE_1__* fmt; } ;
struct mtk_mdp_ctx {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int num_planes; } ;


 int FUNC_0 (int ) ;
 struct mtk_mdp_frame* FUNC_1 (struct mtk_mdp_ctx*,int ) ;
 struct mtk_mdp_ctx* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct vb2_buffer*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_0)
{
 struct mtk_mdp_ctx *VAR_1 = FUNC_2(VAR_0->vb2_queue);
 struct mtk_mdp_frame *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1, VAR_0->vb2_queue->type);

 if (!FUNC_0(VAR_0->vb2_queue->type)) {
  for (VAR_3 = 0; VAR_3 < VAR_2->fmt->num_planes; VAR_3++)
   FUNC_3(VAR_0, VAR_3, VAR_2->payload[VAR_3]);
 }

 return 0;
}
