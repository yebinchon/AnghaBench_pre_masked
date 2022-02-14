
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_async_notifier {int dummy; } ;
struct TYPE_5__ {TYPE_3__* source; } ;
struct stm32_dcmi {int dev; int sd_bounds; TYPE_2__ entity; TYPE_1__* vdev; } ;
struct TYPE_6__ {int ctrl_handler; } ;
struct TYPE_4__ {int ctrl_handler; } ;


 int VAR_0 ;
 int FUNC_0 (struct stm32_dcmi*) ;
 int FUNC_1 (struct stm32_dcmi*) ;
 int FUNC_2 (struct stm32_dcmi*) ;
 int FUNC_3 (struct stm32_dcmi*,int *) ;
 int FUNC_4 (struct stm32_dcmi*) ;
 int FUNC_5 (int ,char*) ;
 TYPE_3__* FUNC_6 (int ) ;
 struct stm32_dcmi* FUNC_7 (struct v4l2_async_notifier*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_async_notifier *VAR_1)
{
 struct stm32_dcmi *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;






 VAR_2->entity.source =
  FUNC_6(FUNC_0(VAR_2));
 if (!VAR_2->entity.source) {
  FUNC_5(VAR_2->dev, "Source subdevice not found\n");
  return -VAR_0;
 }

 VAR_2->vdev->ctrl_handler = VAR_2->entity.source->ctrl_handler;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_5(VAR_2->dev, "No supported mediabus format found\n");
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_5(VAR_2->dev, "Could not initialize framesizes\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2, &VAR_2->sd_bounds);
 if (VAR_3) {
  FUNC_5(VAR_2->dev, "Could not get sensor bounds\n");
  return VAR_3;
 }

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_5(VAR_2->dev, "Could not set default format\n");
  return VAR_3;
 }

 return 0;
}
