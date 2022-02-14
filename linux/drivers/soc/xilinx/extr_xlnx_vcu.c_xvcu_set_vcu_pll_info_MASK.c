
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xvcu_pll_cfg {int fbdiv; int res; int cp; int lfhf; int lock_cnt; int lock_dly; } ;
struct xvcu_device {int coreclk; int vcu_slcr_ba; int dev; int pll_ref; int logicore_reg_ba; } ;


 int FUNC_0 (struct xvcu_pll_cfg*) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 struct xvcu_pll_cfg* VAR_38 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct xvcu_device *VAR_39)
{
 u32 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
 u32 VAR_45, VAR_46, VAR_47;
 u32 VAR_48, VAR_49, VAR_50;
 u32 VAR_51, VAR_52, VAR_53;
 int VAR_54, VAR_55;
 const struct xvcu_pll_cfg *VAR_56 = ((void*)0);

 VAR_43 = FUNC_8(VAR_39->logicore_reg_ba, VAR_20);
 VAR_44 = FUNC_8(VAR_39->logicore_reg_ba, VAR_21);
 VAR_41 = FUNC_8(VAR_39->logicore_reg_ba, VAR_8) * VAR_7;
 VAR_42 = FUNC_8(VAR_39->logicore_reg_ba, VAR_13) * VAR_7;
 if (!VAR_42 || !VAR_41) {
  FUNC_6(VAR_39->dev, "Invalid mcu and core clock data\n");
  return -VAR_2;
 }

 VAR_40 = (VAR_43 * VAR_7) + (VAR_44 * (VAR_7 / VAR_3));
 FUNC_5(VAR_39->dev, "Ref clock from logicoreIP is %uHz\n", VAR_40);
 FUNC_5(VAR_39->dev, "Core clock from logicoreIP is %uHz\n", VAR_41);
 FUNC_5(VAR_39->dev, "Mcu clock from logicoreIP is %uHz\n", VAR_42);

 FUNC_1(VAR_39->pll_ref);
 VAR_54 = FUNC_4(VAR_39->pll_ref, VAR_40);
 if (VAR_54)
  FUNC_7(VAR_39->dev, "failed to set logicoreIP refclk rate\n");

 VAR_54 = FUNC_3(VAR_39->pll_ref);
 if (VAR_54) {
  FUNC_6(VAR_39->dev, "failed to enable pll_ref clock source\n");
  return VAR_54;
 }

 VAR_40 = FUNC_2(VAR_39->pll_ref);






 VAR_49 = FUNC_8(VAR_39->vcu_slcr_ba, VAR_22);
 VAR_48 = VAR_49 >> VAR_24;
 VAR_48 = VAR_48 & VAR_23;
 if (VAR_48 != 1) {
  FUNC_6(VAR_39->dev, "clkoutdiv value is invalid\n");
  return -VAR_2;
 }

 for (VAR_55 = FUNC_0(VAR_38) - 1; VAR_55 >= 0; VAR_55--) {
  const struct xvcu_pll_cfg *VAR_57 = &VAR_38[VAR_55];

  VAR_47 = VAR_57->fbdiv * VAR_40;
  if (VAR_47 >= VAR_5 && VAR_47 <= VAR_4) {
   VAR_50 = VAR_47 / VAR_32;
   if (VAR_47 % VAR_32 != 0)
    VAR_50++;
   VAR_52 = VAR_50 % VAR_41;
   if (VAR_52 < VAR_6) {
    VAR_46 = VAR_50 / VAR_41;
   } else if (VAR_41 - VAR_52 < VAR_6) {
    VAR_46 = VAR_50 / VAR_41;
    VAR_46++;
   } else {
    continue;
   }
   if (VAR_46 >= VAR_1 &&
       VAR_46 <= VAR_0) {
    VAR_56 = VAR_57;
    VAR_45 = VAR_50 / VAR_42;
    VAR_52 = VAR_50 % VAR_42;
    if (VAR_42 - VAR_52 < VAR_6)
     VAR_45++;
    break;
   }
  }
 }

 if (!VAR_56) {
  FUNC_6(VAR_39->dev, "Invalid clock combination.\n");
  return -VAR_2;
 }

 VAR_39->coreclk = VAR_50 / VAR_46;
 VAR_42 = VAR_50 / VAR_45;
 FUNC_5(VAR_39->dev, "Actual Ref clock freq is %uHz\n", VAR_40);
 FUNC_5(VAR_39->dev, "Actual Core clock freq is %uHz\n", VAR_39->coreclk);
 FUNC_5(VAR_39->dev, "Actual Mcu clock freq is %uHz\n", VAR_42);

 VAR_49 &= ~(VAR_26 << VAR_27);
 VAR_49 |= (VAR_56->fbdiv & VAR_26) <<
    VAR_27;
 VAR_49 &= ~(VAR_28 <<
     VAR_29);
 VAR_49 |= (VAR_25 & VAR_28) <<
    VAR_29;
 VAR_49 &= ~(VAR_30 <<
     VAR_31);
 VAR_49 |= (VAR_25 & VAR_30) <<
    VAR_31;
 FUNC_9(VAR_39->vcu_slcr_ba, VAR_22, VAR_49);


 VAR_53 = FUNC_8(VAR_39->vcu_slcr_ba, VAR_11);
 VAR_53 &= ~(VAR_33 << VAR_34);
 VAR_53 |= (VAR_46 & VAR_33) <<
   VAR_34;
 VAR_53 &= ~(VAR_35 << VAR_37);
 VAR_53 |= (VAR_36 & VAR_35) << VAR_37;
 FUNC_9(VAR_39->vcu_slcr_ba, VAR_11, VAR_53);

 VAR_53 = FUNC_8(VAR_39->vcu_slcr_ba, VAR_9);
 VAR_53 &= ~(VAR_33 << VAR_34);
 VAR_53 |= (VAR_46 & VAR_33) <<
   VAR_34;
 VAR_53 &= ~(VAR_35 << VAR_37);
 VAR_53 |= (VAR_36 & VAR_35) << VAR_37;
 FUNC_9(VAR_39->vcu_slcr_ba, VAR_9, VAR_53);

 VAR_53 = FUNC_8(VAR_39->vcu_slcr_ba, VAR_12);
 VAR_53 &= ~(VAR_33 << VAR_34);
 VAR_53 |= (VAR_45 & VAR_33) << VAR_34;
 VAR_53 &= ~(VAR_35 << VAR_37);
 VAR_53 |= (VAR_36 & VAR_35) << VAR_37;
 FUNC_9(VAR_39->vcu_slcr_ba, VAR_12, VAR_53);

 VAR_53 = FUNC_8(VAR_39->vcu_slcr_ba, VAR_10);
 VAR_53 &= ~(VAR_33 << VAR_34);
 VAR_53 |= (VAR_45 & VAR_33) << VAR_34;
 VAR_53 &= ~(VAR_35 << VAR_37);
 VAR_53 |= (VAR_36 & VAR_35) << VAR_37;
 FUNC_9(VAR_39->vcu_slcr_ba, VAR_10, VAR_53);


 VAR_51 = (VAR_56->res << VAR_19) |
     (VAR_56->cp << VAR_15) |
     (VAR_56->lfhf << VAR_16) |
     (VAR_56->lock_cnt << VAR_17) |
     (VAR_56->lock_dly << VAR_18);
 FUNC_9(VAR_39->vcu_slcr_ba, VAR_14, VAR_51);

 return 0;
}
