
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ifreq *VAR_3,
       int VAR_4)
{
 struct phy_device *VAR_5 = VAR_2->phydev;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 if (!VAR_5)
  return -VAR_1;

 return FUNC_1(VAR_5, VAR_3, VAR_4);
}
