
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct alx_hw {scalar_t__ lnk_patch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_0 (struct alx_hw*,int ) ;
 int FUNC_1 (struct alx_hw*,int ,int*) ;
 int FUNC_2 (struct alx_hw*,int ,int ,int*) ;
 int FUNC_3 (struct alx_hw*,int ,int) ;
 int FUNC_4 (struct alx_hw*,int ,int) ;
 int FUNC_5 (struct alx_hw*,int ,int ,int) ;
 int FUNC_6 (struct alx_hw*,int ,int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct alx_hw *VAR_43)
{
 int VAR_44;
 u32 VAR_45;
 u16 VAR_46;


 VAR_45 = FUNC_0(VAR_43, VAR_28);
 VAR_45 &= ~(VAR_30 | VAR_35 |
   VAR_32 | VAR_36 |
   VAR_29);
 VAR_45 |= VAR_37;

 VAR_45 |= (VAR_34 | VAR_33);
 FUNC_3(VAR_43, VAR_28, VAR_45);
 FUNC_7(10);
 FUNC_3(VAR_43, VAR_28, VAR_45 | VAR_30);

 for (VAR_44 = 0; VAR_44 < VAR_31; VAR_44++)
  FUNC_7(10);


 FUNC_4(VAR_43, VAR_12, VAR_7);
 FUNC_4(VAR_43, VAR_14,
     VAR_39);
 FUNC_5(VAR_43, VAR_23, VAR_26,
     VAR_42);


 VAR_45 = FUNC_0(VAR_43, VAR_8);
 FUNC_3(VAR_43, VAR_8, VAR_45 & ~VAR_9);
 FUNC_5(VAR_43, VAR_17, VAR_20, 0);


 FUNC_4(VAR_43, VAR_16, VAR_41);
 FUNC_4(VAR_43, VAR_13, VAR_38);
 FUNC_4(VAR_43, VAR_15, VAR_40);
 FUNC_4(VAR_43, VAR_10, VAR_0);
 FUNC_1(VAR_43, VAR_11, &VAR_46);
 FUNC_4(VAR_43, VAR_11,
     VAR_46 & ~VAR_4);

 FUNC_5(VAR_43, VAR_17, VAR_21,
     VAR_22);
 FUNC_5(VAR_43, VAR_17, VAR_24,
     VAR_25);

 if (VAR_43->lnk_patch) {

  FUNC_2(VAR_43, VAR_23, VAR_18,
     &VAR_46);
  FUNC_5(VAR_43, VAR_23, VAR_18,
      VAR_46 | VAR_1);

  FUNC_1(VAR_43, VAR_11, &VAR_46);
  FUNC_4(VAR_43, VAR_11,
      VAR_46 | VAR_3);

  FUNC_2(VAR_43, VAR_23, VAR_19,
     &VAR_46);
  FUNC_5(VAR_43, VAR_23, VAR_19,
      VAR_46 | VAR_2);
 }


 FUNC_6(VAR_43, VAR_27, VAR_6 | VAR_5);
}
