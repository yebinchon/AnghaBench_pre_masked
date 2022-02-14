
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson8b_dwmac {int phy_mode; int dev; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct meson8b_dwmac*,int ,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct meson8b_dwmac *VAR_3)
{
 switch (VAR_3->phy_mode) {
 case 132:
 case 130:
 case 131:
 case 129:

  FUNC_1(VAR_3, VAR_1,
     VAR_2,
     VAR_2);
  break;
 case 128:

  FUNC_1(VAR_3, VAR_1,
     VAR_2, 0);
  break;
 default:
  FUNC_0(VAR_3->dev, "fail to set phy-mode %s\n",
   FUNC_2(VAR_3->phy_mode));
  return -VAR_0;
 }

 return 0;
}
