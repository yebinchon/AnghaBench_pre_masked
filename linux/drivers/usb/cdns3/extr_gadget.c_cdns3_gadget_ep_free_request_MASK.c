
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct cdns3_request {TYPE_1__* aligned_buf; } ;
struct TYPE_2__ {scalar_t__ in_use; } ;


 int FUNC_0 (struct cdns3_request*) ;
 struct cdns3_request* FUNC_1 (struct usb_request*) ;
 int FUNC_2 (struct cdns3_request*) ;

void FUNC_3(struct usb_ep *VAR_0,
      struct usb_request *VAR_1)
{
 struct cdns3_request *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->aligned_buf)
  VAR_2->aligned_buf->in_use = 0;

 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
}
