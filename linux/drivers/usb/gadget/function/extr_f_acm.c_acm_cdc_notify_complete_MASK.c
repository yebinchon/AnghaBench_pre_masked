
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_request {int status; struct f_acm* context; } ;
struct usb_ep {int dummy; } ;
struct f_acm {int pending; int lock; struct usb_request* notify_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct f_acm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct f_acm *VAR_3 = VAR_2->context;
 u8 VAR_4 = 0;




 FUNC_1(&VAR_3->lock);
 if (VAR_2->status != -VAR_0)
  VAR_4 = VAR_3->pending;
 VAR_3->notify_req = VAR_2;
 FUNC_2(&VAR_3->lock);

 if (VAR_4)
  FUNC_0(VAR_3);
}
