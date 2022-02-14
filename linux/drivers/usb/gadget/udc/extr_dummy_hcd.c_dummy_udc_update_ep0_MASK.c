
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ speed; } ;
struct dummy {TYPE_3__* ep; TYPE_1__ gadget; } ;
struct TYPE_5__ {int maxpacket; } ;
struct TYPE_6__ {TYPE_2__ ep; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dummy *VAR_1)
{
 if (VAR_1->gadget.speed == VAR_0)
  VAR_1->ep[0].ep.maxpacket = 9;
 else
  VAR_1->ep[0].ep.maxpacket = 64;
}
