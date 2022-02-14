
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int config; } ;
struct vsp1_uds {TYPE_3__ entity; } ;
struct vsp1_pipeline {struct vsp1_partition* partition; } ;
struct TYPE_5__ {int width; } ;
struct TYPE_4__ {int width; } ;
struct vsp1_partition {TYPE_2__ uds_source; TYPE_1__ uds_sink; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct v4l2_mbus_framefmt {int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct vsp1_uds* FUNC_0 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (struct vsp1_uds*,struct vsp1_dl_body*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vsp1_entity *VAR_8,
        struct vsp1_pipeline *VAR_9,
        struct vsp1_dl_list *VAR_10,
        struct vsp1_dl_body *VAR_11)
{
 struct vsp1_uds *VAR_12 = FUNC_0(&VAR_8->subdev);
 struct vsp1_partition *VAR_13 = VAR_9->partition;
 const struct v4l2_mbus_framefmt *VAR_14;

 VAR_14 = FUNC_1(&VAR_12->entity, VAR_12->entity.config,
         VAR_0);


 FUNC_2(VAR_12, VAR_11, VAR_4, VAR_5 |
         (0 << VAR_6) |
         (VAR_13->uds_sink.width
    << VAR_7));


 FUNC_2(VAR_12, VAR_11, VAR_1,
         (VAR_13->uds_source.width
    << VAR_2) |
         (VAR_14->height
    << VAR_3));
}
