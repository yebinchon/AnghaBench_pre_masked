
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ag71xx {int dummy; } ;


 int FUNC_0 (struct ag71xx*) ;
 struct ag71xx* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct ag71xx *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_0->phydev);
 FUNC_2(VAR_0->phydev);
 FUNC_0(VAR_1);

 return 0;
}
