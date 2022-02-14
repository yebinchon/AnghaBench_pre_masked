
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbnet {TYPE_2__* status; int data; } ;
struct usb_driver {int dummy; } ;
struct qmi_wwan_state {struct usb_driver* subdriver; TYPE_3__* control; int pmcount; TYPE_3__* data; } ;
struct TYPE_7__ {int dev; TYPE_1__* cur_altsetting; } ;
struct TYPE_6__ {int desc; } ;
struct TYPE_5__ {TYPE_2__* endpoint; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_driver*) ;
 int FUNC_1 (struct usb_driver*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_1 ;
 struct usb_driver* FUNC_4 (TYPE_3__*,int *,int,int *) ;
 int FUNC_5 (struct usbnet*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_2)
{
 int VAR_3;
 struct usb_driver *VAR_4 = ((void*)0);
 struct qmi_wwan_state *VAR_5 = (void *)&VAR_2->data;


 VAR_3 = FUNC_5(VAR_2, VAR_5->data);
 if (VAR_3 < 0)
  goto err;


 if (VAR_5->control != VAR_5->data)
  VAR_2->status = &VAR_5->control->cur_altsetting->endpoint[0];


 if (!VAR_2->status) {
  VAR_3 = -VAR_0;
  goto err;
 }


 FUNC_2(&VAR_5->pmcount, 0);


 VAR_4 = FUNC_4(VAR_5->control, &VAR_2->status->desc,
      4096, &VAR_1);
 if (FUNC_0(VAR_4)) {
  FUNC_3(&VAR_5->control->dev, "subdriver registration failed\n");
  VAR_3 = FUNC_1(VAR_4);
  goto err;
 }


 VAR_2->status = ((void*)0);


 VAR_5->subdriver = VAR_4;

err:
 return VAR_3;
}
