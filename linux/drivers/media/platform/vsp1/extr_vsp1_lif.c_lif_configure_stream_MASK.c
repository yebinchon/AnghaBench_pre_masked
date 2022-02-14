
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsp1_pipeline {int dummy; } ;
struct TYPE_4__ {int config; } ;
struct vsp1_lif {TYPE_2__ entity; } ;
struct vsp1_entity {TYPE_1__* vsp1; int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct v4l2_mbus_framefmt {int height; scalar_t__ code; int width; } ;
struct TYPE_3__ {int version; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;





 int const VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 struct vsp1_lif* FUNC_1 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (struct vsp1_lif*,struct vsp1_dl_body*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct vsp1_entity *VAR_15,
     struct vsp1_pipeline *VAR_16,
     struct vsp1_dl_list *VAR_17,
     struct vsp1_dl_body *VAR_18)
{
 const struct v4l2_mbus_framefmt *VAR_19;
 struct vsp1_lif *VAR_20 = FUNC_1(&VAR_15->subdev);
 unsigned int VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;

 VAR_19 = FUNC_2(&VAR_20->entity, VAR_20->entity.config,
         VAR_0);

 switch (VAR_15->vsp1->version & VAR_2) {
 case 131:
 case 129:
  VAR_21 = 1536;
  VAR_22 = FUNC_0(128U, (VAR_19->width + 1) / 2 * VAR_19->height - 4);
  VAR_23 = 1520;
  break;

 case 132:
 case 128:
  VAR_21 = 0;
  VAR_22 = 1500;
  VAR_23 = 0;
  break;

 case 130:
 default:
  VAR_21 = 0;
  VAR_22 = 3000;
  VAR_23 = 0;
  break;
 }

 FUNC_3(VAR_20, VAR_18, VAR_4,
   (VAR_21 << VAR_5) |
   (VAR_23 << VAR_6));

 FUNC_3(VAR_20, VAR_18, VAR_7,
   (VAR_22 << VAR_10) |
   (VAR_19->code == 0 ? VAR_8 : 0) |
   VAR_11 | VAR_9);







 if ((VAR_15->vsp1->version & VAR_1) ==
     (128 | VAR_3))
  FUNC_3(VAR_20, VAR_18, VAR_12,
          VAR_13 |
          (1536 << VAR_14));
}
