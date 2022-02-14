
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_host_desc {int (* add_device ) (struct soc_camera_device*) ;int (* del_device ) (struct soc_camera_device*) ;scalar_t__ board_info; scalar_t__ module_name; } ;
struct soc_camera_host {int host_lock; } ;
struct soc_camera_device {int ctrl_handler; int * vdev; int pdev; } ;
struct soc_camera_desc {struct soc_camera_host_desc host_desc; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct soc_camera_host*) ;
 int FUNC_8 (struct soc_camera_host*) ;
 int FUNC_9 (struct soc_camera_device*) ;
 int FUNC_10 (struct soc_camera_device*,struct soc_camera_desc*) ;
 int FUNC_11 (struct soc_camera_device*) ;
 int FUNC_12 (struct soc_camera_device*) ;
 int FUNC_13 (struct soc_camera_device*) ;
 int FUNC_14 (struct soc_camera_device*) ;
 struct device* FUNC_15 (struct soc_camera_device*) ;
 struct soc_camera_desc* FUNC_16 (struct soc_camera_device*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (struct soc_camera_device*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct soc_camera_host *VAR_3,
       struct soc_camera_device *VAR_4)
{
 struct soc_camera_desc *VAR_5 = FUNC_16(VAR_4);
 struct soc_camera_host_desc *VAR_6 = &VAR_5->host_desc;
 struct device *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_1(VAR_4->pdev, "Probing %s\n", FUNC_2(VAR_4->pdev));
 VAR_8 = FUNC_19(&VAR_4->ctrl_handler, 16);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_20(VAR_4);
 if (VAR_8 < 0)
  goto evdc;
 if (VAR_6->board_info) {
  VAR_8 = FUNC_10(VAR_4, VAR_5);
  if (VAR_8 < 0 && VAR_8 != -VAR_2)
   goto eadd;
 } else if (!VAR_6->add_device || !VAR_6->del_device) {
  VAR_8 = -VAR_0;
  goto eadd;
 } else {
  VAR_8 = FUNC_7(VAR_3);
  if (VAR_8 < 0)
   goto eadd;

  if (VAR_6->module_name)
   VAR_8 = FUNC_6(VAR_6->module_name);

  VAR_8 = VAR_6->add_device(VAR_4);
  if (VAR_8 < 0)
   goto eadddev;





  VAR_7 = FUNC_15(VAR_4);
  if (!VAR_7 || !VAR_7->driver || !FUNC_0(VAR_7) ||
      !FUNC_17(VAR_7->driver->owner)) {
   VAR_6->del_device(VAR_4);
   VAR_8 = -VAR_1;
   goto enodrv;
  }
 }

 FUNC_4(&VAR_3->host_lock);
 VAR_8 = FUNC_11(VAR_4);
 FUNC_5(&VAR_3->host_lock);
 if (VAR_8 < 0)
  goto efinish;

 return 0;

efinish:
 if (VAR_6->board_info) {
  FUNC_9(VAR_4);
 } else {
  VAR_6->del_device(VAR_4);
  FUNC_3(VAR_7->driver->owner);
enodrv:
eadddev:
  FUNC_8(VAR_3);
 }
eadd:
 if (VAR_4->vdev) {
  FUNC_21(VAR_4->vdev);
  VAR_4->vdev = ((void*)0);
 }
evdc:
 FUNC_18(&VAR_4->ctrl_handler);
 return VAR_8;
}
