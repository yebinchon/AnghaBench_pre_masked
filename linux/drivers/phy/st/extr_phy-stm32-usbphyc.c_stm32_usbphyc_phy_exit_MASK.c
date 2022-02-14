
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_usbphyc_phy {int active; struct stm32_usbphyc* usbphyc; } ;
struct stm32_usbphyc {int dummy; } ;
struct phy {int dummy; } ;


 struct stm32_usbphyc_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (struct stm32_usbphyc*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct stm32_usbphyc_phy *VAR_1 = FUNC_0(VAR_0);
 struct stm32_usbphyc *VAR_2 = VAR_1->usbphyc;

 VAR_1->active = 0;

 return FUNC_1(VAR_2);
}
