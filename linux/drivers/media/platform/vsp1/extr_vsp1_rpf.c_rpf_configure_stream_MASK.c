
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
struct TYPE_10__ {int config; } ;
struct v4l2_pix_format_mplane {int num_planes; int flags; TYPE_1__* plane_fmt; } ;
struct vsp1_rwpf {int mult_alpha; int brx_input; TYPE_5__ entity; struct v4l2_pix_format_mplane format; struct vsp1_format_info* fmtinfo; } ;
struct vsp1_pipeline {scalar_t__ interlaced; TYPE_4__* brx; } ;
struct vsp1_format_info {int hwfmt; unsigned int swap; scalar_t__ alpha; scalar_t__ swap_uv; scalar_t__ swap_yc; } ;
struct vsp1_entity {TYPE_3__* vsp1; int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct v4l2_rect {unsigned int left; unsigned int top; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct TYPE_9__ {int config; } ;
struct TYPE_8__ {TYPE_2__* info; } ;
struct TYPE_7__ {int gen; } ;
struct TYPE_6__ {int bytesperline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct vsp1_rwpf* FUNC_0 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_1 (TYPE_5__*,int ,int ) ;
 struct v4l2_rect* FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_3 (struct vsp1_rwpf*,struct vsp1_dl_body*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct vsp1_entity *VAR_27,
     struct vsp1_pipeline *VAR_28,
     struct vsp1_dl_list *VAR_29,
     struct vsp1_dl_body *VAR_30)
{
 struct vsp1_rwpf *VAR_31 = FUNC_0(&VAR_27->subdev);
 const struct vsp1_format_info *VAR_32 = VAR_31->fmtinfo;
 const struct v4l2_pix_format_mplane *VAR_33 = &VAR_31->format;
 const struct v4l2_mbus_framefmt *VAR_34;
 const struct v4l2_mbus_framefmt *VAR_35;
 unsigned int VAR_36 = 0;
 unsigned int VAR_37 = 0;
 u32 VAR_38;
 u32 VAR_39;


 VAR_38 = VAR_33->plane_fmt[0].bytesperline
  << VAR_26;
 if (VAR_33->num_planes > 1)
  VAR_38 |= VAR_33->plane_fmt[1].bytesperline
   << VAR_25;






 if (VAR_28->interlaced)
  VAR_38 *= 2;

 FUNC_3(VAR_31, VAR_30, VAR_24, VAR_38);


 VAR_35 = FUNC_1(&VAR_31->entity,
       VAR_31->entity.config,
       VAR_0);
 VAR_34 = FUNC_1(&VAR_31->entity,
         VAR_31->entity.config,
         VAR_1);

 VAR_39 = VAR_11
       | (VAR_32->hwfmt << VAR_13);

 if (VAR_32->swap_yc)
  VAR_39 |= VAR_15;
 if (VAR_32->swap_uv)
  VAR_39 |= VAR_14;

 if (VAR_35->code != VAR_34->code)
  VAR_39 |= VAR_12;

 FUNC_3(VAR_31, VAR_30, VAR_10, VAR_39);
 FUNC_3(VAR_31, VAR_30, VAR_9, VAR_32->swap);


 if (VAR_28->brx) {
  const struct v4l2_rect *VAR_40;

  VAR_40 = FUNC_2(VAR_28->brx,
       VAR_28->brx->config,
       VAR_31->brx_input,
       VAR_3);
  VAR_36 = VAR_40->left;
  VAR_37 = VAR_40->top;
 }

 if (VAR_28->interlaced)
  VAR_37 /= 2;

 FUNC_3(VAR_31, VAR_30, VAR_16,
         (VAR_36 << VAR_17) |
         (VAR_37 << VAR_18));
 FUNC_3(VAR_31, VAR_30, VAR_4, VAR_5 |
         (VAR_32->alpha ? VAR_7
           : VAR_6));

 if (VAR_27->vsp1->info->gen == 3) {
  u32 VAR_41;

  if (VAR_32->alpha) {
   bool VAR_42 = VAR_33->flags
        & VAR_2;

   VAR_41 = VAR_21
        | (VAR_42 ?
    VAR_23 :
    VAR_22);
  } else {






   VAR_41 = VAR_20
        | VAR_22;
  }

  VAR_31->mult_alpha = VAR_41;
 }

 FUNC_3(VAR_31, VAR_30, VAR_19, 0);
 FUNC_3(VAR_31, VAR_30, VAR_8, 0);

}
