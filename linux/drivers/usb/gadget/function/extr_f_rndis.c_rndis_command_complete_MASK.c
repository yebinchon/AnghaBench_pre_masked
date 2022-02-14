
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_request {int length; int actual; scalar_t__ buf; struct f_rndis* context; } ;
struct usb_ep {int dummy; } ;
struct f_rndis {int params; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct f_rndis *VAR_2 = VAR_1->context;
 int VAR_3;



 VAR_3 = FUNC_1(VAR_2->params, (u8 *) VAR_1->buf);
 if (VAR_3 < 0)
  FUNC_0("RNDIS command error %d, %d/%d\n",
   VAR_3, VAR_1->actual, VAR_1->length);

}
