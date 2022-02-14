
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_composite_dev {int dummy; } ;
struct TYPE_4__ {int name; TYPE_1__* config; } ;
struct f_loopback {TYPE_2__ function; int out_ep; int in_ep; } ;
struct TYPE_3__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ) ;
 int FUNC_1 (struct usb_composite_dev*,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct f_loopback *VAR_0)
{
 struct usb_composite_dev *VAR_1;

 VAR_1 = VAR_0->function.config->cdev;
 FUNC_1(VAR_1, VAR_0->in_ep, VAR_0->out_ep, ((void*)0), ((void*)0));
 FUNC_0(VAR_1, "%s disabled\n", VAR_0->function.name);
}
