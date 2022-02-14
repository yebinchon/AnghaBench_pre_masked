
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video {int bpp; int width; int height; int imagesize; int mutex; int queue; int fcc; struct uvc_device* uvc; int req_lock; int req_free; } ;
struct uvc_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;

int FUNC_3(struct uvc_video *VAR_2, struct uvc_device *VAR_3)
{
 FUNC_0(&VAR_2->req_free);
 FUNC_1(&VAR_2->req_lock);

 VAR_2->uvc = VAR_3;
 VAR_2->fcc = VAR_1;
 VAR_2->bpp = 16;
 VAR_2->width = 320;
 VAR_2->height = 240;
 VAR_2->imagesize = 320 * 240 * 2;


 FUNC_2(&VAR_2->queue, VAR_0,
   &VAR_2->mutex);
 return 0;
}
