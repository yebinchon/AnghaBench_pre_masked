
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 if (!VAR_2->phydev || !FUNC_0(VAR_2))
  return -VAR_0;

 switch (VAR_4) {
 case 130:
 case 129:
 case 128:
  return FUNC_1(VAR_2->phydev, VAR_3, VAR_4);
 default:
  return -VAR_1;
 }
}
