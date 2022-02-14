
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_2__ {int queue; } ;
struct uvc_device {TYPE_1__ video; } ;
struct file {int dummy; } ;


 unsigned long FUNC_0 (int *,unsigned long) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct uvc_device* FUNC_2 (struct video_device*) ;

__attribute__((used)) static unsigned long FUNC_3(struct file *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 struct video_device *VAR_5 = FUNC_1(VAR_0);
 struct uvc_device *VAR_6 = FUNC_2(VAR_5);

 return FUNC_0(&VAR_6->video.queue, VAR_3);
}
