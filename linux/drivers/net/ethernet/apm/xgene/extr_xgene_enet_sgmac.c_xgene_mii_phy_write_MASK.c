
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xgene_enet_pdata {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct xgene_enet_pdata*,int ) ;
 int FUNC_6 (struct xgene_enet_pdata*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct xgene_enet_pdata *VAR_4, u8 VAR_5,
    u32 VAR_6, u16 VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = FUNC_0(VAR_5) | FUNC_2(VAR_6);
 FUNC_6(VAR_4, VAR_1, VAR_8);

 VAR_9 = FUNC_1(VAR_7);
 FUNC_6(VAR_4, VAR_2, VAR_9);

 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  VAR_10 = FUNC_5(VAR_4, VAR_3);
  if (!(VAR_10 & VAR_0))
   return;
  FUNC_4(10, 20);
 }

 FUNC_3(VAR_4->ndev, "MII_MGMT write failed\n");
}
