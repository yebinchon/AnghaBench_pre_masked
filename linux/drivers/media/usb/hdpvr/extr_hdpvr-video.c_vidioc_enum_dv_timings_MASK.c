
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_enum_dv_timings {size_t index; int timings; int reserved; } ;
struct hdpvr_fh {int legacy_mode; } ;
struct TYPE_2__ {scalar_t__ video_input; } ;
struct hdpvr_device {TYPE_1__ options; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 struct hdpvr_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
        struct v4l2_enum_dv_timings *VAR_5)
{
 struct hdpvr_device *VAR_6 = FUNC_2(VAR_3);
 struct hdpvr_fh *VAR_7 = VAR_4;

 VAR_7->legacy_mode = 0;
 FUNC_1(VAR_5->reserved, 0, sizeof(VAR_5->reserved));
 if (VAR_6->options.video_input)
  return -VAR_1;
 if (VAR_5->index >= FUNC_0(VAR_2))
  return -VAR_0;
 VAR_5->timings = VAR_2[VAR_5->index];
 return 0;
}
