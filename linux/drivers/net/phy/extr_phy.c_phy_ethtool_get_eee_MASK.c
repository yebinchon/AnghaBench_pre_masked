
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int drv; } ;
struct ethtool_eee {int advertised; int eee_enabled; int lp_advertised; int eee_active; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct phy_device*,int ,int ) ;

int FUNC_3(struct phy_device *VAR_6, struct ethtool_eee *VAR_7)
{
 int VAR_8;

 if (!VAR_6->drv)
  return -VAR_0;


 VAR_8 = FUNC_2(VAR_6, VAR_4, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_7->supported = FUNC_1(VAR_8);


 VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_7->advertised = FUNC_0(VAR_8);
 VAR_7->eee_enabled = !!VAR_7->advertised;


 VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_2);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_7->lp_advertised = FUNC_0(VAR_8);

 VAR_7->eee_active = !!(VAR_7->advertised & VAR_7->lp_advertised);

 return 0;
}
