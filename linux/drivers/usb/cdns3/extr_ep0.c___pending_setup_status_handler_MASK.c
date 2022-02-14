
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int (* complete ) (int *,struct usb_request*) ;} ;
struct cdns3_device {scalar_t__ status_completion_no_call; TYPE_1__** eps; struct usb_request* pending_status_request; } ;
struct TYPE_2__ {int endpoint; } ;


 int FUNC_0 (int *,struct usb_request*) ;

__attribute__((used)) static void FUNC_1(struct cdns3_device *VAR_0)
{
 struct usb_request *VAR_1 = VAR_0->pending_status_request;

 if (VAR_0->status_completion_no_call && VAR_1 &&
     VAR_1->complete) {
  VAR_1->complete(&VAR_0->eps[0]->endpoint, VAR_1);
  VAR_0->status_completion_no_call = 0;
 }
}
