
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {scalar_t__ enet_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xgene_enet_pdata*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xgene_enet_pdata *VAR_3)
{
 u32 VAR_4;

 VAR_4 = (VAR_3->enet_id == VAR_2) ? 0xffffffff : 0;
 FUNC_0(VAR_3, VAR_1, VAR_4);
 FUNC_0(VAR_3, VAR_0, VAR_4);
}
