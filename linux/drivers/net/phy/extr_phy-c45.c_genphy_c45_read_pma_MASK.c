
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int duplex; int speed; int lp_advertising; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;

int FUNC_2(struct phy_device *VAR_11)
{
 int VAR_12;

 FUNC_0(VAR_11->lp_advertising);

 VAR_12 = FUNC_1(VAR_11, VAR_3, VAR_1);
 if (VAR_12 < 0)
  return VAR_12;

 switch (VAR_12 & VAR_2) {
 case 0:
  VAR_11->speed = VAR_4;
  break;
 case 129:
  VAR_11->speed = VAR_5;
  break;
 case 128:
  VAR_11->speed = VAR_6;
  break;
 case 131:
  VAR_11->speed = VAR_8;
  break;
 case 130:
  VAR_11->speed = VAR_9;
  break;
 case 132:
  VAR_11->speed = VAR_7;
  break;
 default:
  VAR_11->speed = VAR_10;
  break;
 }

 VAR_11->duplex = VAR_0;

 return 0;
}
