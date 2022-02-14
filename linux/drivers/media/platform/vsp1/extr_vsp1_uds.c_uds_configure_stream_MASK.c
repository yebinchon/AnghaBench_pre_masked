
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* vsp1; int config; } ;
struct vsp1_uds {scalar_t__ scale_alpha; TYPE_2__ entity; } ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 struct vsp1_uds* FUNC_1 (int *) ;
 unsigned int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 struct v4l2_mbus_framefmt* FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (struct vsp1_uds*,struct vsp1_dl_body*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct vsp1_entity *VAR_11,
     struct vsp1_pipeline *VAR_12,
     struct vsp1_dl_list *VAR_13,
     struct vsp1_dl_body *VAR_14)
{
 struct vsp1_uds *VAR_15 = FUNC_1(&VAR_11->subdev);
 const struct v4l2_mbus_framefmt *VAR_16;
 const struct v4l2_mbus_framefmt *VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 bool VAR_20;

 VAR_17 = FUNC_4(&VAR_15->entity, VAR_15->entity.config,
        VAR_0);
 VAR_16 = FUNC_4(&VAR_15->entity, VAR_15->entity.config,
         VAR_1);

 VAR_18 = FUNC_2(VAR_17->width, VAR_16->width);
 VAR_19 = FUNC_2(VAR_17->height, VAR_16->height);

 FUNC_0(VAR_15->entity.vsp1->dev, "hscale %u vscale %u\n", VAR_18, VAR_19);






 if (VAR_15->scale_alpha && (VAR_18 >= 8192 || VAR_19 >= 8192))
  VAR_20 = 0;
 else
  VAR_20 = 1;

 FUNC_5(VAR_15, VAR_14, VAR_2,
         (VAR_15->scale_alpha ? VAR_3 : 0) |
         (VAR_20 ? VAR_4 : 0));

 FUNC_5(VAR_15, VAR_14, VAR_5,
         (FUNC_3(VAR_18)
    << VAR_6) |
         (FUNC_3(VAR_19)
    << VAR_7));


 FUNC_5(VAR_15, VAR_14, VAR_8,
         (VAR_18 << VAR_9) |
         (VAR_19 << VAR_10));
}
