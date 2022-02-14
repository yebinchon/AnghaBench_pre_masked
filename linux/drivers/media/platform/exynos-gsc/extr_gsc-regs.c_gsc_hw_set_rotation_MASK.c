
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct gsc_dev {scalar_t__ regs; } ;
struct TYPE_8__ {TYPE_3__* vflip; TYPE_2__* hflip; TYPE_1__* rotate; } ;
struct gsc_ctx {TYPE_4__ gsc_ctrls; struct gsc_dev* gsc_dev; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_5__ {int val; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct gsc_ctx *VAR_9)
{
 struct gsc_dev *VAR_10 = VAR_9->gsc_dev;
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_10->regs + VAR_0);
 VAR_11 &= ~VAR_6;

 switch (VAR_9->gsc_ctrls.rotate->val) {
 case 270:
  VAR_11 |= VAR_2;
  break;
 case 180:
  VAR_11 |= VAR_1;
  break;
 case 90:
  if (VAR_9->gsc_ctrls.hflip->val)
   VAR_11 |= VAR_4;
  else if (VAR_9->gsc_ctrls.vflip->val)
   VAR_11 |= VAR_5;
  else
   VAR_11 |= VAR_3;
  break;
 case 0:
  if (VAR_9->gsc_ctrls.hflip->val)
   VAR_11 |= VAR_7;
  else if (VAR_9->gsc_ctrls.vflip->val)
   VAR_11 |= VAR_8;
 }

 FUNC_1(VAR_11, VAR_10->regs + VAR_0);
}
