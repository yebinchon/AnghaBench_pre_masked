
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ctrl_handler; int name; } ;
struct TYPE_10__ {int minor; int device_caps; TYPE_4__* v4l2_dev; int * lock; int release; int * ioctl_ops; int * fops; int name; } ;
struct timb_radio_platform_data {int dsp; int i2c_adapter; int tuner; } ;
struct timbradio {TYPE_4__ v4l2_dev; TYPE_2__ video_dev; TYPE_1__* sd_dsp; int * sd_tuner; int lock; struct timb_radio_platform_data pdata; } ;
struct TYPE_12__ {struct timb_radio_platform_data* platform_data; } ;
struct platform_device {TYPE_7__ dev; } ;
struct TYPE_9__ {int ctrl_handler; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_7__*,char*,...) ;
 struct timbradio* FUNC_1 (TYPE_7__*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct platform_device*,struct timbradio*) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 void* FUNC_8 (TYPE_4__*,int ,int ,int *) ;
 int VAR_10 ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (TYPE_2__*,struct timbradio*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_11)
{
 struct timb_radio_platform_data *VAR_12 = VAR_11->dev.platform_data;
 struct timbradio *VAR_13;
 int VAR_14;

 if (!VAR_12) {
  FUNC_0(&VAR_11->dev, "Platform data missing\n");
  VAR_14 = -VAR_1;
  goto err;
 }

 VAR_13 = FUNC_1(&VAR_11->dev, sizeof(*VAR_13), VAR_4);
 if (!VAR_13) {
  VAR_14 = -VAR_3;
  goto err;
 }

 VAR_13->pdata = *VAR_12;
 FUNC_3(&VAR_13->lock);

 FUNC_5(VAR_13->video_dev.name, "Timberdale Radio",
  sizeof(VAR_13->video_dev.name));
 VAR_13->video_dev.fops = &VAR_8;
 VAR_13->video_dev.ioctl_ops = &VAR_9;
 VAR_13->video_dev.release = VAR_10;
 VAR_13->video_dev.minor = -1;
 VAR_13->video_dev.lock = &VAR_13->lock;
 VAR_13->video_dev.device_caps = VAR_6 | VAR_5;

 FUNC_5(VAR_13->v4l2_dev.name, VAR_0, sizeof(VAR_13->v4l2_dev.name));
 VAR_14 = FUNC_6(((void*)0), &VAR_13->v4l2_dev);
 if (VAR_14)
  goto err;

 VAR_13->video_dev.v4l2_dev = &VAR_13->v4l2_dev;

 VAR_13->sd_tuner = FUNC_8(&VAR_13->v4l2_dev,
  FUNC_2(VAR_12->i2c_adapter), VAR_12->tuner, ((void*)0));
 VAR_13->sd_dsp = FUNC_8(&VAR_13->v4l2_dev,
  FUNC_2(VAR_12->i2c_adapter), VAR_12->dsp, ((void*)0));
 if (VAR_13->sd_tuner == ((void*)0) || VAR_13->sd_dsp == ((void*)0)) {
  VAR_14 = -VAR_2;
  goto err_video_req;
 }

 VAR_13->v4l2_dev.ctrl_handler = VAR_13->sd_dsp->ctrl_handler;

 VAR_14 = FUNC_9(&VAR_13->video_dev, VAR_7, -1);
 if (VAR_14) {
  FUNC_0(&VAR_11->dev, "Error reg video\n");
  goto err_video_req;
 }

 FUNC_10(&VAR_13->video_dev, VAR_13);

 FUNC_4(VAR_11, VAR_13);
 return 0;

err_video_req:
 FUNC_7(&VAR_13->v4l2_dev);
err:
 FUNC_0(&VAR_11->dev, "Failed to register: %d\n", VAR_14);

 return VAR_14;
}
