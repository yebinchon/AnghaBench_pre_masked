
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_local {scalar_t__ phy_type; int phy_configure; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 struct smc_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;
 struct platform_device* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_8(VAR_0);
 struct net_device *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2) {
  struct smc_local *VAR_3 = FUNC_0(VAR_2);
  FUNC_5(VAR_1);
  if (FUNC_2(VAR_2)) {
   FUNC_7(VAR_2);
   FUNC_4(VAR_2);
   if (VAR_3->phy_type != 0)
    FUNC_6(&VAR_3->phy_configure);
   FUNC_1(VAR_2);
  }
 }
 return 0;
}
