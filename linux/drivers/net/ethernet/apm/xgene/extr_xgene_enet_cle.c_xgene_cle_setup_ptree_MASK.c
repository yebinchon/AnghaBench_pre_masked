
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {int dummy; } ;
struct xgene_enet_cle {int dummy; } ;


 int FUNC_0 (struct xgene_enet_pdata*,struct xgene_enet_cle*) ;
 int FUNC_1 (struct xgene_enet_pdata*,struct xgene_enet_cle*) ;
 int FUNC_2 (struct xgene_enet_pdata*,struct xgene_enet_cle*) ;

__attribute__((used)) static int FUNC_3(struct xgene_enet_pdata *VAR_0,
     struct xgene_enet_cle *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_0, VAR_1);

 return 0;
}
