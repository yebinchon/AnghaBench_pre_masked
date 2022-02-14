
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int width; int num_planes; } ;
struct fdp1_q_data {int vsize; int stride_y; int stride_c; TYPE_2__* fmt; TYPE_1__ format; } ;
struct fdp1_job {TYPE_5__* next; TYPE_4__* active; TYPE_3__* previous; } ;
struct fdp1_dev {int dummy; } ;
struct fdp1_ctx {int* smsk_addr; scalar_t__ deint_mode; struct fdp1_q_data out_q; struct fdp1_dev* fdp1; } ;
struct TYPE_10__ {int* addrs; } ;
struct TYPE_9__ {scalar_t__ field; int* addrs; } ;
struct TYPE_8__ {int* addrs; } ;
struct TYPE_7__ {int fmt; int swap; scalar_t__ swap_uv; scalar_t__ swap_yc; } ;


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
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct fdp1_dev*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct fdp1_ctx *VAR_19,
          struct fdp1_job *VAR_20)
{
 struct fdp1_dev *VAR_21 = VAR_19->fdp1;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;

 struct fdp1_q_data *VAR_26 = &VAR_19->out_q;


 VAR_22 = (VAR_26->format.width << VAR_14)
       | (VAR_26->vsize << VAR_15);


 VAR_23 = VAR_26->stride_y << VAR_12;
 if (VAR_26->format.num_planes > 1)
  VAR_23 |= VAR_26->stride_c << VAR_11;


 VAR_24 = VAR_26->fmt->fmt;
 if (VAR_26->fmt->swap_yc)
  VAR_24 |= VAR_9;

 if (VAR_26->fmt->swap_uv)
  VAR_24 |= VAR_8;

 if (VAR_20->active->field == VAR_18) {
  VAR_24 |= VAR_6;
  VAR_25 = VAR_19->smsk_addr[0];
 } else {
  VAR_25 = VAR_19->smsk_addr[1];
 }


 if (VAR_19->deint_mode)
  VAR_24 |= VAR_7;

 FUNC_0(VAR_21, VAR_24, VAR_5);
 FUNC_0(VAR_21, VAR_26->fmt->swap, VAR_17);
 FUNC_0(VAR_21, VAR_22, VAR_13);
 FUNC_0(VAR_21, VAR_23, VAR_10);
 FUNC_0(VAR_21, VAR_25, VAR_16);


 if (VAR_20->previous)
  FUNC_0(VAR_21, VAR_20->previous->addrs[0], VAR_0);


 FUNC_0(VAR_21, VAR_20->active->addrs[0], VAR_3);
 FUNC_0(VAR_21, VAR_20->active->addrs[1], VAR_1);
 FUNC_0(VAR_21, VAR_20->active->addrs[2], VAR_2);


 if (VAR_20->next)
  FUNC_0(VAR_21, VAR_20->next->addrs[0], VAR_4);
}
