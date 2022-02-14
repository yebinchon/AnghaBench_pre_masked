
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {scalar_t__ enet_id; int rx_pause; int tx_pause; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (struct xgene_enet_pdata*,int ,int*) ;
 int FUNC_4 (struct xgene_enet_pdata*,int ,int*) ;
 int FUNC_5 (struct xgene_enet_pdata*,int ) ;
 int FUNC_6 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_7 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_8 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_9 (struct xgene_enet_pdata*,int ) ;
 int FUNC_10 (struct xgene_enet_pdata*,int ) ;
 int FUNC_11 (struct xgene_enet_pdata*) ;
 int FUNC_12 (struct xgene_enet_pdata*) ;

__attribute__((used)) static void FUNC_13(struct xgene_enet_pdata *VAR_21)
{
 u32 VAR_22;

 FUNC_11(VAR_21);

 VAR_22 = FUNC_5(VAR_21, VAR_0);
 VAR_22 |= VAR_4;
 VAR_22 &= ~VAR_3;
 FUNC_8(VAR_21, VAR_0, VAR_22);

 FUNC_12(VAR_21);

 FUNC_4(VAR_21, VAR_18, &VAR_22);
 VAR_22 |= VAR_1;

 FUNC_1(&VAR_22, VAR_16);
 FUNC_7(VAR_21, VAR_18, VAR_22);


 FUNC_4(VAR_21, VAR_17, &VAR_22);
 FUNC_2(&VAR_22, VAR_19);
 FUNC_7(VAR_21, VAR_17, VAR_22);

 FUNC_4(VAR_21, VAR_15, &VAR_22);
 VAR_22 |= FUNC_0(12);
 FUNC_7(VAR_21, VAR_15, VAR_22);
 FUNC_7(VAR_21, VAR_14, 0x82);
 FUNC_7(VAR_21, VAR_9, 0);
 FUNC_7(VAR_21, VAR_11, VAR_6);


 FUNC_3(VAR_21, VAR_7, &VAR_22);
 VAR_22 = (VAR_2 << 16) | (VAR_22 & 0xFFFF);
 FUNC_6(VAR_21, VAR_7, VAR_22);

 if (VAR_21->enet_id != VAR_10) {
  FUNC_3(VAR_21, VAR_8, &VAR_22);
  VAR_22 = (VAR_5 << 16) | (VAR_22 & 0xFFFF);
  FUNC_6(VAR_21, VAR_8, VAR_22);
 }

 VAR_22 = (VAR_12 << 16) | VAR_13;
 FUNC_7(VAR_21, VAR_20, VAR_22);

 FUNC_10(VAR_21, VAR_21->tx_pause);
 FUNC_9(VAR_21, VAR_21->rx_pause);
}
