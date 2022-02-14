
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_7)
{
 int VAR_8;


 if (VAR_7->interface != VAR_4 &&
     VAR_7->interface != VAR_3 &&
     VAR_7->interface != VAR_6 &&
     VAR_7->interface != VAR_5 &&
     VAR_7->interface != VAR_2)
  return -VAR_0;

 FUNC_0(VAR_7->interface == VAR_6,
      "Your devicetree is out of date, please update it. The AQR107 family doesn't support XGMII, maybe you mean USXGMII.\n");

 VAR_8 = FUNC_4(VAR_7);
 if (!VAR_8)
  FUNC_1(VAR_7);


 FUNC_2(VAR_7);

 return FUNC_3(VAR_7, VAR_1);
}
