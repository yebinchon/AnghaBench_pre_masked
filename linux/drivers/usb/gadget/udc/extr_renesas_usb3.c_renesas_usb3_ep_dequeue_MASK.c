
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int length; } ;
struct usb_ep {int dummy; } ;
struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int num; } ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 struct renesas_usb3* FUNC_2 (struct renesas_usb3_ep*) ;
 int FUNC_3 (struct renesas_usb3*,struct renesas_usb3_ep*,struct renesas_usb3_request*,int ) ;
 int FUNC_4 (struct renesas_usb3*) ;
 struct renesas_usb3_ep* FUNC_5 (struct usb_ep*) ;
 struct renesas_usb3_request* FUNC_6 (struct usb_request*) ;

__attribute__((used)) static int FUNC_7(struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct renesas_usb3_ep *VAR_3 = FUNC_5(VAR_1);
 struct renesas_usb3_request *VAR_4 = FUNC_6(VAR_2);
 struct renesas_usb3 *VAR_5 = FUNC_2(VAR_3);

 FUNC_0(FUNC_4(VAR_5), "ep_dequeue: ep%2d, %u\n", VAR_3->num,
  VAR_2->length);

 FUNC_1(VAR_3, VAR_4);
 FUNC_3(VAR_5, VAR_3, VAR_4, -VAR_0);

 return 0;
}
