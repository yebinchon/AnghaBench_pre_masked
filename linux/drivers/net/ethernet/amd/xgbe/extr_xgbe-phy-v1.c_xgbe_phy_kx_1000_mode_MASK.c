
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int * dfe_tap_ena; int * dfe_tap_cfg; int * pq_skew; int * blwc; int * tx_amp; int * cdr_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_4 (struct xgbe_prv_data*,int ,int ,int ) ;
 int VAR_24 ;
 int FUNC_5 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_9(struct xgbe_prv_data *VAR_25)
{
 struct xgbe_phy_data *VAR_26 = VAR_25->phy_data;
 unsigned int VAR_27;


 VAR_27 = FUNC_0(VAR_25, VAR_7, VAR_6);
 VAR_27 &= ~VAR_9;
 VAR_27 |= VAR_8;
 FUNC_1(VAR_25, VAR_7, VAR_6, VAR_27);

 VAR_27 = FUNC_0(VAR_25, VAR_7, VAR_3);
 VAR_27 &= ~VAR_5;
 VAR_27 |= VAR_4;
 FUNC_1(VAR_25, VAR_7, VAR_3, VAR_27);

 FUNC_7(VAR_25);


 FUNC_8(VAR_25);

 FUNC_4(VAR_25, VAR_17, VAR_2, VAR_22);
 FUNC_4(VAR_25, VAR_17, VAR_19, VAR_23);
 FUNC_4(VAR_25, VAR_17, VAR_10, VAR_21);

 FUNC_4(VAR_25, VAR_17, VAR_1,
      VAR_26->cdr_rate[VAR_20]);
 FUNC_4(VAR_25, VAR_17, VAR_18,
      VAR_26->tx_amp[VAR_20]);
 FUNC_3(VAR_25, VAR_15, VAR_0,
      VAR_26->blwc[VAR_20]);
 FUNC_3(VAR_25, VAR_13, VAR_11,
      VAR_26->pq_skew[VAR_20]);
 FUNC_3(VAR_25, VAR_14, VAR_12,
      VAR_26->dfe_tap_cfg[VAR_20]);
 FUNC_2(VAR_25, VAR_16,
        VAR_26->dfe_tap_ena[VAR_20]);

 FUNC_6(VAR_25);

 FUNC_5(VAR_25, VAR_24, VAR_25->netdev, "1GbE KX mode set\n");
}
