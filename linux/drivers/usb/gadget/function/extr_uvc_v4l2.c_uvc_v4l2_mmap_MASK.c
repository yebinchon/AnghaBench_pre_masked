
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct video_device {int dummy; } ;
struct TYPE_2__ {int queue; } ;
struct uvc_device {TYPE_1__ video; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,struct vm_area_struct*) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct uvc_device* FUNC_2 (struct video_device*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct video_device *VAR_2 = FUNC_1(VAR_0);
 struct uvc_device *VAR_3 = FUNC_2(VAR_2);

 return FUNC_0(&VAR_3->video.queue, VAR_1);
}
