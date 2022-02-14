
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdpvr_video_info {int fps; int height; int width; int valid; } ;
struct TYPE_2__ {int video_input; } ;
struct hdpvr_device {scalar_t__ status; int v4l2_dev; int worker; int udev; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct hdpvr_device*,struct hdpvr_video_info*) ;
 int FUNC_2 (struct hdpvr_device*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int,int,int,int ,int *,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int *,char*,...) ;

__attribute__((used)) static int FUNC_8(struct hdpvr_device *VAR_8)
{
 int VAR_9;
 struct hdpvr_video_info VAR_10;

 if (VAR_8->status == VAR_5)
  return 0;
 if (VAR_8->status != VAR_4)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_8, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 if (!VAR_10.valid) {
  FUNC_3(250);
  FUNC_7(VAR_3, VAR_6, &VAR_8->v4l2_dev,
    "no video signal at input %d\n", VAR_8->options.video_input);
  return -VAR_1;
 }

 FUNC_7(VAR_2, VAR_6, &VAR_8->v4l2_dev,
   "video signal: %dx%d@%dhz\n", VAR_10.width,
   VAR_10.height, VAR_10.fps);


 VAR_9 = FUNC_5(VAR_8->udev,
   FUNC_6(VAR_8->udev, 0),
   0xb8, 0x38, 0x1, 0, ((void*)0), 0, 8000);
 FUNC_7(VAR_2, VAR_6, &VAR_8->v4l2_dev,
   "encoder start control request returned %d\n", VAR_9);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_8, VAR_0, 0x00);
 if (VAR_9)
  return VAR_9;

 VAR_8->status = VAR_5;

 FUNC_0(&VAR_8->worker, VAR_7);
 FUNC_4(&VAR_8->worker);

 FUNC_7(VAR_2, VAR_6, &VAR_8->v4l2_dev,
   "streaming started\n");

 return 0;
}
