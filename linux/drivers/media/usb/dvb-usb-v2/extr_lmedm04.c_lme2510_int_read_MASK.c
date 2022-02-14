
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_host_endpoint {int desc; } ;
struct lme2510_state {TYPE_1__* lme_urb; int int_buffer; } ;
struct dvb_usb_device {int udev; } ;
struct dvb_usb_adapter {int dummy; } ;
struct TYPE_4__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct lme2510_state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int,int ,struct dvb_usb_adapter*,int) ;
 struct usb_host_endpoint* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_10(struct dvb_usb_adapter *VAR_4)
{
 struct dvb_usb_device *VAR_5 = FUNC_0(VAR_4);
 struct lme2510_state *VAR_6 = FUNC_1(VAR_4);
 struct usb_host_endpoint *VAR_7;

 VAR_6->lme_urb = FUNC_3(0, VAR_1);

 if (VAR_6->lme_urb == ((void*)0))
   return -VAR_0;

 FUNC_5(VAR_6->lme_urb,
    VAR_5->udev,
    FUNC_8(VAR_5->udev, 0xa),
    VAR_6->int_buffer,
    sizeof(VAR_6->int_buffer),
    VAR_3,
    VAR_4,
    8);


 VAR_7 = FUNC_6(VAR_5->udev, VAR_6->lme_urb->pipe);

 if (FUNC_4(&VAR_7->desc) == VAR_2)
  VAR_6->lme_urb->pipe = FUNC_7(VAR_5->udev, 0xa),

 FUNC_9(VAR_6->lme_urb, VAR_1);
 FUNC_2("INT Interrupt Service Started");

 return 0;
}
