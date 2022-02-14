
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_async_notifier {int dummy; } ;
struct TYPE_6__ {TYPE_1__* subdev; } ;
struct atmel_isi {TYPE_3__* vdev; int dev; TYPE_2__ entity; } ;
struct TYPE_7__ {int ctrl_handler; } ;
struct TYPE_5__ {int ctrl_handler; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct atmel_isi*) ;
 int FUNC_3 (struct atmel_isi*) ;
 int FUNC_4 (struct atmel_isi*) ;
 struct atmel_isi* FUNC_5 (struct v4l2_async_notifier*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct v4l2_async_notifier *VAR_1)
{
 struct atmel_isi *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 VAR_2->vdev->ctrl_handler = VAR_2->entity.subdev->ctrl_handler;
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "No supported mediabus format found\n");
  return VAR_3;
 }
 FUNC_2(VAR_2);

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Could not set default format\n");
  return VAR_3;
 }

 VAR_3 = FUNC_7(VAR_2->vdev, VAR_0, -1);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "Failed to register video device\n");
  return VAR_3;
 }

 FUNC_0(VAR_2->dev, "Device registered as %s\n",
  FUNC_6(VAR_2->vdev));
 return 0;
}
