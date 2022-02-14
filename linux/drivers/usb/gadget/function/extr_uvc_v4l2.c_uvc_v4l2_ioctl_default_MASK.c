
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct uvc_device {int dummy; } ;
struct file {int dummy; } ;


 long VAR_0 ;

 long FUNC_0 (struct uvc_device*,void*) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct uvc_device* FUNC_2 (struct video_device*) ;

__attribute__((used)) static long
FUNC_3(struct file *VAR_1, void *VAR_2, bool VAR_3,
         unsigned int VAR_4, void *VAR_5)
{
 struct video_device *VAR_6 = FUNC_1(VAR_1);
 struct uvc_device *VAR_7 = FUNC_2(VAR_6);

 switch (VAR_4) {
 case 128:
  return FUNC_0(VAR_7, VAR_5);

 default:
  return -VAR_0;
 }
}
