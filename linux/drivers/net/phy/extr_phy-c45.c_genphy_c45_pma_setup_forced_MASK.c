
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ duplex; int speed; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;






 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*,int ,int ,int) ;

int FUNC_3(struct phy_device *VAR_18)
{
 int VAR_19, VAR_20, VAR_21;


 if (VAR_18->duplex != VAR_0)
  return -VAR_1;

 VAR_19 = FUNC_1(VAR_18, VAR_8, VAR_2);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_20 = FUNC_1(VAR_18, VAR_8, VAR_7);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_19 &= ~VAR_6;




 VAR_20 &= ~(VAR_17 | 0x30);

 switch (VAR_18->speed) {
 case 133:
  VAR_20 |= VAR_13;
  break;
 case 132:
  VAR_19 |= VAR_9;
  VAR_20 |= VAR_12;
  break;
 case 131:
  VAR_19 |= VAR_10;

  VAR_20 |= VAR_11;
  break;
 case 129:
  VAR_19 |= VAR_4;

  VAR_20 |= VAR_15;
  break;
 case 128:
  VAR_19 |= VAR_5;

  VAR_20 |= VAR_16;
  break;
 case 130:
  VAR_19 |= VAR_3;

  VAR_20 |= VAR_14;
  break;
 default:
  return -VAR_1;
 }

 VAR_21 = FUNC_2(VAR_18, VAR_8, VAR_2, VAR_19);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_21 = FUNC_2(VAR_18, VAR_8, VAR_7, VAR_20);
 if (VAR_21 < 0)
  return VAR_21;

 return FUNC_0(VAR_18);
}
