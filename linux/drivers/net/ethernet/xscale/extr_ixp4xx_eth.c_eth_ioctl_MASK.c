
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct net_device*,struct ifreq*) ;
 int FUNC_2 (struct net_device*,struct ifreq*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 if (!FUNC_3(VAR_3))
  return -VAR_0;

 if (FUNC_0()) {
  if (VAR_5 == VAR_2)
   return FUNC_2(VAR_3, VAR_4);
  if (VAR_5 == VAR_1)
   return FUNC_1(VAR_3, VAR_4);
 }

 return FUNC_4(VAR_3->phydev, VAR_4, VAR_5);
}
