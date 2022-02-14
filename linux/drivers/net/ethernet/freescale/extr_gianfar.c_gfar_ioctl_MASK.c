
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,struct ifreq*) ;
 int FUNC_1 (struct net_device*,struct ifreq*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, struct ifreq *VAR_5, int VAR_6)
{
 struct phy_device *VAR_7 = VAR_4->phydev;

 if (!FUNC_2(VAR_4))
  return -VAR_0;

 if (VAR_6 == VAR_3)
  return FUNC_1(VAR_4, VAR_5);
 if (VAR_6 == VAR_2)
  return FUNC_0(VAR_4, VAR_5);

 if (!VAR_7)
  return -VAR_1;

 return FUNC_3(VAR_7, VAR_5, VAR_6);
}
