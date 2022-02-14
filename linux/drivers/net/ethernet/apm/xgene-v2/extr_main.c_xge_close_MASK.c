
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {int napi; } ;
struct net_device {int phydev; } ;


 int FUNC_0 (int *) ;
 struct xge_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct xge_pdata*) ;
 int FUNC_7 (struct xge_pdata*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0)
{
 struct xge_pdata *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_7(VAR_1);
 FUNC_3(VAR_0->phydev);

 FUNC_6(VAR_1);
 FUNC_5(VAR_0);
 FUNC_0(&VAR_1->napi);
 FUNC_4(VAR_0);

 return 0;
}
