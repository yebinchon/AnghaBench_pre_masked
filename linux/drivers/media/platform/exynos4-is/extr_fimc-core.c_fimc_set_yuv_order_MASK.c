
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* fmt; } ;
struct TYPE_6__ {TYPE_1__* fmt; } ;
struct fimc_ctx {int out_order_1p; TYPE_4__ d_frame; int in_order_1p; TYPE_2__ s_frame; void* out_order_2p; void* in_order_2p; } ;
struct TYPE_7__ {int color; } ;
struct TYPE_5__ {int color; } ;






 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ) ;

void FUNC_1(struct fimc_ctx *VAR_9)
{

 VAR_9->in_order_2p = VAR_0;
 VAR_9->out_order_2p = VAR_0;


 switch (VAR_9->s_frame.fmt->color) {
 case 128:
  VAR_9->in_order_1p = VAR_8;
  break;
 case 131:
  VAR_9->in_order_1p = VAR_5;
  break;
 case 130:
  VAR_9->in_order_1p = VAR_6;
  break;
 case 129:
 default:
  VAR_9->in_order_1p = VAR_7;
  break;
 }
 FUNC_0("ctx->in_order_1p= %d", VAR_9->in_order_1p);

 switch (VAR_9->d_frame.fmt->color) {
 case 128:
  VAR_9->out_order_1p = VAR_4;
  break;
 case 131:
  VAR_9->out_order_1p = VAR_1;
  break;
 case 130:
  VAR_9->out_order_1p = VAR_2;
  break;
 case 129:
 default:
  VAR_9->out_order_1p = VAR_3;
  break;
 }
 FUNC_0("ctx->out_order_1p= %d", VAR_9->out_order_1p);
}
