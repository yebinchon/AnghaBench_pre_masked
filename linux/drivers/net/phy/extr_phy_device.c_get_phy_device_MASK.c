
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dummy; } ;
struct phy_c45_device_ids {int member_0; } ;
struct mii_bus {int dummy; } ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (int) ;
 int FUNC_1 (struct mii_bus*,int,int*,int,struct phy_c45_device_ids*) ;
 struct phy_device* FUNC_2 (struct mii_bus*,int,int,int,struct phy_c45_device_ids*) ;

struct phy_device *FUNC_3(struct mii_bus *VAR_1, int VAR_2, bool VAR_3)
{
 struct phy_c45_device_ids VAR_4 = {0};
 u32 VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_3, &VAR_4);
 if (VAR_6)
  return FUNC_0(VAR_6);


 if ((VAR_5 & 0x1fffffff) == 0x1fffffff)
  return FUNC_0(-VAR_0);

 return FUNC_2(VAR_1, VAR_2, VAR_5, VAR_3, &VAR_4);
}
