
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gsc_frame {scalar_t__ colorspace; TYPE_1__* fmt; } ;
struct gsc_dev {scalar_t__ regs; } ;
struct gsc_ctx {struct gsc_frame s_frame; struct gsc_dev* gsc_dev; } ;
struct TYPE_2__ {scalar_t__ pixelformat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct gsc_ctx *VAR_8)
{
 struct gsc_dev *VAR_9 = VAR_8->gsc_dev;
 struct gsc_frame *VAR_10 = &VAR_8->s_frame;
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_9->regs + VAR_0);
 if (VAR_10->colorspace == VAR_5)
  VAR_11 |= VAR_2;
 else
  VAR_11 |= VAR_3;

 if (VAR_10->fmt->pixelformat == VAR_7)
  VAR_11 |= VAR_1;
 else if (VAR_10->fmt->pixelformat == VAR_6)
  VAR_11 |= VAR_4;

 FUNC_1(VAR_11, VAR_9->regs + VAR_0);
}
