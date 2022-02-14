
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvc_video {TYPE_2__* ep; TYPE_1__* uvc; } ;
struct usb_request {int dummy; } ;
struct TYPE_5__ {int desc; } ;
struct TYPE_4__ {int func; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,struct usb_request*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(struct uvc_video *VAR_1, struct usb_request *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->ep, VAR_2, VAR_0);
 if (VAR_3 < 0) {
  FUNC_3(&VAR_1->uvc->func, "Failed to queue request (%d).\n",
    VAR_3);


  if (FUNC_0(VAR_1->ep->desc))
   FUNC_2(VAR_1->ep);
 }

 return VAR_3;
}
