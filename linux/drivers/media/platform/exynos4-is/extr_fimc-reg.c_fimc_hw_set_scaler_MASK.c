
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fimc_scaler {scalar_t__ copy_mode; scalar_t__ scaleup_v; scalar_t__ scaleup_h; int enabled; } ;
struct fimc_frame {TYPE_1__* fmt; } ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {int flags; scalar_t__ in_path; scalar_t__ out_path; struct fimc_frame d_frame; struct fimc_frame s_frame; struct fimc_scaler scaler; struct fimc_dev* fimc_dev; } ;
struct TYPE_2__ {int color; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fimc_ctx *VAR_21)
{
 struct fimc_dev *VAR_22 = VAR_21->fimc_dev;
 struct fimc_scaler *VAR_23 = &VAR_21->scaler;
 struct fimc_frame *VAR_24 = &VAR_21->s_frame;
 struct fimc_frame *VAR_25 = &VAR_21->d_frame;

 u32 VAR_26 = FUNC_0(VAR_22->regs + VAR_3);

 VAR_26 &= ~(VAR_4 | VAR_5 |
   VAR_18 | VAR_19 |
   VAR_17 | VAR_11 |
   VAR_6 | VAR_12 |
   VAR_10 | VAR_16);

 if (!(VAR_21->flags & VAR_0))
  VAR_26 |= (VAR_4 |
   VAR_5);

 if (!VAR_23->enabled)
  VAR_26 |= VAR_17;

 if (VAR_23->scaleup_h)
  VAR_26 |= VAR_18;

 if (VAR_23->scaleup_v)
  VAR_26 |= VAR_19;

 if (VAR_23->copy_mode)
  VAR_26 |= VAR_11;

 if (VAR_21->in_path == VAR_2) {
  switch (VAR_24->fmt->color) {
  case 130:
   VAR_26 |= VAR_7;
   break;
  case 129:
   VAR_26 |= VAR_8;
   break;
  case 128:
   VAR_26 |= VAR_9;
   break;
  }
 }

 if (VAR_21->out_path == VAR_2) {
  u32 VAR_27 = VAR_25->fmt->color;

  if (VAR_27 >= VAR_1 && VAR_27 <= 130)
   VAR_26 |= VAR_13;
  else if (VAR_27 == 129)
   VAR_26 |= VAR_14;
  else if (VAR_27 == 128)
   VAR_26 |= VAR_15;
 } else {
  VAR_26 |= VAR_15;

  if (VAR_21->flags & VAR_20)
   VAR_26 |= VAR_10;
 }

 FUNC_1(VAR_26, VAR_22->regs + VAR_3);
}
