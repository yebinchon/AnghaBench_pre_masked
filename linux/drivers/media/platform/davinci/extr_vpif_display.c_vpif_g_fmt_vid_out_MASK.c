
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct v4l2_format {scalar_t__ type; } ;
struct file {int dummy; } ;
struct common_obj {struct v4l2_format fmt; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct channel_obj* FUNC_1 (struct video_device*) ;
 scalar_t__ FUNC_2 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct video_device *VAR_5 = FUNC_0(VAR_2);
 struct channel_obj *VAR_6 = FUNC_1(VAR_5);
 struct common_obj *VAR_7 = &VAR_6->common[VAR_1];


 if (VAR_7->fmt.type != VAR_4->type)
  return -VAR_0;

 if (FUNC_2(VAR_6))
  return -VAR_0;
 *VAR_4 = VAR_7->fmt;
 return 0;
}
