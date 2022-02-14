
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_geth_private {int phydev; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ucc_geth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct ucc_geth_private *VAR_5 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 if (!VAR_5->phydev)
  return -VAR_1;

 return FUNC_2(VAR_5->phydev, VAR_3, VAR_4);
}
