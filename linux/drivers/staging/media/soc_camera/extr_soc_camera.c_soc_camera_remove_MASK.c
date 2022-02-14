
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct soc_camera_device {TYPE_2__* sasc; int * clk; scalar_t__ num_user_formats; struct video_device* vdev; int ctrl_handler; } ;
struct TYPE_3__ {int (* del_device ) (struct soc_camera_device*) ;scalar_t__ board_info; } ;
struct soc_camera_desc {TYPE_1__ host_desc; } ;
struct device_driver {int owner; } ;
struct device {struct device_driver* driver; } ;
struct TYPE_4__ {int pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct soc_camera_device*) ;
 int FUNC_3 (struct soc_camera_device*) ;
 int FUNC_4 (struct soc_camera_device*) ;
 struct device* FUNC_5 (struct soc_camera_device*) ;
 struct soc_camera_desc* FUNC_6 (struct soc_camera_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct video_device*) ;

__attribute__((used)) static int FUNC_10(struct soc_camera_device *VAR_0)
{
 struct soc_camera_desc *VAR_1 = FUNC_6(VAR_0);
 struct video_device *VAR_2 = VAR_0->vdev;

 FUNC_8(&VAR_0->ctrl_handler);
 if (VAR_2) {
  FUNC_9(VAR_2);
  VAR_0->vdev = ((void*)0);
 }

 if (VAR_1->host_desc.board_info) {
  FUNC_3(VAR_0);
 } else {
  struct device *VAR_3 = FUNC_5(VAR_0);
  struct device_driver *VAR_4 = VAR_3 ? VAR_3->driver : ((void*)0);
  if (VAR_4) {
   VAR_1->host_desc.del_device(VAR_0);
   FUNC_0(VAR_4->owner);
  }
 }

 if (VAR_0->num_user_formats)
  FUNC_2(VAR_0);

 if (VAR_0->clk) {

  FUNC_7(VAR_0->clk);
  VAR_0->clk = ((void*)0);
 }

 if (VAR_0->sasc)
  FUNC_1(VAR_0->sasc->pdev);

 return 0;
}
