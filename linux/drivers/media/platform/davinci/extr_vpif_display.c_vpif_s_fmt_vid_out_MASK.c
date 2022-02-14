
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct v4l2_pix_format {int dummy; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct common_obj {struct v4l2_format fmt; int buffer_queue; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct channel_obj* FUNC_2 (struct video_device*) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct video_device *VAR_5 = FUNC_1(VAR_2);
 struct channel_obj *VAR_6 = FUNC_2(VAR_5);
 struct common_obj *VAR_7 = &VAR_6->common[VAR_1];
 struct v4l2_pix_format *VAR_8 = &VAR_4->fmt.pix;
 int VAR_9;

 if (FUNC_0(&VAR_7->buffer_queue))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_9)
  return VAR_9;


 VAR_7->fmt.fmt.pix = *VAR_8;


 VAR_7->fmt = *VAR_4;
 return 0;
}
