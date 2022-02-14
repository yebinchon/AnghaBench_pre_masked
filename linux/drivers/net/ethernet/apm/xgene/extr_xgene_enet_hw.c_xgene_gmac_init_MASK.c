
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {int rx_pause; int tx_pause; int mdio_driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct xgene_enet_pdata*,int ,int*) ;
 int FUNC_2 (struct xgene_enet_pdata*,int ) ;
 int FUNC_3 (struct xgene_enet_pdata*,int ,int*) ;
 int FUNC_4 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_5 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_6 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_7 (struct xgene_enet_pdata*,int ) ;
 int FUNC_8 (struct xgene_enet_pdata*,int ) ;
 int FUNC_9 (struct xgene_enet_pdata*) ;
 int FUNC_10 (struct xgene_enet_pdata*) ;
 int FUNC_11 (struct xgene_enet_pdata*) ;

__attribute__((used)) static void FUNC_12(struct xgene_enet_pdata *VAR_18)
{
 u32 VAR_19;

 if (!VAR_18->mdio_driver)
  FUNC_9(VAR_18);

 FUNC_11(VAR_18);
 FUNC_10(VAR_18);


 VAR_19 = FUNC_2(VAR_18, VAR_7);
 FUNC_0(&VAR_19, 7);
 FUNC_5(VAR_18, VAR_7, VAR_19);


 FUNC_1(VAR_18, VAR_10, &VAR_19);
 VAR_19 |= VAR_2;
 FUNC_4(VAR_18, VAR_10, VAR_19);


 FUNC_4(VAR_18, VAR_11, 0);


 FUNC_3(VAR_18, VAR_3, &VAR_19);
 VAR_19 = (VAR_6 << 16) | (VAR_19 & 0xFFFF);
 FUNC_6(VAR_18, VAR_3, VAR_19);

 FUNC_4(VAR_18, VAR_13, VAR_5);
 FUNC_4(VAR_18, VAR_12, VAR_4);

 FUNC_8(VAR_18, VAR_18->tx_pause);
 FUNC_7(VAR_18, VAR_18->rx_pause);


 FUNC_4(VAR_18, VAR_1, VAR_17);

 FUNC_3(VAR_18, VAR_15, &VAR_19);
 VAR_19 &= ~VAR_16;
 VAR_19 &= ~VAR_14;
 VAR_19 |= VAR_8;
 FUNC_6(VAR_18, VAR_15, VAR_19);

 FUNC_4(VAR_18, VAR_0, VAR_9);
}
