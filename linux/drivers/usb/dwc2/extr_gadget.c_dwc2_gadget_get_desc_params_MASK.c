
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int maxpacket; } ;
struct dwc2_hsotg_ep {int dir_in; scalar_t__ isochronous; int index; TYPE_1__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(struct dwc2_hsotg_ep *VAR_6, u32 *VAR_7)
{
 u32 VAR_8 = VAR_6->ep.maxpacket;
 int VAR_9 = VAR_6->dir_in;
 u32 VAR_10 = 0;

 if (!VAR_6->index && !VAR_9) {
  VAR_10 = VAR_8;
  *VAR_7 = VAR_5;
 } else if (VAR_6->isochronous) {
  if (VAR_9) {
   VAR_10 = VAR_2;
   *VAR_7 = VAR_3;
  } else {
   VAR_10 = VAR_0;
   *VAR_7 = VAR_1;
  }
 } else {
  VAR_10 = VAR_4;
  *VAR_7 = VAR_5;


  VAR_10 -= VAR_10 % VAR_8;
 }

 return VAR_10;
}
