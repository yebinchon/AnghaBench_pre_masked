
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct vsp1_pipeline {TYPE_2__* output; } ;
struct vsp1_entity {scalar_t__ type; int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct TYPE_12__ {unsigned int source_pad; int config; } ;
struct vsp1_brx {int bgcolor; TYPE_5__* inputs; TYPE_6__ entity; } ;
struct v4l2_mbus_framefmt {int width; int height; } ;
struct TYPE_11__ {TYPE_4__* rpf; } ;
struct TYPE_9__ {unsigned int flags; } ;
struct TYPE_10__ {TYPE_3__ format; } ;
struct TYPE_7__ {unsigned int flags; } ;
struct TYPE_8__ {TYPE_1__ format; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 struct vsp1_brx* FUNC_8 (int *) ;
 int FUNC_9 (struct vsp1_brx*,struct vsp1_dl_body*,int ,int) ;
 struct v4l2_mbus_framefmt* FUNC_10 (TYPE_6__*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct vsp1_entity *VAR_20,
     struct vsp1_pipeline *VAR_21,
     struct vsp1_dl_list *VAR_22,
     struct vsp1_dl_body *VAR_23)
{
 struct vsp1_brx *VAR_24 = FUNC_8(&VAR_20->subdev);
 struct v4l2_mbus_framefmt *VAR_25;
 unsigned int VAR_26;
 unsigned int VAR_27;

 VAR_25 = FUNC_10(&VAR_24->entity, VAR_24->entity.config,
         VAR_24->entity.source_pad);
 VAR_26 = VAR_21->output ? VAR_21->output->format.flags : 0;
 FUNC_9(VAR_24, VAR_23, VAR_9,
         VAR_26 & VAR_0 ?
         0 : VAR_10);





 FUNC_9(VAR_24, VAR_23, VAR_15,
         (VAR_25->width << VAR_16) |
         (VAR_25->height << VAR_17));
 FUNC_9(VAR_24, VAR_23, VAR_14, 0);

 FUNC_9(VAR_24, VAR_23, VAR_12, VAR_24->bgcolor |
         (0xff << VAR_13));







 if (VAR_20->type == VAR_19)
  FUNC_9(VAR_24, VAR_23, VAR_11,
          FUNC_7(1) |
          FUNC_6(VAR_18) |
          FUNC_5(VAR_18));

 for (VAR_27 = 0; VAR_27 < VAR_24->entity.source_pad; ++VAR_27) {
  bool VAR_28 = 0;
  u32 VAR_29 = 0;







  if (VAR_24->inputs[VAR_27].rpf) {
   VAR_29 |= VAR_8;

   VAR_28 = VAR_24->inputs[VAR_27].rpf->format.flags
          & VAR_0;
  } else {
   VAR_29 |= FUNC_3(VAR_18)
        | FUNC_2(VAR_18);
  }





  if (VAR_27 == 0)
   VAR_29 |= VAR_7;
  if (!(VAR_20->type == VAR_19 && VAR_27 == 1))
   VAR_29 |= FUNC_4(VAR_27);

  FUNC_9(VAR_24, VAR_23, FUNC_1(VAR_27), VAR_29);
  FUNC_9(VAR_24, VAR_23, FUNC_0(VAR_27),
          VAR_3 |
          (VAR_28 ? VAR_4 :
      VAR_5) |
          VAR_1 |
          VAR_2 |
          (0xff << VAR_6));
 }
}
