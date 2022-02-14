
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stih407_usb2_picophy {int rstport; int param; int regmap; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stih407_usb2_picophy* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct stih407_usb2_picophy*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_2)
{
 int VAR_3;
 struct stih407_usb2_picophy *VAR_4 = FUNC_0(VAR_2);

 FUNC_3(VAR_4);

 VAR_3 = FUNC_1(VAR_4->regmap,
     VAR_4->param,
     VAR_1,
     VAR_0);
 if (VAR_3)
  return VAR_3;

 return FUNC_2(VAR_4->rstport);
}
