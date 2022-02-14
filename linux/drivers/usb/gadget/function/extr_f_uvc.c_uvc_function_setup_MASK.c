
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_event ;
struct TYPE_2__ {int data; } ;
struct v4l2_event {int type; TYPE_1__ u; } ;
struct uvc_event {int req; } ;
struct uvc_device {int event_setup_out; int vdev; scalar_t__ event_length; } ;
struct usb_function {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; int wLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,struct usb_ctrlrequest const*,int) ;
 int FUNC_2 (struct v4l2_event*,int ,int) ;
 struct uvc_device* FUNC_3 (struct usb_function*) ;
 int FUNC_4 (struct usb_function*,char*) ;
 int FUNC_5 (int *,struct v4l2_event*) ;

__attribute__((used)) static int
FUNC_6(struct usb_function *VAR_6, const struct usb_ctrlrequest *VAR_7)
{
 struct uvc_device *VAR_8 = FUNC_3(VAR_6);
 struct v4l2_event VAR_9;
 struct uvc_event *VAR_10 = (void *)&VAR_9.u.data;

 if ((VAR_7->bRequestType & VAR_3) != VAR_2) {
  FUNC_4(VAR_6, "invalid request type\n");
  return -VAR_0;
 }


 if (FUNC_0(VAR_7->wLength) > VAR_5)
  return -VAR_0;




 VAR_8->event_setup_out = !(VAR_7->bRequestType & VAR_1);
 VAR_8->event_length = FUNC_0(VAR_7->wLength);

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.type = VAR_4;
 FUNC_1(&VAR_10->req, VAR_7, sizeof(VAR_10->req));
 FUNC_5(&VAR_8->vdev, &VAR_9);

 return 0;
}
