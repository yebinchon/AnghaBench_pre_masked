
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct gsc_frame {TYPE_1__* fmt; } ;
struct gsc_dev {scalar_t__ regs; } ;
struct gsc_ctx {struct gsc_frame s_frame; struct gsc_dev* gsc_dev; } ;
struct TYPE_2__ {size_t num_planes; int num_comp; int corder; int yorder; scalar_t__* depth; int color; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct gsc_ctx*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (size_t,scalar_t__) ;

void FUNC_5(struct gsc_ctx *VAR_19)
{
 struct gsc_dev *VAR_20 = VAR_19->gsc_dev;
 struct gsc_frame *VAR_21 = &VAR_19->s_frame;
 u32 VAR_22, VAR_23 = 0;
 u32 VAR_24;

 VAR_24 = FUNC_3(VAR_20->regs + VAR_4);
 VAR_24 &= ~(VAR_6 | VAR_15 |
   VAR_3 | VAR_5 |
   VAR_9 | VAR_8);
 FUNC_4(VAR_24, VAR_20->regs + VAR_4);

 if (FUNC_1(VAR_21->fmt->color)) {
  FUNC_0(VAR_19);
  return;
 }
 for (VAR_22 = 0; VAR_22 < VAR_21->fmt->num_planes; VAR_22++)
  VAR_23 += VAR_21->fmt->depth[VAR_22];

 switch (VAR_21->fmt->num_comp) {
 case 1:
  VAR_24 |= VAR_12;
  if (VAR_21->fmt->yorder == VAR_18)
   VAR_24 |= VAR_14;
  else
   VAR_24 |= VAR_13;
  if (VAR_21->fmt->corder == VAR_0)
   VAR_24 |= VAR_1;
  else
   VAR_24 |= VAR_2;
  break;
 case 2:
  if (VAR_23 == 12)
   VAR_24 |= VAR_10;
  else
   VAR_24 |= VAR_16;
  if (VAR_21->fmt->corder == VAR_0)
   VAR_24 |= VAR_1;
  else
   VAR_24 |= VAR_2;
  break;
 case 3:
  if (VAR_23 == 12)
   VAR_24 |= VAR_11;
  else
   VAR_24 |= VAR_17;
  break;
 }

 if (FUNC_2(VAR_21->fmt))
  VAR_24 |= VAR_7 | VAR_8;

 FUNC_4(VAR_24, VAR_20->regs + VAR_4);
}
