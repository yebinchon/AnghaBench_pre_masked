
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int name; int entity; int fwnode; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct stm32_dcmi {int dev; TYPE_1__* vdev; } ;
struct TYPE_2__ {int entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 unsigned int FUNC_2 (int *,int,int *,int ,int) ;
 int FUNC_3 (int *,int ,int ) ;
 struct stm32_dcmi* FUNC_4 (struct v4l2_async_notifier*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_async_notifier *VAR_3,
       struct v4l2_subdev *VAR_4,
       struct v4l2_async_subdev *VAR_5)
{
 struct stm32_dcmi *VAR_6 = FUNC_4(VAR_3);
 unsigned int VAR_7;
 int VAR_8;

 FUNC_0(VAR_6->dev, "Subdev \"%s\" bound\n", VAR_4->name);





 VAR_8 = FUNC_3(&VAR_4->entity,
           VAR_4->fwnode,
           VAR_2);

 VAR_7 = FUNC_2(&VAR_4->entity, VAR_8,
        &VAR_6->vdev->entity, 0,
        VAR_1 |
        VAR_0);
 if (VAR_7)
  FUNC_1(VAR_6->dev, "Failed to create media pad link with subdev \"%s\"\n",
   VAR_4->name);
 else
  FUNC_0(VAR_6->dev, "DCMI is now linked to \"%s\"\n",
   VAR_4->name);

 return VAR_7;
}
