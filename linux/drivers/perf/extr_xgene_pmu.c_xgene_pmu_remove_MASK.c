
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_pmu {int node; int mcpmus; int mcbpmus; int iobpmus; int l3cpmus; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct xgene_pmu* FUNC_1 (int *) ;
 int FUNC_2 (struct xgene_pmu*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct xgene_pmu *VAR_2 = FUNC_1(&VAR_1->dev);

 FUNC_2(VAR_2, &VAR_2->l3cpmus);
 FUNC_2(VAR_2, &VAR_2->iobpmus);
 FUNC_2(VAR_2, &VAR_2->mcbpmus);
 FUNC_2(VAR_2, &VAR_2->mcpmus);
 FUNC_0(VAR_0,
        &VAR_2->node);

 return 0;
}
