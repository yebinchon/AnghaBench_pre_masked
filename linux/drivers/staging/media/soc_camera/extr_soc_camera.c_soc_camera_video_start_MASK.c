
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_camera_device {TYPE_2__* vdev; int pdev; int parent; } ;
typedef struct device_type const device_type ;
struct TYPE_5__ {struct device_type const* type; } ;
struct TYPE_6__ {scalar_t__ tvnorms; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,struct soc_camera_device*) ;

__attribute__((used)) static int FUNC_4(struct soc_camera_device *VAR_5)
{
 const struct device_type *VAR_6 = VAR_5->vdev->dev.type;
 int VAR_7;

 if (!VAR_5->parent)
  return -VAR_0;

 FUNC_3(VAR_5->vdev, VAR_5);
 if (VAR_5->vdev->tvnorms == 0) {

  FUNC_1(VAR_5->vdev, VAR_3);
  FUNC_1(VAR_5->vdev, VAR_4);
  FUNC_1(VAR_5->vdev, VAR_2);
 }
 VAR_7 = FUNC_2(VAR_5->vdev, VAR_1, -1);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5->pdev, "video_register_device failed: %d\n", VAR_7);
  return VAR_7;
 }


 VAR_5->vdev->dev.type = VAR_6;

 return 0;
}
