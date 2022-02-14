
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int mem_res; int npe; int id; } ;
struct platform_device {int dummy; } ;
struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 struct port* FUNC_2 (struct net_device*) ;
 int ** VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct phy_device*) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_5(VAR_1);
 struct phy_device *VAR_3 = VAR_2->phydev;
 struct port *VAR_4 = FUNC_2(VAR_2);

 FUNC_7(VAR_2);
 FUNC_4(VAR_3);
 VAR_0[FUNC_0(VAR_4->id)] = ((void*)0);
 FUNC_3(VAR_4->npe);
 FUNC_6(VAR_4->mem_res);
 FUNC_1(VAR_2);
 return 0;
}
