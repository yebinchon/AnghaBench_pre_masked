
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ab8500_usb {scalar_t__ mode; int phy; int phy_dis_work; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ab8500_usb*) ;
 int FUNC_1 (struct ab8500_usb*) ;
 int FUNC_2 (int *) ;
 struct ab8500_usb* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct ab8500_usb *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(&VAR_3->phy_dis_work);

 FUNC_4(&VAR_3->phy);

 if (VAR_3->mode == VAR_0)
  FUNC_0(VAR_3);
 else if (VAR_3->mode == VAR_1)
  FUNC_1(VAR_3);

 return 0;
}
