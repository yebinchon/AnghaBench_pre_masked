
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
struct v4l2_subdev_format {int which; int pad; int member_0; } ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {int dummy; } ;
struct csiphy_lanes_cfg {int num_data; } ;
struct TYPE_9__ {TYPE_3__* csi2; } ;
struct csiphy_device {TYPE_4__ cfg; int id; } ;
struct TYPE_10__ {int lane_assign; int lane_cnt; int csiphy_id; } ;
struct csid_device {int subdev; TYPE_5__ phy; TYPE_2__* testgen_mode; } ;
struct TYPE_8__ {struct csiphy_lanes_cfg lane_cfg; } ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_7__ {TYPE_1__ cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct csiphy_lanes_cfg*) ;
 int FUNC_1 (int *,int *,struct v4l2_subdev_format*) ;
 scalar_t__ FUNC_2 (struct media_pad const*) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*) ;
 void* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct media_entity *VAR_6,
      const struct media_pad *VAR_7,
      const struct media_pad *VAR_8, u32 VAR_9)
{
 if (VAR_9 & VAR_2)
  if (FUNC_2(VAR_7))
   return -VAR_0;

 if ((VAR_7->flags & VAR_3) &&
     (VAR_9 & VAR_2)) {
  struct v4l2_subdev *VAR_10;
  struct csid_device *VAR_11;
  struct csiphy_device *VAR_12;
  struct csiphy_lanes_cfg *VAR_13;
  struct v4l2_subdev_format VAR_14 = { 0 };

  VAR_10 = FUNC_3(VAR_6);
  VAR_11 = FUNC_4(VAR_10);



  if (VAR_11->testgen_mode->cur.val != 0)
   return -VAR_0;

  VAR_10 = FUNC_3(VAR_8->entity);
  VAR_12 = FUNC_4(VAR_10);



  if (!VAR_12->cfg.csi2)
   return -VAR_1;

  VAR_11->phy.csiphy_id = VAR_12->id;

  VAR_13 = &VAR_12->cfg.csi2->lane_cfg;
  VAR_11->phy.lane_cnt = VAR_13->num_data;
  VAR_11->phy.lane_assign = FUNC_0(VAR_13);


  VAR_14.pad = VAR_4;
  VAR_14.which = VAR_5;
  FUNC_1(&VAR_11->subdev, ((void*)0), &VAR_14);
 }

 return 0;
}
