
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dummy_ep {TYPE_1__* desc; } ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct dummy {struct dummy_ep* ep; int ints_enabled; int hs_hcd; int ss_hcd; TYPE_2__ gadget; } ;
struct TYPE_3__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static struct dummy_ep *FUNC_1(struct dummy *VAR_3, u8 VAR_4)
{
 int VAR_5;

 if (!FUNC_0((VAR_3->gadget.speed == VAR_2 ?
   VAR_3->ss_hcd : VAR_3->hs_hcd)))
  return ((void*)0);
 if (!VAR_3->ints_enabled)
  return ((void*)0);
 if ((VAR_4 & ~VAR_1) == 0)
  return &VAR_3->ep[0];
 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++) {
  struct dummy_ep *VAR_6 = &VAR_3->ep[VAR_5];

  if (!VAR_6->desc)
   continue;
  if (VAR_6->desc->bEndpointAddress == VAR_4)
   return VAR_6;
 }
 return ((void*)0);
}
