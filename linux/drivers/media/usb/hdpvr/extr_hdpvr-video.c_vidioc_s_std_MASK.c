
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef int u8 ;
struct hdpvr_fh {int legacy_mode; } ;
struct TYPE_2__ {scalar_t__ video_input; } ;
struct hdpvr_device {scalar_t__ status; int cur_std; int width; int height; TYPE_1__ options; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdpvr_device*,int ,int) ;
 struct hdpvr_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
   v4l2_std_id VAR_8)
{
 struct hdpvr_device *VAR_9 = FUNC_1(VAR_6);
 struct hdpvr_fh *VAR_10 = VAR_7;
 u8 VAR_11 = 1;

 if (!VAR_10->legacy_mode && VAR_9->options.video_input == VAR_3)
  return -VAR_2;
 if (VAR_9->status != VAR_4)
  return -VAR_1;
 if (VAR_8 & VAR_5)
  VAR_11 = 0;
 VAR_9->cur_std = VAR_8;
 VAR_9->width = 720;
 VAR_9->height = VAR_11 ? 576 : 480;

 return FUNC_0(VAR_9, VAR_0, VAR_11);
}
