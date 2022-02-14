
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_bt_timings {scalar_t__ width; scalar_t__ height; int interlaced; scalar_t__ pixelclock; } ;
struct v4l2_dv_timings {struct v4l2_bt_timings bt; } ;
struct hdpvr_video_info {int fps; scalar_t__ width; scalar_t__ height; int valid; } ;
struct hdpvr_fh {int legacy_mode; } ;
struct TYPE_2__ {scalar_t__ video_input; } ;
struct hdpvr_device {TYPE_1__ options; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct v4l2_dv_timings*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct v4l2_bt_timings const*) ;
 unsigned int FUNC_2 (struct v4l2_bt_timings const*) ;
 int FUNC_3 (struct hdpvr_device*,struct hdpvr_video_info*) ;
 struct v4l2_dv_timings* VAR_3 ;
 struct hdpvr_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5,
        struct v4l2_dv_timings *VAR_6)
{
 struct hdpvr_device *VAR_7 = FUNC_4(VAR_4);
 struct hdpvr_fh *VAR_8 = VAR_5;
 struct hdpvr_video_info VAR_9;
 bool VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_8->legacy_mode = 0;
 if (VAR_7->options.video_input)
  return -VAR_0;
 VAR_11 = FUNC_3(VAR_7, &VAR_9);
 if (VAR_11)
  return VAR_11;
 if (!VAR_9.valid)
  return -VAR_1;
 VAR_10 = VAR_9.fps <= 30;
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++) {
  const struct v4l2_bt_timings *VAR_13 = &VAR_3[VAR_12].bt;
  unsigned VAR_14;
  unsigned VAR_15;
  unsigned VAR_16;

  VAR_14 = FUNC_2(VAR_13);
  VAR_15 = FUNC_1(VAR_13);
  VAR_16 = (unsigned)VAR_13->pixelclock / (VAR_14 * VAR_15);
  if (VAR_13->width != VAR_9.width ||
      VAR_13->height != VAR_9.height ||
      VAR_13->interlaced != VAR_10 ||
      (VAR_16 != VAR_9.fps && VAR_16 + 1 != VAR_9.fps))
   continue;
  *VAR_6 = VAR_3[VAR_12];
  break;
 }
 if (VAR_12 == FUNC_0(VAR_3))
  VAR_11 = -VAR_2;

 return VAR_11;
}
