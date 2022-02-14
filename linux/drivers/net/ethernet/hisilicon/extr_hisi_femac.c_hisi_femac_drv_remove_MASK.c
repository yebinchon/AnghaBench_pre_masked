
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int phydev; } ;
struct hisi_femac_priv {int clk; int napi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 struct hisi_femac_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct hisi_femac_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(&VAR_2->napi);
 FUNC_6(VAR_1);

 FUNC_4(VAR_1->phydev);
 FUNC_0(VAR_2->clk);
 FUNC_1(VAR_1);

 return 0;
}
