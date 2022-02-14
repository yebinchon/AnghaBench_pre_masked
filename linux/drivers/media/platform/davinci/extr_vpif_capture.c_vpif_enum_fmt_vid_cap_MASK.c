
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct v4l2_fmtdesc {scalar_t__ index; int pixelformat; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ if_type; } ;
struct TYPE_4__ {TYPE_1__ iface; } ;
struct channel_obj {TYPE_2__ vpifparams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct channel_obj* FUNC_1 (struct video_device*) ;
 int FUNC_2 (int,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
     struct v4l2_fmtdesc *VAR_7)
{
 struct video_device *VAR_8 = FUNC_0(VAR_5);
 struct channel_obj *VAR_9 = FUNC_1(VAR_8);

 if (VAR_7->index != 0) {
  FUNC_2(1, VAR_4, "Invalid format index\n");
  return -VAR_0;
 }


 if (VAR_9->vpifparams.iface.if_type == VAR_3)
  VAR_7->pixelformat = VAR_2;
 else
  VAR_7->pixelformat = VAR_1;
 return 0;
}
