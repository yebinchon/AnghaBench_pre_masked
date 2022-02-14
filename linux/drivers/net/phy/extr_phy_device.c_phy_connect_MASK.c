
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (int) ;
 struct device* FUNC_1 (int *,int *,char const*) ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*,struct phy_device*,void (*) (struct net_device*),int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (struct device*) ;
 struct phy_device* FUNC_5 (struct device*) ;

struct phy_device *FUNC_6(struct net_device *VAR_2, const char *VAR_3,
          void (*VAR_4)(struct net_device *),
          phy_interface_t VAR_5)
{
 struct phy_device *VAR_6;
 struct device *VAR_7;
 int VAR_8;




 VAR_7 = FUNC_1(&VAR_1, ((void*)0), VAR_3);
 if (!VAR_7) {
  FUNC_3("PHY %s not found\n", VAR_3);
  return FUNC_0(-VAR_0);
 }
 VAR_6 = FUNC_5(VAR_7);

 VAR_8 = FUNC_2(VAR_2, VAR_6, VAR_4, VAR_5);
 FUNC_4(VAR_7);
 if (VAR_8)
  return FUNC_0(VAR_8);

 return VAR_6;
}
