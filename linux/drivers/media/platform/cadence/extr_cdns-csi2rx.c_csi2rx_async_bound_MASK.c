
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int entity; int name; int fwnode; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {struct v4l2_subdev* sd; } ;
struct TYPE_2__ {int entity; } ;
struct csi2rx_priv {scalar_t__ source_pad; TYPE_1__ subdev; struct v4l2_subdev* source_subdev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int,int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 struct csi2rx_priv* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_async_notifier *VAR_3,
         struct v4l2_subdev *VAR_4,
         struct v4l2_async_subdev *VAR_5)
{
 struct v4l2_subdev *VAR_6 = VAR_3->sd;
 struct csi2rx_priv *VAR_7 = FUNC_4(VAR_6);

 VAR_7->source_pad = FUNC_3(&VAR_4->entity,
        VAR_4->fwnode,
        VAR_2);
 if (VAR_7->source_pad < 0) {
  FUNC_1(VAR_7->dev, "Couldn't find output pad for subdev %s\n",
   VAR_4->name);
  return VAR_7->source_pad;
 }

 VAR_7->source_subdev = VAR_4;

 FUNC_0(VAR_7->dev, "Bound %s pad: %d\n", VAR_4->name,
  VAR_7->source_pad);

 return FUNC_2(&VAR_7->source_subdev->entity,
         VAR_7->source_pad,
         &VAR_7->subdev.entity, 0,
         VAR_0 |
         VAR_1);
}
