
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int mdix_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_4)
{
 bool VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = 0;
 VAR_5 = 0;
 switch (VAR_4->mdix_ctrl) {
 case 130:
  break;
 case 128:
  VAR_6 = 1;
  break;
 case 129:
  VAR_5 = 1;
  break;
 default:
  return -VAR_3;
 }

 VAR_7 = FUNC_0(VAR_4, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6)
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;

 if (VAR_5)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;

 return FUNC_1(VAR_4, VAR_2, VAR_7);
}
