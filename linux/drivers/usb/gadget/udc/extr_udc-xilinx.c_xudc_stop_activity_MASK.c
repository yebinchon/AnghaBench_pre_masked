
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xusb_udc {struct xusb_ep* ep; } ;
struct xusb_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xusb_ep*,int ) ;

__attribute__((used)) static void FUNC_1(struct xusb_udc *VAR_2)
{
 int VAR_3;
 struct xusb_ep *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = &VAR_2->ep[VAR_3];
  FUNC_0(VAR_4, -VAR_0);
 }
}
