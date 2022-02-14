
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stih407_usb2_picophy {int rstport; } ;
struct phy {int dummy; } ;


 struct stih407_usb2_picophy* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct stih407_usb2_picophy *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1->rstport);
}
