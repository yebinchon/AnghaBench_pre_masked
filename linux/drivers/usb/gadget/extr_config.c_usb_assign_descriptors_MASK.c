
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct usb_function {void* ssp_descriptors; void* ss_descriptors; void* hs_descriptors; void* fs_descriptors; TYPE_1__* config; } ;
struct usb_descriptor_header {int dummy; } ;
struct TYPE_4__ {struct usb_gadget* gadget; } ;
struct TYPE_3__ {TYPE_2__* cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_gadget*) ;
 scalar_t__ FUNC_1 (struct usb_gadget*) ;
 scalar_t__ FUNC_2 (struct usb_gadget*) ;
 void* FUNC_3 (struct usb_descriptor_header**) ;
 int FUNC_4 (struct usb_function*) ;

int FUNC_5(struct usb_function *VAR_1,
  struct usb_descriptor_header **VAR_2,
  struct usb_descriptor_header **VAR_3,
  struct usb_descriptor_header **VAR_4,
  struct usb_descriptor_header **VAR_5)
{
 struct usb_gadget *VAR_6 = VAR_1->config->cdev->gadget;

 if (VAR_2) {
  VAR_1->fs_descriptors = FUNC_3(VAR_2);
  if (!VAR_1->fs_descriptors)
   goto err;
 }
 if (VAR_3 && FUNC_0(VAR_6)) {
  VAR_1->hs_descriptors = FUNC_3(VAR_3);
  if (!VAR_1->hs_descriptors)
   goto err;
 }
 if (VAR_4 && FUNC_1(VAR_6)) {
  VAR_1->ss_descriptors = FUNC_3(VAR_4);
  if (!VAR_1->ss_descriptors)
   goto err;
 }
 if (VAR_5 && FUNC_2(VAR_6)) {
  VAR_1->ssp_descriptors = FUNC_3(VAR_5);
  if (!VAR_1->ssp_descriptors)
   goto err;
 }
 return 0;
err:
 FUNC_4(VAR_1);
 return -VAR_0;
}
