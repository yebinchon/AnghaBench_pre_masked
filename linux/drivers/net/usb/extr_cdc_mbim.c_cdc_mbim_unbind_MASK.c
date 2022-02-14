
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int data; } ;
struct usb_interface {int dummy; } ;
struct cdc_ncm_ctx {int control; } ;
struct cdc_mbim_state {TYPE_1__* subdriver; struct cdc_ncm_ctx* ctx; } ;
struct TYPE_2__ {int (* disconnect ) (int ) ;} ;


 int FUNC_0 (struct usbnet*,struct usb_interface*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 struct cdc_mbim_state *VAR_2 = (void *)&VAR_0->data;
 struct cdc_ncm_ctx *VAR_3 = VAR_2->ctx;


 if (VAR_2->subdriver && VAR_2->subdriver->disconnect)
  VAR_2->subdriver->disconnect(VAR_3->control);
 VAR_2->subdriver = ((void*)0);


 FUNC_0(VAR_0, VAR_1);
}
