
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbctlx_completor {int complete; } ;
struct usbctlx_rmem_completor {unsigned int len; struct usbctlx_completor head; void* data; struct hfa384x_usb_rmemresp* rmemresp; } ;
struct hfa384x_usb_rmemresp {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct usbctlx_completor *
FUNC_0(struct usbctlx_rmem_completor *VAR_1,
      struct hfa384x_usb_rmemresp *VAR_2,
      void *VAR_3,
      unsigned int VAR_4)
{
 VAR_1->head.complete = VAR_0;
 VAR_1->rmemresp = VAR_2;
 VAR_1->data = VAR_3;
 VAR_1->len = VAR_4;
 return &VAR_1->head;
}
