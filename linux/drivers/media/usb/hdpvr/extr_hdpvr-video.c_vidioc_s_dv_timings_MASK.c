
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_dv_timings {int dummy; } ;
struct hdpvr_fh {int legacy_mode; } ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_8__ {TYPE_2__ bt; } ;
struct TYPE_6__ {scalar_t__ video_input; } ;
struct hdpvr_device {scalar_t__ status; int height; int width; TYPE_3__ cur_dv_timings; TYPE_1__ options; } ;
struct file {int dummy; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_1 (struct v4l2_dv_timings*,TYPE_3__*,int ,int) ;
 struct hdpvr_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
        struct v4l2_dv_timings *VAR_7)
{
 struct hdpvr_device *VAR_8 = FUNC_2(VAR_5);
 struct hdpvr_fh *VAR_9 = VAR_6;
 int VAR_10;

 VAR_9->legacy_mode = 0;
 if (VAR_8->options.video_input)
  return -VAR_2;
 if (VAR_8->status != VAR_3)
  return -VAR_0;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++)
  if (FUNC_1(VAR_7, VAR_4 + VAR_10, 0, 0))
   break;
 if (VAR_10 == FUNC_0(VAR_4))
  return -VAR_1;
 VAR_8->cur_dv_timings = VAR_4[VAR_10];
 VAR_8->width = VAR_4[VAR_10].bt.width;
 VAR_8->height = VAR_4[VAR_10].bt.height;
 return 0;
}
