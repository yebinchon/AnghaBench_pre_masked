
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct usb_request {int actual; unsigned int length; int * buf; } ;
struct TYPE_3__ {unsigned int maxpacket; } ;
struct udc_ep {TYPE_2__* regs; int * txfifo; TYPE_1__ ep; } ;
struct TYPE_4__ {int confirm; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void
FUNC_3(struct udc_ep *VAR_2, struct usb_request *VAR_3)
{
 u8 *VAR_4;
 u32 *VAR_5;
 int VAR_6, VAR_7;
 unsigned VAR_8 = 0;
 unsigned VAR_9 = 0;

 if (!VAR_3 || !VAR_2)
  return;

 VAR_4 = VAR_3->buf + VAR_3->actual;
 FUNC_0(VAR_4);
 VAR_9 = VAR_3->length - VAR_3->actual;

 VAR_5 = (u32 *) VAR_4;

 VAR_8 = VAR_2->ep.maxpacket;
 if (VAR_8 > VAR_9)
  VAR_8 = VAR_9;


 for (VAR_6 = 0; VAR_6 < VAR_8 / VAR_1; VAR_6++)
  FUNC_2(*(VAR_5 + VAR_6), VAR_2->txfifo);


 for (VAR_7 = 0; VAR_7 < VAR_8 % VAR_1; VAR_7++) {
  FUNC_1((u8)(*(VAR_5 + VAR_6) >> (VAR_7 << VAR_0)),
       VAR_2->txfifo);
 }


 FUNC_2(0, &VAR_2->regs->confirm);
}
