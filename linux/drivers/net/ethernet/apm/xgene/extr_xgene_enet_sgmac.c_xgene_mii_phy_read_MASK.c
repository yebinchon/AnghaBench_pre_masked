
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xgene_enet_pdata {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct xgene_enet_pdata*,int ) ;
 int FUNC_5 (struct xgene_enet_pdata*,int ,int) ;

__attribute__((used)) static u32 FUNC_6(struct xgene_enet_pdata *VAR_6, u8 VAR_7, u32 VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = FUNC_0(VAR_7) | FUNC_1(VAR_8);
 FUNC_5(VAR_6, VAR_1, VAR_9);
 FUNC_5(VAR_6, VAR_2, VAR_5);

 for (VAR_12 = 0; VAR_12 < 10; VAR_12++) {
  VAR_11 = FUNC_4(VAR_6, VAR_3);
  if (!(VAR_11 & VAR_0)) {
   VAR_10 = FUNC_4(VAR_6, VAR_4);
   FUNC_5(VAR_6, VAR_2, 0);

   return VAR_10;
  }
  FUNC_3(10, 20);
 }

 FUNC_2(VAR_6->ndev, "MII_MGMT read failed\n");

 return 0;
}
