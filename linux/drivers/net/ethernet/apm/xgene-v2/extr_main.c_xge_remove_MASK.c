
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {struct net_device* ndev; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct xge_pdata* FUNC_3 (struct platform_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct xge_pdata *VAR_1;
 struct net_device *VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = VAR_1->ndev;

 FUNC_4();
 if (FUNC_2(VAR_2))
  FUNC_0(VAR_2);
 FUNC_5();

 FUNC_7(VAR_2);
 FUNC_6(VAR_2);
 FUNC_1(VAR_2);

 return 0;
}
