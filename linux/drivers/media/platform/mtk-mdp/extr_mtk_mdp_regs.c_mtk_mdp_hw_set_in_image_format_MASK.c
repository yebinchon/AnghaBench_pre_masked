
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtk_mdp_frame {int * payload; TYPE_3__* fmt; } ;
struct TYPE_5__ {TYPE_1__* vsi; } ;
struct mtk_mdp_ctx {TYPE_2__ vpu; struct mtk_mdp_frame s_frame; } ;
struct mdp_config {scalar_t__ h_stride; scalar_t__ w_stride; int format; } ;
struct mdp_buffer {unsigned int plane_num; int * plane_size; } ;
struct TYPE_6__ {unsigned int num_comp; int pixelformat; } ;
struct TYPE_4__ {struct mdp_buffer src_buffer; struct mdp_config src_config; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct mtk_mdp_ctx *VAR_0)
{
 unsigned int VAR_1;
 struct mtk_mdp_frame *VAR_2 = &VAR_0->s_frame;
 struct mdp_config *VAR_3 = &VAR_0->vpu.vsi->src_config;
 struct mdp_buffer *VAR_4 = &VAR_0->vpu.vsi->src_buffer;

 VAR_4->plane_num = VAR_2->fmt->num_comp;
 VAR_3->format = FUNC_0(VAR_2->fmt->pixelformat);
 VAR_3->w_stride = 0;
 VAR_3->h_stride = 0;

 for (VAR_1 = 0; VAR_1 < VAR_4->plane_num; VAR_1++)
  VAR_4->plane_size[VAR_1] = VAR_2->payload[VAR_1];
}
