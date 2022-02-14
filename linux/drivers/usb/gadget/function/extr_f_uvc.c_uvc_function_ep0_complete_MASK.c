
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_event ;
struct TYPE_3__ {int data; } ;
struct v4l2_event {int type; TYPE_1__ u; } ;
struct TYPE_4__ {int data; int length; } ;
struct uvc_event {TYPE_2__ data; } ;
struct uvc_device {int vdev; scalar_t__ event_setup_out; } ;
struct usb_request {int actual; int buf; struct uvc_device* context; } ;
struct usb_ep {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct v4l2_event*,int ,int) ;
 int FUNC_2 (int *,struct v4l2_event*) ;

__attribute__((used)) static void
FUNC_3(struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct uvc_device *VAR_3 = VAR_2->context;
 struct v4l2_event VAR_4;
 struct uvc_event *VAR_5 = (void *)&VAR_4.u.data;

 if (VAR_3->event_setup_out) {
  VAR_3->event_setup_out = 0;

  FUNC_1(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.type = VAR_0;
  VAR_5->data.length = VAR_2->actual;
  FUNC_0(&VAR_5->data.data, VAR_2->buf, VAR_2->actual);
  FUNC_2(&VAR_3->vdev, &VAR_4);
 }
}
