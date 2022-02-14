
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct isp1760_udc {int lock; } ;
struct isp1760_ep {struct isp1760_udc* udc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct isp1760_ep* FUNC_0 (struct usb_ep*) ;
 int FUNC_1 (struct isp1760_ep*) ;
 int FUNC_2 (struct isp1760_udc*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct usb_ep *VAR_2)
{
 struct isp1760_ep *VAR_3 = FUNC_0(VAR_2);
 struct isp1760_udc *VAR_4 = VAR_3->udc;
 unsigned long VAR_5;

 FUNC_3(&VAR_4->lock, VAR_5);

 FUNC_1(VAR_3);





 FUNC_2(VAR_4, VAR_1, VAR_0);
 FUNC_2(VAR_4, VAR_1, VAR_0);

 FUNC_4(&VAR_4->lock, VAR_5);
}
