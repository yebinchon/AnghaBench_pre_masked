
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_phy_ctx {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int VAR_4 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int VAR_5 ;
 int FUNC_8 (int,int ) ;
 int VAR_6 ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int VAR_7 ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int) ;
 int VAR_8 ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_9 ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int VAR_10 ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int VAR_11 ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_23 (int ,char*,...) ;
 int FUNC_24 (int ,char*,int) ;
 int FUNC_25 (struct xgene_phy_ctx*,int,int ,int*) ;
 int FUNC_26 (struct xgene_phy_ctx*,int,int ,int ) ;
 int FUNC_27 (struct xgene_phy_ctx*,int,int ,int) ;
 int FUNC_28 (struct xgene_phy_ctx*,int) ;
 int FUNC_29 (int,int) ;
 int FUNC_30 (struct xgene_phy_ctx*,int) ;

__attribute__((used)) static void FUNC_31(struct xgene_phy_ctx *VAR_14, int VAR_15)
{
 int VAR_16 = 10;
 int VAR_17 = 0;
 int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 int VAR_22 = 0, VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34;
 int VAR_35;
 int VAR_36;
 int VAR_37;
 u32 VAR_38;

 FUNC_23(VAR_14->dev, "Generating avg calibration value for lane %d\n",
  VAR_15);


 FUNC_26(VAR_14, VAR_15, VAR_0,
   VAR_5);

 FUNC_27(VAR_14, VAR_15, VAR_12, 0x0000);

 FUNC_27(VAR_14, VAR_15, VAR_13, 0x0000);
 while (VAR_17 < VAR_16) {

  FUNC_28(VAR_14, VAR_15);

  FUNC_25(VAR_14, VAR_15, VAR_8, &VAR_38);
  VAR_27 = FUNC_13(VAR_38);
  VAR_28 = FUNC_15(VAR_38);
  VAR_37 = FUNC_14(VAR_38);

  FUNC_25(VAR_14, VAR_15, VAR_9, &VAR_38);
  VAR_29 = FUNC_16(VAR_38);
  VAR_30 = FUNC_18(VAR_38);
  VAR_36 = FUNC_17(VAR_38);

  FUNC_25(VAR_14, VAR_15, VAR_10, &VAR_38);
  VAR_31 = FUNC_19(VAR_38);
  VAR_32 = FUNC_20(VAR_38);

  FUNC_25(VAR_14, VAR_15, VAR_11, &VAR_38);
  VAR_33 = FUNC_21(VAR_38);
  VAR_34 = FUNC_22(VAR_38);

  FUNC_25(VAR_14, VAR_15, VAR_1, &VAR_38);
  VAR_35 = FUNC_0(VAR_38);


  if ((VAR_36 == 0 || VAR_36 == 1) &&
      (VAR_37 == 0 || VAR_37 == 1)) {
   VAR_18 += VAR_27;
   VAR_19 += VAR_28;
   VAR_20 += VAR_29;
   VAR_21 += VAR_30;
   VAR_22 += VAR_31;
   VAR_23 += VAR_32;
   VAR_24 += VAR_33;
   VAR_25 += VAR_34;
   VAR_26 += VAR_35;

   FUNC_23(VAR_14->dev, "Iteration %d:\n", VAR_17);
   FUNC_23(VAR_14->dev, "DO 0x%x XO 0x%x EO 0x%x SO 0x%x\n",
    VAR_27, VAR_28, VAR_29,
    VAR_30);
   FUNC_23(VAR_14->dev, "DE 0x%x XE 0x%x EE 0x%x SE 0x%x\n",
    VAR_31, VAR_32, VAR_33,
    VAR_34);
   FUNC_23(VAR_14->dev, "SUM 0x%x\n", VAR_35);
   ++VAR_17;
  } else {
   FUNC_24(VAR_14->dev,
    "Receiver calibration failed at %d loop\n",
    VAR_17);
  }
  FUNC_30(VAR_14, VAR_15);
 }


 FUNC_25(VAR_14, VAR_15, VAR_2, &VAR_38);
 VAR_38 = FUNC_1(VAR_38,
  FUNC_29(VAR_18, VAR_16));
 VAR_38 = FUNC_3(VAR_38,
  FUNC_29(VAR_19, VAR_16));
 FUNC_27(VAR_14, VAR_15, VAR_2, VAR_38);

 FUNC_25(VAR_14, VAR_15, VAR_3, &VAR_38);
 VAR_38 = FUNC_4(VAR_38,
  FUNC_29(VAR_20, VAR_16));
 VAR_38 = FUNC_5(VAR_38,
  FUNC_29(VAR_21, VAR_16));
 FUNC_27(VAR_14, VAR_15, VAR_3, VAR_38);

 FUNC_25(VAR_14, VAR_15, VAR_4, &VAR_38);
 VAR_38 = FUNC_6(VAR_38,
  FUNC_29(VAR_22, VAR_16));
 VAR_38 = FUNC_7(VAR_38,
  FUNC_29(VAR_23, VAR_16));
 FUNC_27(VAR_14, VAR_15, VAR_4, VAR_38);

 FUNC_25(VAR_14, VAR_15, VAR_6, &VAR_38);
 VAR_38 = FUNC_9(VAR_38,
  FUNC_29(VAR_24, VAR_16));
 VAR_38 = FUNC_10(VAR_38,
  FUNC_29(VAR_25, VAR_16));
 FUNC_27(VAR_14, VAR_15, VAR_6, VAR_38);


 FUNC_25(VAR_14, VAR_15, VAR_7, &VAR_38);
 VAR_38 = FUNC_11(VAR_38,
  FUNC_29(VAR_26, VAR_16));
 FUNC_27(VAR_14, VAR_15, VAR_7, VAR_38);

 FUNC_23(VAR_14->dev, "Average Value:\n");
 FUNC_23(VAR_14->dev, "DO 0x%x XO 0x%x EO 0x%x SO 0x%x\n",
   FUNC_29(VAR_18, VAR_16),
   FUNC_29(VAR_19, VAR_16),
   FUNC_29(VAR_20, VAR_16),
   FUNC_29(VAR_21, VAR_16));
 FUNC_23(VAR_14->dev, "DE 0x%x XE 0x%x EE 0x%x SE 0x%x\n",
   FUNC_29(VAR_22, VAR_16),
   FUNC_29(VAR_23, VAR_16),
   FUNC_29(VAR_24, VAR_16),
   FUNC_29(VAR_25, VAR_16));
 FUNC_23(VAR_14->dev, "SUM 0x%x\n",
  FUNC_29(VAR_26, VAR_16));

 FUNC_25(VAR_14, VAR_15, VAR_7, &VAR_38);
 VAR_38 = FUNC_12(VAR_38, 0x1);
 FUNC_27(VAR_14, VAR_15, VAR_7, VAR_38);
 FUNC_23(VAR_14->dev, "Enable Manual Summer calibration\n");

 FUNC_25(VAR_14, VAR_15, VAR_2, &VAR_38);
 VAR_38 = FUNC_2(VAR_38, 0x1);
 FUNC_23(VAR_14->dev, "Enable Manual Latch calibration\n");
 FUNC_27(VAR_14, VAR_15, VAR_2, VAR_38);


 FUNC_25(VAR_14, VAR_15, VAR_0, &VAR_38);
 VAR_38 = FUNC_8(VAR_38, 0);
 FUNC_27(VAR_14, VAR_15, VAR_0, VAR_38);

 FUNC_27(VAR_14, VAR_15, VAR_12, 0x0007);

 FUNC_27(VAR_14, VAR_15, VAR_13, 0x7e00);
}
