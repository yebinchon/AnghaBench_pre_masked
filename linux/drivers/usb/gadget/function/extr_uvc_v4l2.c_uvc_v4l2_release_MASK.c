
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct uvc_video {int mutex; int queue; } ;
struct uvc_file_handle {int vfh; struct uvc_video* device; } ;
struct uvc_device {int dummy; } ;
struct file {int * private_data; } ;


 int FUNC_0 (struct uvc_file_handle*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct uvc_file_handle* FUNC_3 (int *) ;
 int FUNC_4 (struct uvc_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uvc_video*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct video_device* FUNC_9 (struct file*) ;
 struct uvc_device* FUNC_10 (struct video_device*) ;

__attribute__((used)) static int
FUNC_11(struct file *VAR_0)
{
 struct video_device *VAR_1 = FUNC_9(VAR_0);
 struct uvc_device *VAR_2 = FUNC_10(VAR_1);
 struct uvc_file_handle *VAR_3 = FUNC_3(VAR_0->private_data);
 struct uvc_video *VAR_4 = VAR_3->device;

 FUNC_4(VAR_2);

 FUNC_1(&VAR_4->mutex);
 FUNC_6(VAR_4, 0);
 FUNC_5(&VAR_4->queue);
 FUNC_2(&VAR_4->mutex);

 VAR_0->private_data = ((void*)0);
 FUNC_7(&VAR_3->vfh);
 FUNC_8(&VAR_3->vfh);
 FUNC_0(VAR_3);

 return 0;
}
