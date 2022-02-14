
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwc2_qh {int ttport; TYPE_2__* dwc_tt; } ;
struct dwc2_hsotg {int dummy; } ;
struct TYPE_4__ {unsigned long* periodic_bitmaps; TYPE_1__* usb_tt; } ;
struct TYPE_3__ {scalar_t__ multi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static unsigned long *FUNC_1(struct dwc2_hsotg *VAR_1,
          struct dwc2_qh *VAR_2)
{
 unsigned long *VAR_3;


 if (FUNC_0(!VAR_2->dwc_tt))
  return ((void*)0);


 VAR_3 = VAR_2->dwc_tt->periodic_bitmaps;
 if (VAR_2->dwc_tt->usb_tt->multi)
  VAR_3 += VAR_0 * (VAR_2->ttport - 1);

 return VAR_3;
}
