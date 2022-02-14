
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int speed; TYPE_1__* ep0; } ;
struct renesas_usb3 {TYPE_2__ gadget; } ;
struct TYPE_3__ {void* maxpacket; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;

 int FUNC_0 (struct renesas_usb3*,int ) ;

__attribute__((used)) static void FUNC_1(struct renesas_usb3 *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_8, VAR_2) & VAR_7;

 switch (VAR_9) {
 case 128:
  VAR_8->gadget.speed = VAR_5;
  VAR_8->gadget.ep0->maxpacket = VAR_1;
  break;
 case 129:
  VAR_8->gadget.speed = VAR_4;
  VAR_8->gadget.ep0->maxpacket = VAR_0;
  break;
 case 130:
  VAR_8->gadget.speed = VAR_3;
  VAR_8->gadget.ep0->maxpacket = VAR_0;
  break;
 default:
  VAR_8->gadget.speed = VAR_6;
  break;
 }
}
