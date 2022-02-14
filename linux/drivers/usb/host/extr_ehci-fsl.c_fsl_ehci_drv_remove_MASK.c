
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* usb_phy; } ;
struct platform_device {int dev; } ;
struct fsl_usb2_platform_data {int (* exit ) (struct platform_device*) ;} ;
struct TYPE_3__ {int otg; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct fsl_usb2_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct fsl_usb2_platform_data *VAR_1 = FUNC_1(&VAR_0->dev);
 struct usb_hcd *VAR_2 = FUNC_3(VAR_0);

 if (!FUNC_0(VAR_2->usb_phy)) {
  FUNC_2(VAR_2->usb_phy->otg, ((void*)0));
  FUNC_6(VAR_2->usb_phy);
 }

 FUNC_7(VAR_2);





 if (VAR_1->exit)
  VAR_1->exit(VAR_0);
 FUNC_5(VAR_2);

 return 0;
}
