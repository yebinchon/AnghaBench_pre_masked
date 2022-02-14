
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_usb_phy {scalar_t__ reset; } ;
struct phy {int dummy; } ;


 struct rockchip_usb_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0)
{
 struct rockchip_usb_phy *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->reset) {
  FUNC_1(VAR_1->reset);
  FUNC_3(10);
  FUNC_2(VAR_1->reset);
 }

 return 0;
}
