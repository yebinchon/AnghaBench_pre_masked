
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct imgu_css_pipe {TYPE_11__* rect; } ;
struct imgu_css {struct imgu_css_pipe* pipes; } ;
struct TYPE_22__ {TYPE_8__* aligned_data; } ;
struct TYPE_16__ {int out_frame_width; } ;
struct TYPE_15__ {TYPE_3__ hor_ctrl0; } ;
struct TYPE_12__ {TYPE_9__ per_stripe; TYPE_2__ hor; } ;
struct TYPE_18__ {TYPE_4__* down_scaled_stripes; } ;
struct imgu_abi_acc_param {TYPE_10__ bds; TYPE_5__ stripe; } ;
struct TYPE_19__ {int out_frame_height; int out_frame_width; } ;
struct TYPE_14__ {scalar_t__ hor_crop_end; scalar_t__ hor_crop_start; scalar_t__ hor_crop_en; } ;
struct TYPE_20__ {TYPE_6__ ver_ctrl1; TYPE_3__ hor_ctrl0; TYPE_1__ crop; } ;
struct TYPE_21__ {TYPE_7__ data; } ;
struct TYPE_17__ {int width; } ;
struct TYPE_13__ {int height; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct imgu_css *VAR_1,
        struct imgu_abi_acc_param *VAR_2,
        const int VAR_3, unsigned int VAR_4)
{
 struct imgu_css_pipe *VAR_5 = &VAR_1->pipes[VAR_4];

 VAR_2->bds.per_stripe.aligned_data[VAR_3].data.crop.hor_crop_en = 0;
 VAR_2->bds.per_stripe.aligned_data[VAR_3].data.crop.hor_crop_start = 0;
 VAR_2->bds.per_stripe.aligned_data[VAR_3].data.crop.hor_crop_end = 0;
 VAR_2->bds.per_stripe.aligned_data[VAR_3].data.hor_ctrl0 =
  VAR_2->bds.hor.hor_ctrl0;
 VAR_2->bds.per_stripe.aligned_data[VAR_3].data.hor_ctrl0.out_frame_width =
  VAR_2->stripe.down_scaled_stripes[VAR_3].width;
 VAR_2->bds.per_stripe.aligned_data[VAR_3].data.ver_ctrl1.out_frame_width =
  VAR_2->stripe.down_scaled_stripes[VAR_3].width;
 VAR_2->bds.per_stripe.aligned_data[VAR_3].data.ver_ctrl1.out_frame_height =
  VAR_5->rect[VAR_0].height;
}
