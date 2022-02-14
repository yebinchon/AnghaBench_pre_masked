
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct hdpvr_video_info {int width; int height; scalar_t__ valid; } ;
struct hdpvr_fh {scalar_t__ legacy_mode; } ;
struct TYPE_2__ {scalar_t__ video_input; } ;
struct hdpvr_device {TYPE_1__ options; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hdpvr_device*,struct hdpvr_video_info*) ;
 struct hdpvr_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6, v4l2_std_id *VAR_7)
{
 struct hdpvr_device *VAR_8 = FUNC_1(VAR_5);
 struct hdpvr_video_info VAR_9;
 struct hdpvr_fh *VAR_10 = VAR_6;
 int VAR_11;

 *VAR_7 = VAR_4;
 if (VAR_8->options.video_input == VAR_1)
  return VAR_10->legacy_mode ? 0 : -VAR_0;
 VAR_11 = FUNC_0(VAR_8, &VAR_9);
 if (VAR_9.valid && VAR_9.width == 720 &&
     (VAR_9.height == 480 || VAR_9.height == 576)) {
  *VAR_7 = (VAR_9.height == 480) ?
   VAR_2 : VAR_3;
 }
 return VAR_11;
}
