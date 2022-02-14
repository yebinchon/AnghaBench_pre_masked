
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct uvc_streaming {struct uvc_device* dev; } ;
struct uvc_device {int ref; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct uvc_streaming* FUNC_1 (struct video_device*) ;

__attribute__((used)) static void FUNC_2(struct video_device *VAR_1)
{
 struct uvc_streaming *VAR_2 = FUNC_1(VAR_1);
 struct uvc_device *VAR_3 = VAR_2->dev;

 FUNC_0(&VAR_3->ref, VAR_0);
}
