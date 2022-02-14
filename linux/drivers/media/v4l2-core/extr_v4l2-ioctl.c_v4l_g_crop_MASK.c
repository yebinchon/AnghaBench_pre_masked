
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int flags; } ;
struct v4l2_selection {scalar_t__ target; int r; int type; } ;
struct v4l2_ioctl_ops {int dummy; } ;
struct v4l2_crop {int c; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct v4l2_ioctl_ops const*,struct file*,void*,struct v4l2_selection*) ;
 struct video_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(const struct v4l2_ioctl_ops *VAR_3,
    struct file *VAR_4, void *VAR_5, void *VAR_6)
{
 struct video_device *VAR_7 = FUNC_3(VAR_4);
 struct v4l2_crop *VAR_8 = VAR_6;
 struct v4l2_selection VAR_9 = {
  .type = VAR_8->type,
 };
 int VAR_10;




 if (FUNC_0(VAR_8->type))
  VAR_9.target = VAR_1;
 else
  VAR_9.target = VAR_2;

 if (FUNC_1(VAR_0, &VAR_7->flags))
  VAR_9.target = VAR_9.target == VAR_1 ?
   VAR_2 : VAR_1;

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, &VAR_9);


 if (!VAR_10)
  VAR_8->c = VAR_9.r;
 return VAR_10;
}
