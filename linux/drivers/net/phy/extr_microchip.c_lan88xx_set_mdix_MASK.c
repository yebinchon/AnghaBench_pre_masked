
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int mdix_ctrl; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_8)
{
 int VAR_9;
 int VAR_10;

 switch (VAR_8->mdix_ctrl) {
 case 130:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 case 129:
  VAR_10 = VAR_1;
  break;
 default:
  return;
 }

 FUNC_1(VAR_8, VAR_5, VAR_7);
 VAR_9 = FUNC_0(VAR_8, VAR_0);
 VAR_9 &= ~VAR_2;
 VAR_9 |= VAR_10;
 FUNC_1(VAR_8, VAR_0, VAR_9);
 FUNC_1(VAR_8, VAR_5, VAR_6);
}
