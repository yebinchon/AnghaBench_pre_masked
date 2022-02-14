
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_hcd*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_2)
{
 struct device *VAR_3 = VAR_2->self.controller;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  return VAR_4;
 if (FUNC_1(VAR_3->of_node, "marvell,armada-3700-ehci"))
  FUNC_2(VAR_0, VAR_1);

 return VAR_4;
}
