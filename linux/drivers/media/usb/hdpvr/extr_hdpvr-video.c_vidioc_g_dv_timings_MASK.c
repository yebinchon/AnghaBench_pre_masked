
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_dv_timings {int dummy; } ;
struct hdpvr_fh {int legacy_mode; } ;
struct TYPE_2__ {scalar_t__ video_input; } ;
struct hdpvr_device {struct v4l2_dv_timings cur_dv_timings; TYPE_1__ options; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct hdpvr_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
        struct v4l2_dv_timings *VAR_3)
{
 struct hdpvr_device *VAR_4 = FUNC_0(VAR_1);
 struct hdpvr_fh *VAR_5 = VAR_2;

 VAR_5->legacy_mode = 0;
 if (VAR_4->options.video_input)
  return -VAR_0;
 *VAR_3 = VAR_4->cur_dv_timings;
 return 0;
}
