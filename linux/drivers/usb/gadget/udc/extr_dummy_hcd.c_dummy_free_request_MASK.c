
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct dummy_request {int queue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dummy_request*) ;
 int FUNC_2 (int *) ;
 struct dummy_request* FUNC_3 (struct usb_request*) ;

__attribute__((used)) static void FUNC_4(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct dummy_request *VAR_2;

 if (!VAR_0 || !VAR_1) {
  FUNC_0(1);
  return;
 }

 VAR_2 = FUNC_3(VAR_1);
 FUNC_0(!FUNC_2(&VAR_2->queue));
 FUNC_1(VAR_2);
}
