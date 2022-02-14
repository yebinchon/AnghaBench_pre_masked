
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxpacket; } ;
struct dummy_ep {int desc; TYPE_1__ ep; } ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct dummy {TYPE_2__ gadget; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dummy *VAR_2, struct dummy_ep *VAR_3)
{
 int VAR_4 = VAR_3->ep.maxpacket;

 if (VAR_2->gadget.speed == VAR_0) {
  int VAR_5;


  VAR_5 = FUNC_0(VAR_3->desc);
  VAR_5 *= 8 ;
  VAR_4 += VAR_4 * VAR_5;
 }
 if (VAR_2->gadget.speed == VAR_1) {
  switch (FUNC_1(VAR_3->desc)) {
  case 128:

   VAR_4 = 3 * 16 * 1024 * 8;
   break;
  case 129:

   VAR_4 = 3 * 1024 * 8;
   break;
  case 130:
  default:
   break;
  }
 }
 return VAR_4;
}
