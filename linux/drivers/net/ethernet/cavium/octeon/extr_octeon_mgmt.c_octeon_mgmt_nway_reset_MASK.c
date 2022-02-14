
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3)
{
 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (VAR_3->phydev)
  return FUNC_1(VAR_3->phydev);

 return -VAR_1;
}
