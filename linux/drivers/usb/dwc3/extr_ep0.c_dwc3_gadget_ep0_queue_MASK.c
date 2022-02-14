
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct dwc3_request {int dummy; } ;
struct TYPE_2__ {int desc; } ;
struct dwc3_ep {int pending_list; int name; TYPE_1__ endpoint; struct dwc3* dwc; } ;
struct dwc3 {int lock; int dev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc3_ep*,struct dwc3_request*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct dwc3_ep* FUNC_5 (struct usb_ep*) ;
 struct dwc3_request* FUNC_6 (struct usb_request*) ;

int FUNC_7(struct usb_ep *VAR_2, struct usb_request *VAR_3,
  gfp_t VAR_4)
{
 struct dwc3_request *VAR_5 = FUNC_6(VAR_3);
 struct dwc3_ep *VAR_6 = FUNC_5(VAR_2);
 struct dwc3 *VAR_7 = VAR_6->dwc;

 unsigned long VAR_8;

 int VAR_9;

 FUNC_3(&VAR_7->lock, VAR_8);
 if (!VAR_6->endpoint.desc) {
  FUNC_1(VAR_7->dev, "%s: can't queue to disabled endpoint\n",
    VAR_6->name);
  VAR_9 = -VAR_1;
  goto out;
 }


 if (!FUNC_2(&VAR_6->pending_list)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_0(VAR_6, VAR_5);

out:
 FUNC_4(&VAR_7->lock, VAR_8);

 return VAR_9;
}
