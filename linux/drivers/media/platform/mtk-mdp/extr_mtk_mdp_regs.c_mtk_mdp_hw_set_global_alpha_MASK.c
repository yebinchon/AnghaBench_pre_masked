
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* global_alpha; } ;
struct TYPE_6__ {TYPE_1__* vsi; } ;
struct mtk_mdp_ctx {TYPE_4__ ctrls; TYPE_2__ vpu; } ;
struct mdp_config_misc {int alpha; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_5__ {struct mdp_config_misc misc; } ;



void FUNC_0(struct mtk_mdp_ctx *VAR_0)
{
 struct mdp_config_misc *VAR_1 = &VAR_0->vpu.vsi->misc;

 VAR_1->alpha = VAR_0->ctrls.global_alpha->val;
}
