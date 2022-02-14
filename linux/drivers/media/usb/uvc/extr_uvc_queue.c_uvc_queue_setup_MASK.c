
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct uvc_video_queue {int dummy; } ;
struct TYPE_2__ {unsigned int dwMaxVideoFrameSize; } ;
struct uvc_streaming {TYPE_1__ ctrl; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

 struct uvc_streaming* FUNC_0 (struct uvc_video_queue*) ;
 struct uvc_video_queue* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_2,
      unsigned int *VAR_3, unsigned int *VAR_4,
      unsigned int VAR_5[], struct device *VAR_6[])
{
 struct uvc_video_queue *VAR_7 = FUNC_1(VAR_2);
 struct uvc_streaming *VAR_8;
 unsigned int VAR_9;

 switch (VAR_2->type) {
 case 128:
  VAR_9 = VAR_1;
  break;

 default:
  VAR_8 = FUNC_0(VAR_7);
  VAR_9 = VAR_8->ctrl.dwMaxVideoFrameSize;
  break;
 }






 if (*VAR_4)
  return *VAR_4 != 1 || VAR_5[0] < VAR_9 ? -VAR_0 : 0;

 *VAR_4 = 1;
 VAR_5[0] = VAR_9;
 return 0;
}
