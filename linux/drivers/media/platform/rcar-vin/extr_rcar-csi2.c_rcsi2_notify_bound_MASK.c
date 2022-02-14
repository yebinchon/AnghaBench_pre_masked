
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int entity; int name; } ;
struct TYPE_4__ {int fwnode; } ;
struct v4l2_async_subdev {TYPE_2__ match; } ;
struct v4l2_async_notifier {int dummy; } ;
struct TYPE_3__ {int entity; } ;
struct rcar_csi2 {TYPE_1__ subdev; int dev; struct v4l2_subdev* remote; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int,int *,int ,int) ;
 int FUNC_3 (int *,int ,int ) ;
 struct rcar_csi2* FUNC_4 (struct v4l2_async_notifier*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_async_notifier *VAR_3,
         struct v4l2_subdev *VAR_4,
         struct v4l2_async_subdev *VAR_5)
{
 struct rcar_csi2 *VAR_6 = FUNC_4(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_3(&VAR_4->entity, VAR_5->match.fwnode,
       VAR_2);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6->dev, "Failed to find pad for %s\n", VAR_4->name);
  return VAR_7;
 }

 VAR_6->remote = VAR_4;

 FUNC_0(VAR_6->dev, "Bound %s pad: %d\n", VAR_4->name, VAR_7);

 return FUNC_2(&VAR_4->entity, VAR_7,
         &VAR_6->subdev.entity, 0,
         VAR_0 |
         VAR_1);
}
