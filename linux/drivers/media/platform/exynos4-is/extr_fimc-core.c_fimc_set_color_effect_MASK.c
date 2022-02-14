
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fimc_effect {int pat_cb; int pat_cr; void* type; } ;
struct TYPE_4__ {TYPE_1__* colorfx_cbcr; } ;
struct fimc_ctx {TYPE_2__ ctrls; struct fimc_effect effect; } ;
typedef enum v4l2_colorfx { ____Placeholder_v4l2_colorfx } v4l2_colorfx ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
__attribute__((used)) static int FUNC_0(struct fimc_ctx *VAR_7, enum v4l2_colorfx VAR_8)
{
 struct fimc_effect *VAR_9 = &VAR_7->effect;

 switch (VAR_8) {
 case 131:
  VAR_9->type = VAR_3;
  break;
 case 134:
  VAR_9->type = VAR_1;
  VAR_9->pat_cb = 128;
  VAR_9->pat_cr = 128;
  break;
 case 130:
  VAR_9->type = VAR_1;
  VAR_9->pat_cb = 115;
  VAR_9->pat_cr = 145;
  break;
 case 132:
  VAR_9->type = VAR_5;
  break;
 case 133:
  VAR_9->type = VAR_4;
  break;
 case 135:
  VAR_9->type = VAR_2;
  break;
 case 128:
  VAR_9->type = VAR_6;
  break;
 case 129:
  VAR_9->type = VAR_1;
  VAR_9->pat_cb = VAR_7->ctrls.colorfx_cbcr->val >> 8;
  VAR_9->pat_cr = VAR_7->ctrls.colorfx_cbcr->val & 0xff;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
