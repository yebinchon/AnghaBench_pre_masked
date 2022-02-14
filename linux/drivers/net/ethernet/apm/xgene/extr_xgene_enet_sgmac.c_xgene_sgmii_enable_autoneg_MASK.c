
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_3 (struct xgene_enet_pdata*) ;

__attribute__((used)) static void FUNC_4(struct xgene_enet_pdata *VAR_4)
{
 u32 VAR_5, VAR_6 = 10;

 FUNC_3(VAR_4);

 while (VAR_6--) {
  VAR_5 = FUNC_2(VAR_4, VAR_1,
       VAR_3 >> 2);
  if ((VAR_5 & VAR_0) && (VAR_5 & VAR_2))
   break;
  FUNC_1(1000, 2000);
 }
 if (!(VAR_5 & VAR_0) || !(VAR_5 & VAR_2))
  FUNC_0(VAR_4->ndev, "Auto-negotiation failed\n");
}
