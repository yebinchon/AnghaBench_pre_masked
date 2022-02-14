
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_mdp_frame {int width; int height; int* payload; void* fmt; } ;
struct mtk_mdp_dev {TYPE_2__* variant; } ;
struct mtk_mdp_ctx {struct mtk_mdp_dev* mdp_dev; } ;
struct TYPE_4__ {TYPE_1__* pix_min; } ;
struct TYPE_3__ {int org_w; int org_h; int target_rot_dis_w; int target_rot_dis_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_mdp_frame* FUNC_0 (struct mtk_mdp_ctx*,int ) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_mdp_ctx *VAR_2)
{
 struct mtk_mdp_dev *VAR_3 = VAR_2->mdp_dev;
 struct mtk_mdp_frame *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_4->fmt = FUNC_1(0,
     VAR_1);
 VAR_4->width = VAR_3->variant->pix_min->org_w;
 VAR_4->height = VAR_3->variant->pix_min->org_h;
 VAR_4->payload[0] = VAR_4->width * VAR_4->height;
 VAR_4->payload[1] = VAR_4->payload[0] / 2;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_4->fmt = FUNC_1(0,
     VAR_0);
 VAR_4->width = VAR_3->variant->pix_min->target_rot_dis_w;
 VAR_4->height = VAR_3->variant->pix_min->target_rot_dis_h;
 VAR_4->payload[0] = VAR_4->width * VAR_4->height;
 VAR_4->payload[1] = VAR_4->payload[0] / 2;

}
