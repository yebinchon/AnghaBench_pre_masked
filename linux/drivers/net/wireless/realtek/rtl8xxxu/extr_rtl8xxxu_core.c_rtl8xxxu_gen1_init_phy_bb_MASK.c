
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl8xxxu_priv {int tx_paths; scalar_t__ rtl_chip; int chip_cut; scalar_t__ hi_pa; scalar_t__ vendor_umc; scalar_t__ has_bluetooth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,scalar_t__) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_6 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_7 (struct rtl8xxxu_priv*,scalar_t__,int) ;
 int FUNC_8 (int) ;

void FUNC_9(struct rtl8xxxu_priv *VAR_24)
{
 u8 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 u16 VAR_30;
 u32 VAR_31;

 VAR_25 = FUNC_4(VAR_24, VAR_7);
 FUNC_8(2);
 VAR_25 |= VAR_0;
 FUNC_7(VAR_24, VAR_7, VAR_25);
 FUNC_8(2);

 FUNC_7(VAR_24, VAR_7 + 1, 0xff);
 FUNC_8(2);

 VAR_30 = FUNC_2(VAR_24, VAR_12);
 VAR_30 |= VAR_18 | VAR_17;
 FUNC_5(VAR_24, VAR_12, VAR_30);

 VAR_31 = FUNC_3(VAR_24, VAR_8);
 VAR_31 &= ~VAR_2;
 if (VAR_24->has_bluetooth)
  VAR_31 &= ~VAR_1;
 FUNC_6(VAR_24, VAR_8, VAR_31);


 VAR_25 = VAR_13 | VAR_14 | VAR_15;
 FUNC_7(VAR_24, VAR_11, VAR_25);

 if (VAR_24->hi_pa)
  FUNC_1(VAR_24, VAR_19);
 else if (VAR_24->tx_paths == 2)
  FUNC_1(VAR_24, VAR_20);
 else
  FUNC_1(VAR_24, VAR_21);

 if (VAR_24->rtl_chip == VAR_16 && VAR_24->hi_pa &&
     VAR_24->vendor_umc && VAR_24->chip_cut == 1)
  FUNC_7(VAR_24, VAR_10 + 2, 0x50);

 if (VAR_24->hi_pa)
  FUNC_1(VAR_24, VAR_22);
 else
  FUNC_1(VAR_24, VAR_23);

 VAR_26 = VAR_3 | VAR_4;
 VAR_27 = VAR_5 | FUNC_0(2) | (2 << VAR_6);
 VAR_29 = 0x57;
 VAR_28 = 1;
 VAR_31 = (VAR_28 << 24) | (VAR_29 << 16) | (VAR_27 << 8) | VAR_26;
 FUNC_6(VAR_24, VAR_9, VAR_31);
}
