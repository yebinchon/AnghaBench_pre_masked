
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
typedef int lan78xx_regs ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_1)
{
 if (!VAR_1->phydev)
  return (sizeof(lan78xx_regs));
 else
  return (sizeof(lan78xx_regs) + VAR_0);
}
