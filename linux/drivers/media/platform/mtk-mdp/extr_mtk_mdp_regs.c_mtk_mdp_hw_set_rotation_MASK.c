
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* vflip; TYPE_6__* hflip; TYPE_4__* rotate; } ;
struct TYPE_9__ {TYPE_2__* vsi; } ;
struct mtk_mdp_ctx {TYPE_5__ ctrls; TYPE_3__ vpu; } ;
struct mdp_config_misc {int vflip; int hflip; int orientation; } ;
struct TYPE_12__ {int val; } ;
struct TYPE_10__ {int val; } ;
struct TYPE_8__ {struct mdp_config_misc misc; } ;
struct TYPE_7__ {int val; } ;



void FUNC_0(struct mtk_mdp_ctx *VAR_0)
{
 struct mdp_config_misc *VAR_1 = &VAR_0->vpu.vsi->misc;

 VAR_1->orientation = VAR_0->ctrls.rotate->val;
 VAR_1->hflip = VAR_0->ctrls.hflip->val;
 VAR_1->vflip = VAR_0->ctrls.vflip->val;
}
