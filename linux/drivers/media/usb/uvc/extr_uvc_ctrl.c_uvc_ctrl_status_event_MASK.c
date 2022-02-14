
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uvc_video_chain {struct uvc_device* dev; } ;
struct uvc_ctrl_work {int work; struct uvc_control* ctrl; struct uvc_video_chain* chain; struct urb* urb; int const* data; } ;
struct uvc_device {struct uvc_ctrl_work async_ctrl; } ;
struct TYPE_2__ {int mappings; } ;
struct uvc_control {int * handle; TYPE_1__ info; } ;
struct urb {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct urb *VAR_0, struct uvc_video_chain *VAR_1,
      struct uvc_control *VAR_2, const u8 *VAR_3)
{
 struct uvc_device *VAR_4 = VAR_1->dev;
 struct uvc_ctrl_work *VAR_5 = &VAR_4->async_ctrl;

 if (FUNC_0(&VAR_2->info.mappings)) {
  VAR_2->handle = ((void*)0);
  return 0;
 }

 VAR_5->data = VAR_3;
 VAR_5->urb = VAR_0;
 VAR_5->chain = VAR_1;
 VAR_5->ctrl = VAR_2;

 FUNC_1(&VAR_5->work);

 return 1;
}
