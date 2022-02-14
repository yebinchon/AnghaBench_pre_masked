
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * complete; scalar_t__ actual; int status; scalar_t__ length; } ;
struct bdc_req {TYPE_1__ usb_req; struct bdc_ep* ep; } ;
struct bdc_ep {int dummy; } ;
struct bdc {struct bdc_ep** bdc_ep_array; struct bdc_req status_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct bdc*,struct bdc_req*) ;

__attribute__((used)) static int FUNC_1(struct bdc *VAR_1)
{
 struct bdc_req *VAR_2;
 struct bdc_ep *VAR_3;

 VAR_2 = &VAR_1->status_req;
 VAR_3 = VAR_1->bdc_ep_array[1];
 VAR_2->ep = VAR_3;
 VAR_2->usb_req.length = 0;
 VAR_2->usb_req.status = -VAR_0;
 VAR_2->usb_req.actual = 0;
 VAR_2->usb_req.complete = ((void*)0);
 FUNC_0(VAR_1, VAR_2);

 return 0;
}
