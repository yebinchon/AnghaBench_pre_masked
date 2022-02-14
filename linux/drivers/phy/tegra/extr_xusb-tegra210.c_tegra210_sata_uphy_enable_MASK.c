
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_sata_pad {scalar_t__ enable; int pll; int rst; } ;
struct tegra_xusb_padctl {int sata; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_40 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_4 (struct tegra_xusb_padctl*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 struct tegra_xusb_sata_pad* FUNC_11 (int ) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(struct tegra_xusb_padctl *VAR_41, bool VAR_42)
{
 struct tegra_xusb_sata_pad *VAR_43 = FUNC_11(VAR_41->sata);
 unsigned long VAR_44;
 u32 VAR_45;
 int VAR_46;

 if (VAR_43->enable > 0) {
  VAR_43->enable++;
  return 0;
 }

 VAR_46 = FUNC_1(VAR_43->pll);
 if (VAR_46 < 0)
  return VAR_46;

 VAR_46 = FUNC_6(VAR_43->rst);
 if (VAR_46 < 0)
  goto disable;

 VAR_45 = FUNC_3(VAR_41, VAR_36);
 VAR_45 &= ~(VAR_13 <<
     VAR_14);
 VAR_45 |= VAR_15 <<
   VAR_14;
 FUNC_4(VAR_41, VAR_45, VAR_36);

 VAR_45 = FUNC_3(VAR_41, VAR_38);
 VAR_45 &= ~(VAR_28 <<
     VAR_29);
 VAR_45 |= VAR_30 <<
   VAR_29;
 FUNC_4(VAR_41, VAR_45, VAR_38);

 VAR_45 = FUNC_3(VAR_41, VAR_35);
 VAR_45 |= VAR_10;
 FUNC_4(VAR_41, VAR_45, VAR_35);

 VAR_45 = FUNC_3(VAR_41, VAR_36);
 VAR_45 |= VAR_18;
 FUNC_4(VAR_41, VAR_45, VAR_36);

 VAR_45 = FUNC_3(VAR_41, VAR_39);
 VAR_45 |= VAR_34;
 FUNC_4(VAR_41, VAR_45, VAR_39);

 VAR_45 = FUNC_3(VAR_41, VAR_37);
 VAR_45 &= ~((VAR_23 <<
      VAR_25) |
     (VAR_20 <<
      VAR_21));
 VAR_45 |= VAR_22;

 if (VAR_42)
  VAR_45 |= (VAR_26 <<
     VAR_25);
 else
  VAR_45 |= (VAR_24 <<
     VAR_25);

 VAR_45 &= ~VAR_27;
 FUNC_4(VAR_41, VAR_45, VAR_37);

 VAR_45 = FUNC_3(VAR_41, VAR_35);
 VAR_45 &= ~((VAR_2 <<
      VAR_3) |
     (VAR_4 <<
      VAR_6));

 if (VAR_42)
  VAR_45 |= VAR_7 <<
    VAR_6;
 else
  VAR_45 |= VAR_5 <<
    VAR_6;

 FUNC_4(VAR_41, VAR_45, VAR_35);

 VAR_45 = FUNC_3(VAR_41, VAR_35);
 VAR_45 &= ~VAR_8;
 FUNC_4(VAR_41, VAR_45, VAR_35);

 VAR_45 = FUNC_3(VAR_41, VAR_35);
 VAR_45 &= ~(VAR_11 <<
     VAR_12);
 FUNC_4(VAR_41, VAR_45, VAR_35);

 FUNC_12(10, 20);

 VAR_45 = FUNC_3(VAR_41, VAR_37);
 VAR_45 |= VAR_19;
 FUNC_4(VAR_41, VAR_45, VAR_37);

 VAR_45 = FUNC_3(VAR_41, VAR_36);
 VAR_45 |= VAR_17;
 FUNC_4(VAR_41, VAR_45, VAR_36);

 VAR_44 = VAR_40 + FUNC_2(100);

 while (FUNC_10(VAR_40, VAR_44)) {
  VAR_45 = FUNC_3(VAR_41, VAR_36);
  if (VAR_45 & VAR_16)
   break;

  FUNC_12(10, 20);
 }

 if (FUNC_9(VAR_40, VAR_44)) {
  VAR_46 = -VAR_0;
  goto reset;
 }

 VAR_45 = FUNC_3(VAR_41, VAR_36);
 VAR_45 &= ~VAR_17;
 FUNC_4(VAR_41, VAR_45, VAR_36);

 VAR_44 = VAR_40 + FUNC_2(100);

 while (FUNC_10(VAR_40, VAR_44)) {
  VAR_45 = FUNC_3(VAR_41, VAR_36);
  if (!(VAR_45 & VAR_16))
   break;

  FUNC_12(10, 20);
 }

 if (FUNC_9(VAR_40, VAR_44)) {
  VAR_46 = -VAR_0;
  goto reset;
 }

 VAR_45 = FUNC_3(VAR_41, VAR_35);
 VAR_45 |= VAR_1;
 FUNC_4(VAR_41, VAR_45, VAR_35);

 VAR_44 = VAR_40 + FUNC_2(100);

 while (FUNC_10(VAR_40, VAR_44)) {
  VAR_45 = FUNC_3(VAR_41, VAR_35);
  if (VAR_45 & VAR_9)
   break;

  FUNC_12(10, 20);
 }

 if (FUNC_9(VAR_40, VAR_44)) {
  VAR_46 = -VAR_0;
  goto reset;
 }

 VAR_45 = FUNC_3(VAR_41, VAR_39);
 VAR_45 |= VAR_33 |
   VAR_31;
 FUNC_4(VAR_41, VAR_45, VAR_39);

 VAR_44 = VAR_40 + FUNC_2(100);

 while (FUNC_10(VAR_40, VAR_44)) {
  VAR_45 = FUNC_3(VAR_41, VAR_39);
  if (VAR_45 & VAR_32)
   break;

  FUNC_12(10, 20);
 }

 if (FUNC_9(VAR_40, VAR_44)) {
  VAR_46 = -VAR_0;
  goto reset;
 }

 VAR_45 = FUNC_3(VAR_41, VAR_39);
 VAR_45 &= ~VAR_33;
 FUNC_4(VAR_41, VAR_45, VAR_39);

 VAR_44 = VAR_40 + FUNC_2(100);

 while (FUNC_10(VAR_40, VAR_44)) {
  VAR_45 = FUNC_3(VAR_41, VAR_39);
  if (!(VAR_45 & VAR_32))
   break;

  FUNC_12(10, 20);
 }

 if (FUNC_9(VAR_40, VAR_44)) {
  VAR_46 = -VAR_0;
  goto reset;
 }

 VAR_45 = FUNC_3(VAR_41, VAR_39);
 VAR_45 &= ~VAR_31;
 FUNC_4(VAR_41, VAR_45, VAR_39);

 FUNC_7();

 VAR_45 = FUNC_3(VAR_41, VAR_35);
 VAR_45 &= ~VAR_10;
 FUNC_4(VAR_41, VAR_45, VAR_35);

 VAR_45 = FUNC_3(VAR_41, VAR_36);
 VAR_45 &= ~VAR_18;
 FUNC_4(VAR_41, VAR_45, VAR_36);

 VAR_45 = FUNC_3(VAR_41, VAR_39);
 VAR_45 &= ~VAR_34;
 FUNC_4(VAR_41, VAR_45, VAR_39);

 FUNC_12(10, 20);

 FUNC_8();

 VAR_43->enable++;

 return 0;

reset:
 FUNC_5(VAR_43->rst);
disable:
 FUNC_0(VAR_43->pll);
 return VAR_46;
}
