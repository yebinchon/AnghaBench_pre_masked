
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ phydev; } ;
struct dnet {int napi; } ;


 int FUNC_0 (struct dnet*) ;
 int FUNC_1 (int *) ;
 struct dnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct dnet *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_0);
 FUNC_1(&VAR_1->napi);

 if (VAR_0->phydev)
  FUNC_5(VAR_0->phydev);

 FUNC_0(VAR_1);
 FUNC_3(VAR_0);

 return 0;
}
