
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson8b_dwmac {int phy_mode; int dev; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct meson8b_dwmac*,int ,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct meson8b_dwmac *VAR_5)
{
 switch (VAR_5->phy_mode) {
 case 132:
 case 130:
 case 131:
 case 129:

  FUNC_1(VAR_5, VAR_1,
     VAR_2,
     VAR_3);
  break;
 case 128:

  FUNC_1(VAR_5, VAR_1,
     VAR_2,
     VAR_4);
  break;
 default:
  FUNC_0(VAR_5->dev, "fail to set phy-mode %s\n",
   FUNC_2(VAR_5->phy_mode));
  return -VAR_0;
 }

 return 0;
}
