
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_dma_offset {int y_v; int y_h; int cb_v; int cb_h; int cr_v; int cr_h; } ;
struct fimc_frame {struct fimc_fmt* fmt; struct fimc_dma_offset dma_offset; } ;
struct fimc_fmt {int colplanes; scalar_t__ color; } ;
struct fimc_dev {scalar_t__ regs; } ;
struct fimc_ctx {int out_order_1p; int out_order_2p; struct fimc_frame d_frame; struct fimc_dev* fimc_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct fimc_ctx*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct fimc_ctx *VAR_16)
{
 struct fimc_dev *VAR_17 = VAR_16->fimc_dev;
 struct fimc_frame *VAR_18 = &VAR_16->d_frame;
 struct fimc_dma_offset *VAR_19 = &VAR_18->dma_offset;
 struct fimc_fmt *VAR_20 = VAR_18->fmt;
 u32 VAR_21;


 VAR_21 = (VAR_19->y_v << 16) | VAR_19->y_h;
 FUNC_2(VAR_21, VAR_17->regs + VAR_15);

 VAR_21 = (VAR_19->cb_v << 16) | VAR_19->cb_h;
 FUNC_2(VAR_21, VAR_17->regs + VAR_3);

 VAR_21 = (VAR_19->cr_v << 16) | VAR_19->cr_h;
 FUNC_2(VAR_21, VAR_17->regs + VAR_4);

 FUNC_0(VAR_16);


 VAR_21 = FUNC_1(VAR_17->regs + VAR_5);

 VAR_21 &= ~(VAR_8 |
   VAR_9 |
   VAR_14 |
   VAR_10);

 if (VAR_20->colplanes == 1)
  VAR_21 |= VAR_16->out_order_1p;
 else if (VAR_20->colplanes == 2)
  VAR_21 |= VAR_16->out_order_2p | VAR_12;
 else if (VAR_20->colplanes == 3)
  VAR_21 |= VAR_13;

 if (VAR_20->color == VAR_2)
  VAR_21 |= VAR_11;
 else if (VAR_20->color == VAR_1)
  VAR_21 |= VAR_6;
 else if (VAR_20->color == VAR_0)
  VAR_21 |= VAR_7;

 FUNC_2(VAR_21, VAR_17->regs + VAR_5);
}
