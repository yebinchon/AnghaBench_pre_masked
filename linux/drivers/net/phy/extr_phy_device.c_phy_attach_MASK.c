
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct bus_type {int dummy; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy_device* FUNC_0 (int) ;
 struct device* FUNC_1 (struct bus_type*,int *,char const*) ;
 struct bus_type VAR_2 ;
 int FUNC_2 (struct net_device*,struct phy_device*,int ,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (struct device*) ;
 struct phy_device* FUNC_5 (struct device*) ;

struct phy_device *FUNC_6(struct net_device *VAR_3, const char *VAR_4,
         phy_interface_t VAR_5)
{
 struct bus_type *VAR_6 = &VAR_2;
 struct phy_device *VAR_7;
 struct device *VAR_8;
 int VAR_9;

 if (!VAR_3)
  return FUNC_0(-VAR_0);




 VAR_8 = FUNC_1(VAR_6, ((void*)0), VAR_4);
 if (!VAR_8) {
  FUNC_3("PHY %s not found\n", VAR_4);
  return FUNC_0(-VAR_1);
 }
 VAR_7 = FUNC_5(VAR_8);

 VAR_9 = FUNC_2(VAR_3, VAR_7, VAR_7->dev_flags, VAR_5);
 FUNC_4(VAR_8);
 if (VAR_9)
  return FUNC_0(VAR_9);

 return VAR_7;
}
