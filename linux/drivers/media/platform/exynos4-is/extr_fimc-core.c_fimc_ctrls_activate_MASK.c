
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


struct TYPE_10__ {int type; } ;
struct TYPE_11__ {int lock; } ;
struct fimc_ctrls {TYPE_5__ handler; TYPE_6__* vflip; TYPE_6__* hflip; TYPE_6__* rotate; TYPE_6__* colorfx; TYPE_6__* alpha; int ready; } ;
struct TYPE_8__ {TYPE_1__* fmt; } ;
struct fimc_ctx {int vflip; int hflip; int rotation; TYPE_4__ effect; struct fimc_ctrls ctrls; TYPE_2__ d_frame; } ;
struct TYPE_9__ {int val; } ;
struct TYPE_12__ {int val; TYPE_3__ cur; } ;
struct TYPE_7__ {unsigned int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct fimc_ctx*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*,int) ;

void FUNC_4(struct fimc_ctx *VAR_2, bool VAR_3)
{
 unsigned int VAR_4 = VAR_2->d_frame.fmt->flags & VAR_1;
 struct fimc_ctrls *VAR_5 = &VAR_2->ctrls;

 if (!VAR_5->ready)
  return;

 FUNC_1(VAR_5->handler.lock);
 FUNC_3(VAR_5->rotate, VAR_3);
 FUNC_3(VAR_5->hflip, VAR_3);
 FUNC_3(VAR_5->vflip, VAR_3);
 FUNC_3(VAR_5->colorfx, VAR_3);
 if (VAR_5->alpha)
  FUNC_3(VAR_5->alpha, VAR_3 && VAR_4);

 if (VAR_3) {
  FUNC_0(VAR_2, VAR_5->colorfx->cur.val);
  VAR_2->rotation = VAR_5->rotate->val;
  VAR_2->hflip = VAR_5->hflip->val;
  VAR_2->vflip = VAR_5->vflip->val;
 } else {
  VAR_2->effect.type = VAR_0;
  VAR_2->rotation = 0;
  VAR_2->hflip = 0;
  VAR_2->vflip = 0;
 }
 FUNC_2(VAR_5->handler.lock);
}
