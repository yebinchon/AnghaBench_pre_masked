
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_subdev {int ctrl_handler; } ;
struct radio_si4713_platform_data {int subdev; } ;
struct TYPE_8__ {int device_caps; int * lock; int ctrl_handler; int * v4l2_dev; } ;
struct radio_si4713_device {int v4l2_dev; TYPE_1__ radio_dev; int lock; } ;
struct TYPE_9__ {struct radio_si4713_platform_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 struct radio_si4713_device* FUNC_2 (TYPE_3__*,int,int ) ;
 struct v4l2_subdev* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int *,struct v4l2_subdev*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,struct radio_si4713_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_9)
{
 struct radio_si4713_platform_data *VAR_10 = VAR_9->dev.platform_data;
 struct radio_si4713_device *VAR_11;
 struct v4l2_subdev *VAR_12;
 int VAR_13 = 0;

 if (!VAR_10) {
  FUNC_0(&VAR_9->dev, "Cannot proceed without platform data.\n");
  VAR_13 = -VAR_0;
  goto exit;
 }

 VAR_11 = FUNC_2(&VAR_9->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  FUNC_0(&VAR_9->dev, "Failed to alloc video device.\n");
  VAR_13 = -VAR_2;
  goto exit;
 }
 FUNC_4(&VAR_11->lock);

 VAR_13 = FUNC_5(&VAR_9->dev, &VAR_11->v4l2_dev);
 if (VAR_13) {
  FUNC_0(&VAR_9->dev, "Failed to register v4l2 device.\n");
  goto exit;
 }

 VAR_12 = FUNC_3(VAR_10->subdev);
 VAR_13 = FUNC_6(&VAR_11->v4l2_dev, VAR_12);
 if (VAR_13) {
  FUNC_0(&VAR_9->dev, "Cannot get v4l2 subdevice\n");
  goto unregister_v4l2_dev;
 }

 VAR_11->radio_dev = VAR_8;
 VAR_11->radio_dev.v4l2_dev = &VAR_11->v4l2_dev;
 VAR_11->radio_dev.ctrl_handler = VAR_12->ctrl_handler;

 VAR_11->radio_dev.lock = &VAR_11->lock;
 VAR_11->radio_dev.device_caps = VAR_4 | VAR_5;
 FUNC_9(&VAR_11->radio_dev, VAR_11);
 if (FUNC_8(&VAR_11->radio_dev, VAR_6, VAR_7)) {
  FUNC_0(&VAR_9->dev, "Could not register video device.\n");
  VAR_13 = -VAR_1;
  goto unregister_v4l2_dev;
 }
 FUNC_1(&VAR_9->dev, "New device successfully probed\n");

 goto exit;

unregister_v4l2_dev:
 FUNC_7(&VAR_11->v4l2_dev);
exit:
 return VAR_13;
}
