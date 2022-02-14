
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int min_width; int max_width; int min_height; int max_height; int min_pixelclock; int max_pixelclock; int capabilities; int standards; } ;
struct v4l2_dv_timings_cap {TYPE_2__ bt; int type; } ;
struct hdpvr_fh {int legacy_mode; } ;
struct TYPE_3__ {scalar_t__ video_input; } ;
struct hdpvr_device {TYPE_1__ options; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hdpvr_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
        struct v4l2_dv_timings_cap *VAR_7)
{
 struct hdpvr_device *VAR_8 = FUNC_0(VAR_5);
 struct hdpvr_fh *VAR_9 = VAR_6;

 VAR_9->legacy_mode = 0;
 if (VAR_8->options.video_input)
  return -VAR_0;
 VAR_7->type = VAR_1;
 VAR_7->bt.min_width = 720;
 VAR_7->bt.max_width = 1920;
 VAR_7->bt.min_height = 480;
 VAR_7->bt.max_height = 1080;
 VAR_7->bt.min_pixelclock = 27000000;
 VAR_7->bt.max_pixelclock = 74250000;
 VAR_7->bt.standards = VAR_4;
 VAR_7->bt.capabilities = VAR_2 | VAR_3;
 return 0;
}
