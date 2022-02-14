
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {int phy_speed; int rx_delay; int tx_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 int FUNC_5 (struct xgene_enet_pdata*) ;
 int FUNC_6 (struct xgene_enet_pdata*,int ,int*) ;
 int FUNC_7 (struct xgene_enet_pdata*,int ) ;
 int FUNC_8 (struct xgene_enet_pdata*,int ,int*) ;
 int FUNC_9 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_10 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_11 (struct xgene_enet_pdata*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct xgene_enet_pdata *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19, VAR_20;

 FUNC_8(VAR_14, VAR_7, &VAR_15);
 FUNC_8(VAR_14, VAR_8, &VAR_16);
 VAR_17 = FUNC_7(VAR_14, VAR_11);
 VAR_18 = FUNC_7(VAR_14, VAR_9);
 FUNC_6(VAR_14, VAR_13, &VAR_19);

 switch (VAR_14->phy_speed) {
 case 129:
  FUNC_4(&VAR_17, 1);
  VAR_18 &= ~(VAR_5 | VAR_4);
  FUNC_0(&VAR_15, 0);
  FUNC_3(&VAR_16, 500);
  VAR_19 &= ~VAR_2;
  break;
 case 128:
  FUNC_4(&VAR_17, 1);
  VAR_18 &= ~VAR_4;
  VAR_18 |= VAR_5;
  FUNC_0(&VAR_15, 1);
  FUNC_3(&VAR_16, 80);
  VAR_19 &= ~VAR_2;
  break;
 default:
  FUNC_4(&VAR_17, 2);
  VAR_18 &= ~VAR_5;
  VAR_18 |= VAR_4;
  FUNC_0(&VAR_15, 2);
  FUNC_3(&VAR_16, 0);
  FUNC_2(&VAR_19, VAR_14->tx_delay);
  FUNC_1(&VAR_19, VAR_14->rx_delay);
  VAR_19 |= VAR_2;

  FUNC_6(VAR_14, VAR_3, &VAR_20);
  VAR_20 |= VAR_1 | VAR_0;
  FUNC_9(VAR_14, VAR_3, VAR_20);
  break;
 }

 VAR_17 |= VAR_6 | VAR_12 | VAR_10;
 FUNC_10(VAR_14, VAR_11, VAR_17);
 FUNC_10(VAR_14, VAR_9, VAR_18);
 FUNC_9(VAR_14, VAR_13, VAR_19);
 FUNC_5(VAR_14);

 FUNC_11(VAR_14, VAR_7, VAR_15);
 FUNC_11(VAR_14, VAR_8, VAR_16);
}
