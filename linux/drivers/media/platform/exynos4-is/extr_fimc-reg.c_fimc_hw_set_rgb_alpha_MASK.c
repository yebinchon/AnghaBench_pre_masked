
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fimc_frame {int alpha; TYPE_1__* fmt; } ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {struct fimc_frame d_frame; struct fimc_dev* fimc_dev; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct fimc_ctx *VAR_3)
{
 struct fimc_dev *VAR_4 = VAR_3->fimc_dev;
 struct fimc_frame *VAR_5 = &VAR_3->d_frame;
 u32 VAR_6;

 if (!(VAR_5->fmt->flags & VAR_2))
  return;

 VAR_6 = FUNC_0(VAR_4->regs + VAR_0);
 VAR_6 &= ~VAR_1;
 VAR_6 |= (VAR_5->alpha << 4);
 FUNC_1(VAR_6, VAR_4->regs + VAR_0);
}
