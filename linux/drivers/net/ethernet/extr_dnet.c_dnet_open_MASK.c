
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct dnet {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (struct dnet*) ;
 int FUNC_1 (int *) ;
 struct dnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct dnet *VAR_2 = FUNC_2(VAR_1);


 if (!VAR_1->phydev)
  return -VAR_0;

 FUNC_1(&VAR_2->napi);
 FUNC_0(VAR_2);

 FUNC_5(VAR_1->phydev);


 FUNC_4(VAR_1->phydev);

 FUNC_3(VAR_1);

 return 0;
}
