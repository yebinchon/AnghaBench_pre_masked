
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_desc_if {int (* wrapper_rx_desc_init ) (struct xgbe_prv_data*) ;int (* wrapper_tx_desc_init ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int rx_threshold; int tx_threshold; int rx_sf_mode; int tx_sf_mode; int netdev; struct xgbe_desc_if desc_if; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;
 int FUNC_11 (struct xgbe_prv_data*) ;
 int FUNC_12 (struct xgbe_prv_data*) ;
 int FUNC_13 (struct xgbe_prv_data*) ;
 int FUNC_14 (struct xgbe_prv_data*) ;
 int FUNC_15 (struct xgbe_prv_data*) ;
 int FUNC_16 (struct xgbe_prv_data*) ;
 int FUNC_17 (struct xgbe_prv_data*,int ) ;
 int FUNC_18 (struct xgbe_prv_data*) ;
 int FUNC_19 (struct xgbe_prv_data*) ;
 int FUNC_20 (struct xgbe_prv_data*) ;
 int FUNC_21 (struct xgbe_prv_data*) ;
 int FUNC_22 (struct xgbe_prv_data*) ;
 int FUNC_23 (struct xgbe_prv_data*,int ) ;
 int FUNC_24 (struct xgbe_prv_data*) ;
 int FUNC_25 (struct xgbe_prv_data*,int ) ;
 int FUNC_26 (struct xgbe_prv_data*) ;
 int FUNC_27 (struct xgbe_prv_data*) ;
 int FUNC_28 (struct xgbe_prv_data*) ;
 int FUNC_29 (struct xgbe_prv_data*,int ) ;
 int FUNC_30 (struct xgbe_prv_data*) ;
 int FUNC_31 (struct xgbe_prv_data*) ;
 int FUNC_32 (struct xgbe_prv_data*) ;
 int FUNC_33 (struct xgbe_prv_data*) ;
 int FUNC_34 (struct xgbe_prv_data*) ;
 int FUNC_35 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_36(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_desc_if *VAR_1 = &VAR_0->desc_if;
 int VAR_2;

 FUNC_0("-->xgbe_init\n");


 VAR_2 = FUNC_35(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_0->netdev, "error flushing TX queues\n");
  return VAR_2;
 }




 FUNC_6(VAR_0);
 FUNC_7(VAR_0);
 FUNC_14(VAR_0);
 FUNC_15(VAR_0);
 FUNC_20(VAR_0);
 FUNC_27(VAR_0);
 FUNC_19(VAR_0);
 FUNC_26(VAR_0);
 FUNC_24(VAR_0);
 FUNC_18(VAR_0);
 VAR_1->wrapper_tx_desc_init(VAR_0);
 VAR_1->wrapper_rx_desc_init(VAR_0);
 FUNC_31(VAR_0);




 FUNC_13(VAR_0);
 FUNC_16(VAR_0);
 FUNC_25(VAR_0, VAR_0->tx_sf_mode);
 FUNC_17(VAR_0, VAR_0->rx_sf_mode);
 FUNC_29(VAR_0, VAR_0->tx_threshold);
 FUNC_23(VAR_0, VAR_0->rx_threshold);
 FUNC_28(VAR_0);
 FUNC_21(VAR_0);



 FUNC_5(VAR_0);
 FUNC_34(VAR_0);




 FUNC_10(VAR_0);
 FUNC_22(VAR_0);
 FUNC_9(VAR_0);
 FUNC_8(VAR_0);
 FUNC_11(VAR_0);
 FUNC_4(VAR_0);
 FUNC_30(VAR_0);
 FUNC_12(VAR_0);
 FUNC_33(VAR_0);




 FUNC_32(VAR_0);

 FUNC_0("<--xgbe_init\n");

 return 0;
}
