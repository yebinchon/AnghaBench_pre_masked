
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 if (!VAR_1->phydev)
  return -VAR_0;

 return FUNC_0(VAR_1->phydev, VAR_2, VAR_3);
}
