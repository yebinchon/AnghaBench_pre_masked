
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {int dummy; } ;
struct xgene_enet_desc_ring {int id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xgene_enet_pdata*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct xgene_enet_pdata *VAR_2,
        struct xgene_enet_desc_ring *VAR_3)
{
 u32 VAR_4, VAR_5;

 if (FUNC_2(VAR_3->id)) {
  VAR_4 = VAR_0;
  VAR_5 = FUNC_0(FUNC_1(VAR_3->id));
 } else {
  VAR_4 = VAR_1;
  VAR_5 = FUNC_0(FUNC_3(VAR_3->id));
 }

 FUNC_4(VAR_2, VAR_4, VAR_5);
}
