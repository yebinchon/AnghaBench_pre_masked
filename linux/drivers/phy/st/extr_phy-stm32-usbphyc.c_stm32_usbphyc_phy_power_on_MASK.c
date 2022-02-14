
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_usbphyc_phy {int supplies; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 struct stm32_usbphyc_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_1)
{
 struct stm32_usbphyc_phy *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0, VAR_2->supplies);
}
