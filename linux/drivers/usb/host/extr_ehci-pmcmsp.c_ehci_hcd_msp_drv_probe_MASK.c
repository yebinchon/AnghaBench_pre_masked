
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 int VAR_4;

 FUNC_1("In ehci_hcd_msp_drv_probe");

 if (FUNC_2())
  return -VAR_0;

 FUNC_0(VAR_1, "USB0_HOST_DEV_GPIO");

 VAR_4 = FUNC_3(&VAR_2, VAR_3);

 return VAR_4;
}
