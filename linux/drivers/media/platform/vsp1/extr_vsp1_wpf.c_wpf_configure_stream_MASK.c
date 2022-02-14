
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
struct TYPE_10__ {unsigned int index; int config; struct vsp1_device* vsp1; } ;
struct TYPE_6__ {scalar_t__ rotate; } ;
struct v4l2_pix_format_mplane {int num_planes; TYPE_2__* plane_fmt; } ;
struct vsp1_rwpf {int writeback; int outfmt; TYPE_5__ entity; TYPE_1__ flip; struct vsp1_format_info* fmtinfo; struct v4l2_pix_format_mplane format; } ;
struct vsp1_pipeline {int num_inputs; TYPE_4__* brx; struct vsp1_rwpf** inputs; int lif; } ;
struct vsp1_format_info {int hwfmt; int swap; scalar_t__ swap_uv; scalar_t__ swap_yc; scalar_t__ alpha; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct vsp1_device {TYPE_3__* info; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {unsigned int rpf_count; } ;
struct TYPE_7__ {int bytesperline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
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
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (unsigned int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 struct vsp1_rwpf* FUNC_6 (int *) ;
 int FUNC_7 (struct vsp1_dl_body*,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_8 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_9 (struct vsp1_device*,int ) ;
 int FUNC_10 (struct vsp1_rwpf*,struct vsp1_dl_body*,int ,int) ;
 int FUNC_11 (struct vsp1_rwpf*,struct vsp1_dl_list*) ;

__attribute__((used)) static void FUNC_12(struct vsp1_entity *VAR_22,
     struct vsp1_pipeline *VAR_23,
     struct vsp1_dl_list *VAR_24,
     struct vsp1_dl_body *VAR_25)
{
 struct vsp1_rwpf *VAR_26 = FUNC_6(&VAR_22->subdev);
 struct vsp1_device *VAR_27 = VAR_26->entity.vsp1;
 const struct v4l2_mbus_framefmt *VAR_28;
 const struct v4l2_mbus_framefmt *VAR_29;
 unsigned int VAR_30 = VAR_26->entity.index;
 unsigned int VAR_31;
 u32 VAR_32 = 0;
 u32 VAR_33 = 0;
 int VAR_34;

 VAR_29 = FUNC_8(&VAR_26->entity,
       VAR_26->entity.config,
       VAR_0);
 VAR_28 = FUNC_8(&VAR_26->entity,
         VAR_26->entity.config,
         VAR_1);


 if (!VAR_23->lif || VAR_26->writeback) {
  const struct v4l2_pix_format_mplane *VAR_35 = &VAR_26->format;
  const struct vsp1_format_info *VAR_36 = VAR_26->fmtinfo;

  VAR_32 = VAR_36->hwfmt << VAR_12;

  if (VAR_26->flip.rotate)
   VAR_32 |= VAR_9;

  if (VAR_36->alpha)
   VAR_32 |= VAR_8;
  if (VAR_36->swap_yc)
   VAR_32 |= VAR_11;
  if (VAR_36->swap_uv)
   VAR_32 |= VAR_10;


  FUNC_10(VAR_26, VAR_25, VAR_5,
          VAR_35->plane_fmt[0].bytesperline);
  if (VAR_35->num_planes > 1)
   FUNC_10(VAR_26, VAR_25, VAR_4,
           VAR_35->plane_fmt[1].bytesperline);

  FUNC_10(VAR_26, VAR_25, VAR_6, VAR_36->swap);

  if (FUNC_9(VAR_27, VAR_21) && VAR_30 == 0)
   FUNC_10(VAR_26, VAR_25, VAR_13,
           VAR_15 |
           (256 << VAR_14));
 }

 if (VAR_29->code != VAR_28->code)
  VAR_32 |= VAR_7;

 VAR_26->outfmt = VAR_32;

 FUNC_7(VAR_25, FUNC_0(VAR_30),
      VAR_2);







 for (VAR_31 = 0; VAR_31 < VAR_27->info->rpf_count; ++VAR_31) {
  struct vsp1_rwpf *VAR_37 = VAR_23->inputs[VAR_31];

  if (!VAR_37)
   continue;

  VAR_33 |= (!VAR_23->brx && VAR_23->num_inputs == 1)
   ? FUNC_3(VAR_37->entity.index)
   : FUNC_4(VAR_37->entity.index);
 }

 if (VAR_23->brx)
  VAR_33 |= VAR_23->brx->type == VAR_20
   ? VAR_18
   : VAR_17;

 FUNC_10(VAR_26, VAR_25, VAR_16, VAR_33);


 FUNC_7(VAR_25, FUNC_2(VAR_30), 0);
 FUNC_7(VAR_25, FUNC_1(VAR_30),
      VAR_3);
 if (VAR_26->writeback) {
  VAR_34 = FUNC_11(VAR_26, VAR_24);
  if (VAR_34 < 0)
   VAR_26->writeback = 0;
 }

 FUNC_7(VAR_25, FUNC_5(VAR_30),
      VAR_26->writeback ? VAR_19 : 0);
}
