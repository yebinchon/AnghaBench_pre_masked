
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbctlx_completor {int complete; } ;
struct usbctlx_rrid_completor {unsigned int riddatalen; struct usbctlx_completor head; void* riddata; struct hfa384x_usb_rridresp const* rridresp; } ;
struct hfa384x_usb_rridresp {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct usbctlx_completor *
FUNC_0(struct usbctlx_rrid_completor *VAR_1,
      const struct hfa384x_usb_rridresp *VAR_2,
      void *VAR_3,
      unsigned int VAR_4)
{
 VAR_1->head.complete = VAR_0;
 VAR_1->rridresp = VAR_2;
 VAR_1->riddata = VAR_3;
 VAR_1->riddatalen = VAR_4;
 return &VAR_1->head;
}
