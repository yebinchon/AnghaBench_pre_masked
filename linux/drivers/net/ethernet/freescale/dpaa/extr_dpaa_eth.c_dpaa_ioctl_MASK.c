
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ phydev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct ifreq*,int) ;
 int FUNC_1 (scalar_t__,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 int VAR_6 = -VAR_0;

 if (VAR_5 == VAR_1) {
  if (VAR_3->phydev)
   return FUNC_1(VAR_3->phydev, VAR_4, VAR_5);
 }

 if (VAR_5 == VAR_2)
  return FUNC_0(VAR_3, VAR_4, VAR_5);

 return VAR_6;
}
