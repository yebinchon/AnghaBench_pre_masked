
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ duplex; int lp_advertising; void* asym_pause; void* pause; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;

void FUNC_1(struct phy_device *VAR_3)
{
 if (VAR_3->duplex == VAR_0) {
  VAR_3->pause = FUNC_0(VAR_2,
        VAR_3->lp_advertising);
  VAR_3->asym_pause = FUNC_0(
   VAR_1,
   VAR_3->lp_advertising);
 }
}
