
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int dummy; } ;
struct f_midi {int in_ep; int in_req_fifo; int out_ep; } ;
struct TYPE_2__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 int FUNC_1 (struct f_midi*) ;
 int FUNC_2 (int ,struct usb_request*) ;
 struct f_midi* FUNC_3 (struct usb_function*) ;
 scalar_t__ FUNC_4 (int *,struct usb_request**) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct usb_function *VAR_0)
{
 struct f_midi *VAR_1 = FUNC_3(VAR_0);
 struct usb_composite_dev *VAR_2 = VAR_0->config->cdev;
 struct usb_request *VAR_3 = ((void*)0);

 FUNC_0(VAR_2, "disable\n");





 FUNC_5(VAR_1->in_ep);
 FUNC_5(VAR_1->out_ep);


 while (FUNC_4(&VAR_1->in_req_fifo, &VAR_3))
  FUNC_2(VAR_1->in_ep, VAR_3);

 FUNC_1(VAR_1);
}
