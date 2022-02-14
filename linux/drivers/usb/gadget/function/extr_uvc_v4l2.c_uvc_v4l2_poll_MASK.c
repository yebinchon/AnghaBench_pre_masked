
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_2__ {int queue; } ;
struct uvc_device {TYPE_1__ video; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (int *,struct file*,int *) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct uvc_device* FUNC_2 (struct video_device*) ;

__attribute__((used)) static __poll_t
FUNC_3(struct file *VAR_0, poll_table *VAR_1)
{
 struct video_device *VAR_2 = FUNC_1(VAR_0);
 struct uvc_device *VAR_3 = FUNC_2(VAR_2);

 return FUNC_0(&VAR_3->video.queue, VAR_0, VAR_1);
}
