
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_desc_ops {int (* rx_desc_init ) (struct xlgmac_pdata*) ;int (* tx_desc_init ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {int rx_threshold; int tx_threshold; int rx_sf_mode; int tx_sf_mode; struct xlgmac_desc_ops desc_ops; } ;


 int FUNC_0 (struct xlgmac_pdata*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;
 int FUNC_2 (struct xlgmac_pdata*) ;
 int FUNC_3 (struct xlgmac_pdata*) ;
 int FUNC_4 (struct xlgmac_pdata*) ;
 int FUNC_5 (struct xlgmac_pdata*) ;
 int FUNC_6 (struct xlgmac_pdata*) ;
 int FUNC_7 (struct xlgmac_pdata*) ;
 int FUNC_8 (struct xlgmac_pdata*) ;
 int FUNC_9 (struct xlgmac_pdata*) ;
 int FUNC_10 (struct xlgmac_pdata*) ;
 int FUNC_11 (struct xlgmac_pdata*) ;
 int FUNC_12 (struct xlgmac_pdata*) ;
 int FUNC_13 (struct xlgmac_pdata*) ;
 int FUNC_14 (struct xlgmac_pdata*,int ) ;
 int FUNC_15 (struct xlgmac_pdata*) ;
 int FUNC_16 (struct xlgmac_pdata*) ;
 int FUNC_17 (struct xlgmac_pdata*) ;
 int FUNC_18 (struct xlgmac_pdata*) ;
 int FUNC_19 (struct xlgmac_pdata*) ;
 int FUNC_20 (struct xlgmac_pdata*) ;
 int FUNC_21 (struct xlgmac_pdata*) ;
 int FUNC_22 (struct xlgmac_pdata*) ;
 int FUNC_23 (struct xlgmac_pdata*,int ) ;
 int FUNC_24 (struct xlgmac_pdata*) ;
 int FUNC_25 (struct xlgmac_pdata*,int ) ;
 int FUNC_26 (struct xlgmac_pdata*) ;
 int FUNC_27 (struct xlgmac_pdata*) ;
 int FUNC_28 (struct xlgmac_pdata*) ;
 int FUNC_29 (struct xlgmac_pdata*) ;
 int FUNC_30 (struct xlgmac_pdata*,int ) ;
 int FUNC_31 (struct xlgmac_pdata*) ;
 int FUNC_32 (struct xlgmac_pdata*) ;
 int FUNC_33 (struct xlgmac_pdata*) ;
 int FUNC_34 (struct xlgmac_pdata*) ;
 int FUNC_35 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_36(struct xlgmac_pdata *VAR_0)
{
 struct xlgmac_desc_ops *VAR_1 = &VAR_0->desc_ops;
 int VAR_2;


 VAR_2 = FUNC_35(VAR_0);
 if (VAR_2)
  return VAR_2;


 FUNC_3(VAR_0);
 FUNC_11(VAR_0);
 FUNC_12(VAR_0);
 FUNC_29(VAR_0);
 FUNC_22(VAR_0);
 FUNC_17(VAR_0);
 FUNC_27(VAR_0);
 FUNC_16(VAR_0);
 FUNC_26(VAR_0);
 FUNC_24(VAR_0);
 FUNC_15(VAR_0);
 VAR_1->tx_desc_init(VAR_0);
 VAR_1->rx_desc_init(VAR_0);
 FUNC_32(VAR_0);


 FUNC_10(VAR_0);
 FUNC_13(VAR_0);
 FUNC_25(VAR_0, VAR_0->tx_sf_mode);
 FUNC_14(VAR_0, VAR_0->rx_sf_mode);
 FUNC_30(VAR_0, VAR_0->tx_threshold);
 FUNC_23(VAR_0, VAR_0->rx_threshold);
 FUNC_28(VAR_0);
 FUNC_19(VAR_0);
 FUNC_5(VAR_0);
 FUNC_18(VAR_0);
 FUNC_20(VAR_0);
 FUNC_34(VAR_0);


 FUNC_7(VAR_0);
 FUNC_21(VAR_0);
 FUNC_6(VAR_0);
 FUNC_4(VAR_0);
 FUNC_8(VAR_0);
 FUNC_2(VAR_0);
 FUNC_31(VAR_0);
 FUNC_9(VAR_0);
 FUNC_33(VAR_0);

 return 0;
}
