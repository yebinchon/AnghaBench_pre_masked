
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct stm32_dcmi {int vdev; int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct stm32_dcmi* FUNC_1 (struct v4l2_async_notifier*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct v4l2_async_notifier *VAR_0,
         struct v4l2_subdev *VAR_1,
         struct v4l2_async_subdev *VAR_2)
{
 struct stm32_dcmi *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->dev, "Removing %s\n", FUNC_2(VAR_3->vdev));


 FUNC_3(VAR_3->vdev);
}
