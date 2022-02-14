
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stih407_usb2_picophy {int ctrl; int regmap; int rstc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct stih407_usb2_picophy *VAR_2)
{
 FUNC_1(VAR_2->rstc);

 return FUNC_0(VAR_2->regmap, VAR_2->ctrl,
      VAR_1,
      VAR_0);
}
