
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* speed; int * txeyetuning; int * txeyedirection; int * txamplitude; int * txprecursor_cn2; int * txpostcursor_cp1; int * txprecursor_cn1; int * txboostgain; } ;
struct xgene_phy_ctx {TYPE_1__ sata_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int VAR_9 ;
 int FUNC_8 (int,int) ;
 int VAR_10 ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int VAR_11 ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int,int) ;
 int VAR_16 ;
 int FUNC_23 (int,int) ;
 int FUNC_24 (int,int) ;
 int FUNC_25 (int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_26 (int,int ) ;
 int VAR_19 ;
 int FUNC_27 (int,int ) ;
 int FUNC_28 (int,int ) ;
 int FUNC_29 (int,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_30 (int,int) ;
 int FUNC_31 (int,int) ;
 int FUNC_32 (int,int) ;
 int VAR_22 ;
 int FUNC_33 (int,int) ;
 int FUNC_34 (int,int) ;
 int FUNC_35 (int,int) ;
 int FUNC_36 (int,int ) ;
 int FUNC_37 (int,int) ;
 int FUNC_38 (int,int) ;
 int VAR_23 ;
 int FUNC_39 (int,int) ;
 int FUNC_40 (int,int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_41 (int,int) ;
 int FUNC_42 (int,int) ;
 int FUNC_43 (int,int) ;
 int FUNC_44 (int,int) ;
 int FUNC_45 (int,int) ;
 int FUNC_46 (int,int) ;
 int FUNC_47 (int,int) ;
 int FUNC_48 (int,int) ;
 int VAR_26 ;
 int FUNC_49 (int,int) ;
 int FUNC_50 (int,int) ;
 int FUNC_51 (int,int) ;
 int VAR_27 ;
 int FUNC_52 (int,int) ;
 int FUNC_53 (int,int) ;
 int FUNC_54 (int,int) ;
 scalar_t__ VAR_28 ;
 int FUNC_55 (struct xgene_phy_ctx*,int,int,int*) ;
 int FUNC_56 (struct xgene_phy_ctx*,int,int,int) ;

__attribute__((used)) static void FUNC_57(struct xgene_phy_ctx *VAR_29)
{
 u32 VAR_30;
 u32 VAR_31;
 int VAR_32;
 int VAR_33;

 for (VAR_33 = 0; VAR_33 < VAR_1; VAR_33++) {
  FUNC_56(VAR_29, VAR_33, VAR_12, 0x6);


  FUNC_55(VAR_29, VAR_33, VAR_2, &VAR_30);
  VAR_30 = FUNC_1(VAR_30, 0x10);
  VAR_30 = FUNC_2(VAR_30, 0x10);
  VAR_30 = FUNC_0(VAR_30, 0x10);
  FUNC_56(VAR_29, VAR_33, VAR_2, VAR_30);


  FUNC_55(VAR_29, VAR_33, VAR_3, &VAR_30);
  VAR_30 = FUNC_18(VAR_30, 0x7);
  VAR_30 = FUNC_17(VAR_30,
   VAR_29->sata_param.txboostgain[VAR_33 * 3 +
   VAR_29->sata_param.speed[VAR_33]]);
  FUNC_56(VAR_29, VAR_33, VAR_3, VAR_30);



  FUNC_55(VAR_29, VAR_33, VAR_14, &VAR_30);
  VAR_30 = FUNC_24(VAR_30, 0x1);
  VAR_30 = FUNC_25(VAR_30, 0x1);
  VAR_30 = FUNC_23(VAR_30, 0x1);
  FUNC_56(VAR_29, VAR_33, VAR_14, VAR_30);


  FUNC_55(VAR_29, VAR_33, VAR_18, &VAR_30);
  VAR_30 = FUNC_26(VAR_30, VAR_0);
  FUNC_56(VAR_29, VAR_33, VAR_18, VAR_30);

  if (!VAR_28) {
   FUNC_55(VAR_29, VAR_33, VAR_3, &VAR_30);
   VAR_30 = FUNC_20(VAR_30, 0x2);
   VAR_30 = FUNC_19(VAR_30, 0x2);
   FUNC_56(VAR_29, VAR_33, VAR_3, VAR_30);
  }


  FUNC_55(VAR_29, VAR_33, VAR_19, &VAR_30);
  VAR_30 = FUNC_27(VAR_30,
   VAR_29->sata_param.txprecursor_cn1[VAR_33 * 3 +
   VAR_29->sata_param.speed[VAR_33]]);
  VAR_30 = FUNC_29(VAR_30,
   VAR_29->sata_param.txpostcursor_cp1[VAR_33 * 3 +
   VAR_29->sata_param.speed[VAR_33]]);
  VAR_30 = FUNC_28(VAR_30,
   VAR_29->sata_param.txprecursor_cn2[VAR_33 * 3 +
   VAR_29->sata_param.speed[VAR_33]]);
  FUNC_56(VAR_29, VAR_33, VAR_19, VAR_30);


  FUNC_55(VAR_29, VAR_33, VAR_20, &VAR_30);
  VAR_30 = FUNC_36(VAR_30,
   VAR_29->sata_param.txamplitude[VAR_33 * 3 +
   VAR_29->sata_param.speed[VAR_33]]);
  VAR_30 = FUNC_37(VAR_30, 0x1);
  VAR_30 = FUNC_38(VAR_30, 0x0);
  VAR_30 = FUNC_35(VAR_30, 0x0);
  VAR_30 = FUNC_34(VAR_30, 0x0);
  FUNC_56(VAR_29, VAR_33, VAR_20, VAR_30);


  FUNC_55(VAR_29, VAR_33, VAR_23, &VAR_30);
  VAR_30 = FUNC_39(VAR_30, 0x0);
  VAR_30 = FUNC_40(VAR_30, VAR_0);
  FUNC_56(VAR_29, VAR_33, VAR_23, VAR_30);


  FUNC_55(VAR_29, VAR_33, VAR_24, &VAR_30);
  VAR_30 = FUNC_45(VAR_30, 0x1);
  VAR_30 = FUNC_44(VAR_30, 0x0);
  VAR_30 = FUNC_48(VAR_30, 0x1);
  VAR_30 = FUNC_46(VAR_30, 0x0);
  VAR_30 = FUNC_47(VAR_30, 0x4);
  FUNC_56(VAR_29, VAR_33, VAR_24, VAR_30);


  FUNC_55(VAR_29, VAR_33, VAR_5, &VAR_30);
  VAR_30 = FUNC_4(VAR_30, 0x0);
  FUNC_56(VAR_29, VAR_33, VAR_5, VAR_30);


  FUNC_55(VAR_29, VAR_33, VAR_7, &VAR_30);
  VAR_30 = FUNC_10(VAR_30, 0x1);
  VAR_30 = FUNC_12(VAR_30, 0x0);
  VAR_30 = FUNC_11(VAR_30, 0x0);
  FUNC_56(VAR_29, VAR_33, VAR_7, VAR_30);


  FUNC_55(VAR_29, VAR_33, VAR_15, &VAR_30);
  VAR_30 = FUNC_22(VAR_30, 0x0);
  VAR_30 = FUNC_21(VAR_30, 0x1);
  FUNC_56(VAR_29, VAR_33, VAR_15, VAR_30);

  FUNC_56(VAR_29, VAR_33, VAR_16, 0x0);


  FUNC_56(VAR_29, VAR_33, VAR_17, 0x0);


  FUNC_55(VAR_29, VAR_33, VAR_21, &VAR_30);
  VAR_30 = FUNC_31(VAR_30, 0x1);
  VAR_30 = FUNC_32(VAR_30, 0x0);
  VAR_30 = FUNC_30(VAR_30, 0x0);
  FUNC_56(VAR_29, VAR_33, VAR_21, VAR_30);

  FUNC_55(VAR_29, VAR_33, VAR_22, &VAR_30);
  VAR_30 = FUNC_33(VAR_30, 0x0);
  FUNC_56(VAR_29, VAR_33, VAR_22, VAR_30);


  for (VAR_32 = 0; VAR_32 < 9; VAR_32++) {
   VAR_31 = VAR_25 + VAR_32 * 2;
   FUNC_55(VAR_29, VAR_33, VAR_31, &VAR_30);
   VAR_30 = FUNC_41(VAR_30, 0xe);
   VAR_30 = FUNC_42(VAR_30, 0xe);
   VAR_30 = FUNC_43(VAR_30, 0xe);
   FUNC_56(VAR_29, VAR_33, VAR_31, VAR_30);
  }


  for (VAR_32 = 0; VAR_32 < 3; VAR_32++) {
   VAR_31 = VAR_26 + VAR_32 * 2;
   FUNC_55(VAR_29, VAR_33, VAR_31, &VAR_30);
   VAR_30 = FUNC_49(VAR_30, 0x10);
   VAR_30 = FUNC_50(VAR_30, 0x10);
   VAR_30 = FUNC_51(VAR_30, 0x10);
   FUNC_56(VAR_29, VAR_33, VAR_31, VAR_30);
  }


  for (VAR_32 = 0; VAR_32 < 3; VAR_32++) {
   VAR_31 = VAR_27 + VAR_32 * 2;
   FUNC_55(VAR_29, VAR_33, VAR_31, &VAR_30);
   VAR_30 = FUNC_52(VAR_30, 0x7);
   VAR_30 = FUNC_53(VAR_30, 0x7);
   VAR_30 = FUNC_54(VAR_30, 0x7);
   FUNC_56(VAR_29, VAR_33, VAR_31, VAR_30);
  }

  FUNC_55(VAR_29, VAR_33, VAR_4, &VAR_30);
  VAR_30 = FUNC_3(VAR_30, 0x0);
  FUNC_56(VAR_29, VAR_33, VAR_4, VAR_30);

  FUNC_56(VAR_29, VAR_33, VAR_6, 0xffe0);

  FUNC_55(VAR_29, VAR_33, VAR_8, &VAR_30);
  VAR_30 = FUNC_7(VAR_30,
   VAR_29->sata_param.txeyedirection[VAR_33 * 3 +
   VAR_29->sata_param.speed[VAR_33]]);
  VAR_30 = FUNC_6(VAR_30,
   VAR_29->sata_param.txeyetuning[VAR_33 * 3 +
   VAR_29->sata_param.speed[VAR_33]]);
  VAR_30 = FUNC_5(VAR_30, 0x1);
  FUNC_56(VAR_29, VAR_33, VAR_8, VAR_30);

  FUNC_55(VAR_29, VAR_33, VAR_9, &VAR_30);
  VAR_30 = FUNC_8(VAR_30, 0x0);
  FUNC_56(VAR_29, VAR_33, VAR_9, VAR_30);

  FUNC_55(VAR_29, VAR_33, VAR_10, &VAR_30);
  VAR_30 = FUNC_9(VAR_30, 0x3);
  FUNC_56(VAR_29, VAR_33, VAR_10, VAR_30);

  FUNC_55(VAR_29, VAR_33, VAR_11, &VAR_30);
  VAR_30 = FUNC_13(VAR_30, 0x3);
  VAR_30 = FUNC_16(VAR_30, 0x0);
  if (VAR_28) {
   VAR_30 = FUNC_14(VAR_30, 0x1);
   VAR_30 = FUNC_15(VAR_30, 0x1);
  } else {
   VAR_30 = FUNC_14(VAR_30, 0x0);
   VAR_30 = FUNC_15(VAR_30, 0x0);
  }
  FUNC_56(VAR_29, VAR_33, VAR_11, VAR_30);





  for (VAR_32 = 0; VAR_32 < 4; VAR_32++) {
   VAR_31 = VAR_13 + VAR_32 * 2;
   FUNC_56(VAR_29, VAR_33, VAR_31, 0xFFFF);
  }
 }
}
