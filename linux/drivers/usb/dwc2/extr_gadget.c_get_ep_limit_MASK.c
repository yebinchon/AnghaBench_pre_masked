
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int maxpacket; } ;
struct dwc2_hsotg_ep {int index; TYPE_1__ ep; scalar_t__ dir_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct dwc2_hsotg_ep *VAR_3)
{
 int VAR_4 = VAR_3->index;
 unsigned int VAR_5;
 unsigned int VAR_6;

 if (VAR_4 != 0) {
  VAR_5 = VAR_2 + 1;
  VAR_6 = VAR_1 + 1;
 } else {
  VAR_5 = 64 + 64;
  if (VAR_3->dir_in)
   VAR_6 = VAR_0 + 1;
  else
   VAR_6 = 2;
 }


 VAR_6--;
 VAR_5--;






 if ((VAR_6 * VAR_3->ep.maxpacket) < VAR_5)
  VAR_5 = VAR_6 * VAR_3->ep.maxpacket;

 return VAR_5;
}
