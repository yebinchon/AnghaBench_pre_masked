
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; int interface; int link; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*,int ,int ) ;
 int FUNC_5 (struct phy_device*,char*) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_9)
{
 int VAR_10, VAR_11;

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11)
  return VAR_11;

 if (!VAR_9->link || VAR_9->autoneg == VAR_0)
  return 0;

 VAR_10 = FUNC_4(VAR_9, VAR_1, VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 switch (FUNC_0(VAR_3, VAR_10)) {
 case 132:
 case 128:
  VAR_9->interface = VAR_4;
  break;
 case 129:
  VAR_9->interface = VAR_8;
  break;
 case 130:
  VAR_9->interface = VAR_7;
  break;
 case 131:
  VAR_9->interface = VAR_5;
  break;
 default:
  VAR_9->interface = VAR_6;
  break;
 }

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 <= 0)
  return VAR_10;

 FUNC_5(VAR_9, "Downshift occurred! Cabling may be defective.\n");


 return FUNC_2(VAR_9);
}
