
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* controller; } ;
struct usb_hcd {int has_tt; scalar_t__ regs; TYPE_1__ self; } ;
struct fsl_usb2_platform_data {int big_endian_mmio; int big_endian_desc; } ;
struct ehci_hcd {int need_oc_pp_cycle; scalar_t__ caps; int big_endian_mmio; int big_endian_desc; } ;
struct device {TYPE_2__* parent; } ;
struct TYPE_4__ {int of_node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct fsl_usb2_platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ehci_hcd*) ;
 int FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct ehci_hcd*,int ,scalar_t__) ;
 struct ehci_hcd* FUNC_4 (struct usb_hcd*) ;
 scalar_t__ FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_2)
{
 struct ehci_hcd *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;
 struct fsl_usb2_platform_data *VAR_5;
 struct device *VAR_6;

 VAR_6 = VAR_2->self.controller;
 VAR_5 = FUNC_0(VAR_2->self.controller);
 VAR_3->big_endian_desc = VAR_5->big_endian_desc;
 VAR_3->big_endian_mmio = VAR_5->big_endian_mmio;


 VAR_3->caps = VAR_2->regs + 0x100;
 VAR_2->has_tt = 1;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 if (FUNC_5(VAR_6->parent->of_node,
        "fsl,mpc5121-usb2-dr")) {




  FUNC_3(VAR_3, VAR_1,
       VAR_2->regs + VAR_0);
 }

 VAR_4 = FUNC_1(VAR_3);
 return VAR_4;
}
