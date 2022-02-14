
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int phy_speed; } ;






 int FUNC_0 (struct xlgmac_pdata*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;
 int FUNC_2 (struct xlgmac_pdata*) ;
 int FUNC_3 (struct xlgmac_pdata*) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_0)
{
 switch (VAR_0->phy_speed) {
 case 131:
  FUNC_0(VAR_0);
  break;

 case 128:
  FUNC_3(VAR_0);
  break;

 case 129:
  FUNC_2(VAR_0);
  break;

 case 130:
  FUNC_1(VAR_0);
  break;
 }
}
