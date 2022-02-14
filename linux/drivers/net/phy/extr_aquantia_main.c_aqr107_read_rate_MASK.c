
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_13)
{
 int VAR_14;

 VAR_14 = FUNC_1(VAR_13, VAR_5, VAR_2);
 if (VAR_14 < 0)
  return VAR_14;

 switch (FUNC_0(VAR_4, VAR_14)) {
 case 131:
  VAR_13->speed = VAR_6;
  break;
 case 132:
  VAR_13->speed = VAR_7;
  break;
 case 133:
  VAR_13->speed = VAR_8;
  break;
 case 129:
  VAR_13->speed = VAR_10;
  break;
 case 128:
  VAR_13->speed = VAR_11;
  break;
 case 130:
  VAR_13->speed = VAR_9;
  break;
 default:
  VAR_13->speed = VAR_12;
  break;
 }

 if (VAR_14 & VAR_3)
  VAR_13->duplex = VAR_0;
 else
  VAR_13->duplex = VAR_1;

 return 0;
}
