
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_udc {struct at91_ep* ep; } ;
struct at91_ep {int maxpacket; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct at91_udc *VAR_1)
{
 struct at91_ep *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1->ep[VAR_3];

  switch (VAR_3) {
  case 0:
  case 1:
  case 2:
  case 3:
   VAR_2->maxpacket = 64;
   break;
  case 4:
  case 5:
   VAR_2->maxpacket = 256;
   break;
  }
 }

 return 0;
}
