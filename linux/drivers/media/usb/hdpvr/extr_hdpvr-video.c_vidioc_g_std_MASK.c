
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct hdpvr_fh {int legacy_mode; } ;
struct TYPE_2__ {scalar_t__ video_input; } ;
struct hdpvr_device {int cur_std; TYPE_1__ options; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hdpvr_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
   v4l2_std_id *VAR_4)
{
 struct hdpvr_device *VAR_5 = FUNC_0(VAR_2);
 struct hdpvr_fh *VAR_6 = VAR_3;

 if (!VAR_6->legacy_mode && VAR_5->options.video_input == VAR_1)
  return -VAR_0;
 *VAR_4 = VAR_5->cur_std;
 return 0;
}
