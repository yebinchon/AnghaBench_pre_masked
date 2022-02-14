
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; int top; int left; } ;
struct mtk_mdp_frame {int height; int width; TYPE_3__ crop; } ;
struct TYPE_5__ {TYPE_1__* vsi; } ;
struct mtk_mdp_ctx {TYPE_2__ vpu; struct mtk_mdp_frame s_frame; } ;
struct mdp_config {int h; int w; scalar_t__ y; scalar_t__ x; int crop_h; int crop_w; int crop_y; int crop_x; } ;
struct TYPE_4__ {struct mdp_config src_config; } ;



void FUNC_0(struct mtk_mdp_ctx *VAR_0)
{
 struct mtk_mdp_frame *VAR_1 = &VAR_0->s_frame;
 struct mdp_config *VAR_2 = &VAR_0->vpu.vsi->src_config;


 VAR_2->crop_x = VAR_1->crop.left;
 VAR_2->crop_y = VAR_1->crop.top;


 VAR_2->crop_w = VAR_1->crop.width;
 VAR_2->crop_h = VAR_1->crop.height;


 VAR_2->x = 0;
 VAR_2->y = 0;
 VAR_2->w = VAR_1->width;
 VAR_2->h = VAR_1->height;
}
