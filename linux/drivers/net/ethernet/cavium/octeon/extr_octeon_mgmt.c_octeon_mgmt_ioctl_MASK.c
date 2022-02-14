
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct net_device*,struct ifreq*,int) ;
 int FUNC_1 (int ,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
        struct ifreq *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 128:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 default:
  if (VAR_1->phydev)
   return FUNC_1(VAR_1->phydev, VAR_2, VAR_3);
  return -VAR_0;
 }
}
