
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct uvc_file_handle {int vfh; int * device; } ;
struct uvc_device {int video; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uvc_file_handle* FUNC_0 (int,int ) ;
 int FUNC_1 (struct uvc_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct video_device*) ;
 struct video_device* FUNC_4 (struct file*) ;
 struct uvc_device* FUNC_5 (struct video_device*) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_2)
{
 struct video_device *VAR_3 = FUNC_4(VAR_2);
 struct uvc_device *VAR_4 = FUNC_5(VAR_3);
 struct uvc_file_handle *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_3(&VAR_5->vfh, VAR_3);
 FUNC_2(&VAR_5->vfh);

 VAR_5->device = &VAR_4->video;
 VAR_2->private_data = &VAR_5->vfh;

 FUNC_1(VAR_4);
 return 0;
}
