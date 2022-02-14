
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_hcd_device {struct platform_device* ehci_dev; struct platform_device* ohci_dev; } ;
struct ssb_device {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct ssb_device*,int ) ;
 struct ssb_hcd_device* FUNC_2 (struct ssb_device*) ;

__attribute__((used)) static void FUNC_3(struct ssb_device *VAR_0)
{
 struct ssb_hcd_device *VAR_1 = FUNC_2(VAR_0);
 struct platform_device *VAR_2 = VAR_1->ohci_dev;
 struct platform_device *VAR_3 = VAR_1->ehci_dev;

 if (VAR_2)
  FUNC_0(VAR_2);
 if (VAR_3)
  FUNC_0(VAR_3);

 FUNC_1(VAR_0, 0);
}
