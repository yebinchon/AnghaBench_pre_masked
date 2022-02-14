
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int phy_id; int duplex; int speed; int autoneg; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;


 int VAR_16 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;
 int FUNC_1 (struct phy_device*,int ,int,int) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_17)
{
 int VAR_18;

 VAR_18 = FUNC_4(VAR_17);
 if (VAR_18)
  return VAR_18;

 VAR_17->autoneg = VAR_0;
 VAR_17->speed = VAR_16;
 VAR_17->duplex = VAR_1;

 switch (VAR_17->phy_id & VAR_15) {
 case 129:
  VAR_18 = FUNC_1(VAR_17, VAR_3,
     VAR_4 | VAR_7 |
     VAR_5,
     VAR_4 | VAR_6 |
     VAR_5);
  if (VAR_18)
   return VAR_18;
  break;
 case 128:
  VAR_18 = FUNC_3(VAR_17, VAR_12, VAR_13);
  if (VAR_18)
   return VAR_18;
  break;
 default:
  return -VAR_2;
 }

 VAR_18 = FUNC_0(VAR_17, VAR_3, VAR_8);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_1(VAR_17, VAR_9, VAR_10,
    VAR_11);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_17);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_2(VAR_17, VAR_14);
 if (VAR_18 < 0)
  return VAR_18;

 return 0;
}
