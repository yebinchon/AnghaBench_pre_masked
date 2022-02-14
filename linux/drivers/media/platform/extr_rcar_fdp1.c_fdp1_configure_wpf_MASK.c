
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int num_planes; scalar_t__ ycbcr_enc; scalar_t__ quantization; TYPE_1__* plane_fmt; } ;
struct fdp1_q_data {TYPE_4__* fmt; TYPE_2__ format; } ;
struct fdp1_job {TYPE_3__* dst; } ;
struct fdp1_dev {int dummy; } ;
struct fdp1_ctx {int alpha; struct fdp1_q_data cap_q; struct fdp1_q_data out_q; struct fdp1_dev* fdp1; } ;
struct TYPE_8__ {int fmt; int swap; scalar_t__ swap_uv; scalar_t__ swap_yc; } ;
struct TYPE_7__ {int* addrs; } ;
struct TYPE_5__ {int bytesperline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct fdp1_dev*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct fdp1_ctx *VAR_22,
          struct fdp1_job *VAR_23)
{
 struct fdp1_dev *VAR_24 = VAR_22->fdp1;
 struct fdp1_q_data *VAR_25 = &VAR_22->out_q;
 struct fdp1_q_data *VAR_26 = &VAR_22->cap_q;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30;

 VAR_27 = VAR_26->format.plane_fmt[0].bytesperline
  << VAR_13;

 if (VAR_26->format.num_planes > 1)
  VAR_27 |= VAR_26->format.plane_fmt[1].bytesperline
   << VAR_12;

 VAR_28 = VAR_26->fmt->fmt;

 if (VAR_26->fmt->swap_yc)
  VAR_28 |= VAR_10;

 if (VAR_26->fmt->swap_uv)
  VAR_28 |= VAR_9;

 if (FUNC_0(VAR_26->fmt)) {

  VAR_28 |= VAR_4;


  if (VAR_25->format.ycbcr_enc == VAR_21)
   VAR_28 |= VAR_8;
  else if (VAR_25->format.quantization ==
    VAR_20)
   VAR_28 |= VAR_6;
  else
   VAR_28 |= VAR_7;
 }


 VAR_28 |= VAR_22->alpha << VAR_5;


 VAR_30 = VAR_15;
 VAR_30 |= VAR_16;


 VAR_29 = VAR_26->fmt->swap << VAR_18;
 VAR_29 |= VAR_25->fmt->swap << VAR_19;

 FUNC_1(VAR_24, VAR_28, VAR_3);
 FUNC_1(VAR_24, VAR_30, VAR_14);
 FUNC_1(VAR_24, VAR_29, VAR_17);
 FUNC_1(VAR_24, VAR_27, VAR_11);

 FUNC_1(VAR_24, VAR_23->dst->addrs[0], VAR_2);
 FUNC_1(VAR_24, VAR_23->dst->addrs[1], VAR_0);
 FUNC_1(VAR_24, VAR_23->dst->addrs[2], VAR_1);
}
