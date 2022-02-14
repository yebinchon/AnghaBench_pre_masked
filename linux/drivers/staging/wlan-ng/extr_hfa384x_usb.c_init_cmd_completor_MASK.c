
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbctlx_completor {int complete; } ;
struct usbctlx_cmd_completor {struct usbctlx_completor head; struct hfa384x_cmdresult* result; struct hfa384x_usb_statusresp const* cmdresp; } ;
struct hfa384x_usb_statusresp {int dummy; } ;
struct hfa384x_cmdresult {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct usbctlx_completor *
FUNC_0(struct usbctlx_cmd_completor *VAR_1,
     const struct hfa384x_usb_statusresp *VAR_2,
     struct hfa384x_cmdresult *VAR_3)
{
 VAR_1->head.complete = VAR_0;
 VAR_1->cmdresp = VAR_2;
 VAR_1->result = VAR_3;
 return &VAR_1->head;
}
