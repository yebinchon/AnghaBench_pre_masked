
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {int ndev; } ;
struct platform_device {int dummy; } ;


 struct xgene_enet_pdata* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0)
{
 struct xgene_enet_pdata *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return;

 if (!VAR_1->ndev)
  return;

 FUNC_1(VAR_0);
}
