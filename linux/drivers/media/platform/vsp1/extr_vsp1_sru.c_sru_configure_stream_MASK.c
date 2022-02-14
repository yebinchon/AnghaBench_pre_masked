
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vsp1_sru_param {int ctrl0; int ctrl2; } ;
struct TYPE_2__ {int config; } ;
struct vsp1_sru {int intensity; TYPE_1__ entity; } ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; scalar_t__ width; } ;


 scalar_t__ VAR_0 ;
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
 struct vsp1_sru* FUNC_0 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_1 (TYPE_1__*,int ,int ) ;
 struct vsp1_sru_param* VAR_11 ;
 int FUNC_2 (struct vsp1_sru*,struct vsp1_dl_body*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vsp1_entity *VAR_12,
     struct vsp1_pipeline *VAR_13,
     struct vsp1_dl_list *VAR_14,
     struct vsp1_dl_body *VAR_15)
{
 const struct vsp1_sru_param *VAR_16;
 struct vsp1_sru *VAR_17 = FUNC_0(&VAR_12->subdev);
 struct v4l2_mbus_framefmt *VAR_18;
 struct v4l2_mbus_framefmt *VAR_19;
 u32 VAR_20;

 VAR_18 = FUNC_1(&VAR_17->entity, VAR_17->entity.config,
        VAR_1);
 VAR_19 = FUNC_1(&VAR_17->entity, VAR_17->entity.config,
         VAR_2);

 if (VAR_18->code == VAR_0)
  VAR_20 = VAR_5 | VAR_6
        | VAR_7;
 else
  VAR_20 = VAR_6;

 if (VAR_18->width != VAR_19->width)
  VAR_20 |= VAR_4;

 VAR_16 = &VAR_11[VAR_17->intensity - 1];

 VAR_20 |= VAR_16->ctrl0;

 FUNC_2(VAR_17, VAR_15, VAR_3, VAR_20);
 FUNC_2(VAR_17, VAR_15, VAR_8, VAR_9);
 FUNC_2(VAR_17, VAR_15, VAR_10, VAR_16->ctrl2);
}
