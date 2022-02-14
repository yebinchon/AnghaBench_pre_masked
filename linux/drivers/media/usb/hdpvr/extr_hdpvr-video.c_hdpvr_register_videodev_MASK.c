
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_8__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_7__ {TYPE_4__* v4l2_dev; int name; } ;
struct TYPE_6__ {int audio_codec; } ;
struct hdpvr_device {int flags; int width; int height; int fw_ver; TYPE_4__ v4l2_dev; TYPE_2__ video_dev; int video_mode; void* video_bitrate_peak; void* video_bitrate; TYPE_1__ options; int cur_dv_timings; int cur_std; struct v4l2_ctrl_handler hdl; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 TYPE_2__ VAR_22 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int ) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (TYPE_2__*,struct hdpvr_device*) ;

int FUNC_10(struct hdpvr_device *VAR_23, struct device *VAR_24,
       int VAR_25)
{
 struct v4l2_ctrl_handler *VAR_26 = &VAR_23->hdl;
 bool VAR_27 = VAR_23->flags & VAR_1;
 int VAR_28;

 VAR_23->cur_std = VAR_18;
 VAR_23->width = 720;
 VAR_23->height = 480;
 VAR_23->cur_dv_timings = VAR_21[VAR_0];
 FUNC_3(VAR_26, 11);
 if (VAR_23->fw_ver > 0x15) {
  FUNC_5(VAR_26, &VAR_20,
   VAR_2, 0x0, 0xff, 1, 0x80);
  FUNC_5(VAR_26, &VAR_20,
   VAR_3, 0x0, 0xff, 1, 0x40);
  FUNC_5(VAR_26, &VAR_20,
   VAR_11, 0x0, 0xff, 1, 0x40);
  FUNC_5(VAR_26, &VAR_20,
   VAR_4, 0x0, 0x1e, 1, 0xf);
  FUNC_5(VAR_26, &VAR_20,
   VAR_12, 0x0, 0xff, 1, 0x80);
 } else {
  FUNC_5(VAR_26, &VAR_20,
   VAR_2, 0x0, 0xff, 1, 0x86);
  FUNC_5(VAR_26, &VAR_20,
   VAR_3, 0x0, 0xff, 1, 0x80);
  FUNC_5(VAR_26, &VAR_20,
   VAR_11, 0x0, 0xff, 1, 0x80);
  FUNC_5(VAR_26, &VAR_20,
   VAR_4, 0x0, 0xff, 1, 0x80);
  FUNC_5(VAR_26, &VAR_20,
   VAR_12, 0x0, 0xff, 1, 0x80);
 }

 FUNC_6(VAR_26, &VAR_20,
  VAR_6,
  VAR_15,
  0x1, VAR_15);
 FUNC_6(VAR_26, &VAR_20,
  VAR_5,
  VAR_27 ? VAR_14 : VAR_13,
  0x7, VAR_27 ? VAR_23->options.audio_codec : VAR_13);
 FUNC_6(VAR_26, &VAR_20,
  VAR_10,
  VAR_17, 0x3,
  VAR_17);

 VAR_23->video_mode = FUNC_6(VAR_26, &VAR_20,
  VAR_8,
  VAR_16, 0,
  VAR_16);

 VAR_23->video_bitrate = FUNC_5(VAR_26, &VAR_20,
  VAR_7,
  1000000, 13500000, 100000, 6500000);
 VAR_23->video_bitrate_peak = FUNC_5(VAR_26, &VAR_20,
  VAR_9,
  1100000, 20200000, 100000, 9000000);
 VAR_23->v4l2_dev.ctrl_handler = VAR_26;
 if (VAR_26->error) {
  VAR_28 = VAR_26->error;
  FUNC_7(&VAR_23->v4l2_dev, "Could not register controls\n");
  goto error;
 }
 FUNC_1(3, &VAR_23->video_mode);
 VAR_28 = FUNC_4(VAR_26);
 if (VAR_28 < 0) {
  FUNC_7(&VAR_23->v4l2_dev, "Could not setup controls\n");
  goto error;
 }


 VAR_23->video_dev = VAR_22;
 FUNC_0(VAR_23->video_dev.name, "Hauppauge HD PVR",
  sizeof(VAR_23->video_dev.name));
 VAR_23->video_dev.v4l2_dev = &VAR_23->v4l2_dev;
 FUNC_9(&VAR_23->video_dev, VAR_23);

 VAR_28 = FUNC_8(&VAR_23->video_dev, VAR_19, VAR_25);
 if (VAR_28 < 0) {
  FUNC_7(&VAR_23->v4l2_dev, "video_device registration failed\n");
  goto error;
 }

 return 0;
error:
 FUNC_2(VAR_26);
 return VAR_28;
}
