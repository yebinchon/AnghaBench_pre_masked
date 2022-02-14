
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int dummy; } ;
struct renesas_usb3 {int lock; } ;


 int FUNC_0 (struct renesas_usb3_ep*,struct renesas_usb3_request*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct renesas_usb3* FUNC_3 (struct renesas_usb3_ep*) ;

__attribute__((used)) static void FUNC_4(struct renesas_usb3_ep *VAR_0,
         struct renesas_usb3_request *VAR_1, int VAR_2)
{
 struct renesas_usb3 *VAR_3 = FUNC_3(VAR_0);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_3->lock, VAR_4);
}
