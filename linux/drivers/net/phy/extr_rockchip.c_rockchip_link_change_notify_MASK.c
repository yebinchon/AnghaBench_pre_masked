
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ state; scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct phy_device*,char*,int) ;
 int FUNC_1 (struct phy_device*) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_2)
{





 if (VAR_2->state == VAR_0 && VAR_2->speed == VAR_1) {
  int VAR_3 = FUNC_1(VAR_2);

  if (VAR_3)
   FUNC_0(VAR_2, "rockchip_integrated_phy_analog_init err: %d.\n",
       VAR_3);
 }
}
