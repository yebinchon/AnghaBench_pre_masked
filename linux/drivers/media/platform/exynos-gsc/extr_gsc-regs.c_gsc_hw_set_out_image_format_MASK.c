
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct gsc_frame {TYPE_1__* fmt; } ;
struct gsc_dev {scalar_t__ regs; } ;
struct gsc_ctx {scalar_t__ out_path; struct gsc_frame d_frame; struct gsc_dev* gsc_dev; } ;
struct TYPE_2__ {size_t num_planes; int num_comp; int corder; int yorder; scalar_t__* depth; int color; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
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
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_0 (struct gsc_ctx*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (size_t,scalar_t__) ;

void FUNC_5(struct gsc_ctx *VAR_20)
{
 struct gsc_dev *VAR_21 = VAR_20->gsc_dev;
 struct gsc_frame *VAR_22 = &VAR_20->d_frame;
 u32 VAR_23, VAR_24 = 0;
 u32 VAR_25;

 VAR_25 = FUNC_3(VAR_21->regs + VAR_6);
 VAR_25 &= ~(VAR_8 | VAR_17 |
   VAR_5 | VAR_7 |
   VAR_11 | VAR_10);
 FUNC_4(VAR_25, VAR_21->regs + VAR_6);

 if (FUNC_1(VAR_22->fmt->color)) {
  FUNC_0(VAR_20);
  return;
 }

 if (VAR_20->out_path != VAR_1) {
  VAR_25 |= VAR_19;
  goto end_set;
 }

 for (VAR_23 = 0; VAR_23 < VAR_22->fmt->num_planes; VAR_23++)
  VAR_24 += VAR_22->fmt->depth[VAR_23];

 switch (VAR_22->fmt->num_comp) {
 case 1:
  VAR_25 |= VAR_14;
  if (VAR_22->fmt->yorder == VAR_2)
   VAR_25 |= VAR_16;
  else
   VAR_25 |= VAR_15;
  if (VAR_22->fmt->corder == VAR_0)
   VAR_25 |= VAR_3;
  else
   VAR_25 |= VAR_4;
  break;
 case 2:
  if (VAR_24 == 12)
   VAR_25 |= VAR_12;
  else
   VAR_25 |= VAR_18;
  if (VAR_22->fmt->corder == VAR_0)
   VAR_25 |= VAR_3;
  else
   VAR_25 |= VAR_4;
  break;
 case 3:
  VAR_25 |= VAR_13;
  break;
 }

 if (FUNC_2(VAR_22->fmt))
  VAR_25 |= VAR_9 | VAR_10;

end_set:
 FUNC_4(VAR_25, VAR_21->regs + VAR_6);
}
