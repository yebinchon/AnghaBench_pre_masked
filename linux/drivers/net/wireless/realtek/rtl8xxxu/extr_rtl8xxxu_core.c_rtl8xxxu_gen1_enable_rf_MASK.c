
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl8xxxu_priv {int rf_paths; int tx_paths; scalar_t__ rtl_chip; } ;


 int FUNC_0 (int) ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int ,int) ;

void FUNC_6(struct rtl8xxxu_priv *VAR_15)
{
 u8 VAR_16;
 u32 VAR_17;

 VAR_16 = FUNC_2(VAR_15, VAR_8);
 VAR_16 |= FUNC_0(0) | FUNC_0(3);
 FUNC_4(VAR_15, VAR_8, VAR_16);

 VAR_17 = FUNC_1(VAR_15, VAR_5);
 VAR_17 &= ~(FUNC_0(4) | FUNC_0(5));
 VAR_17 |= FUNC_0(3);
 if (VAR_15->rf_paths == 2) {
  VAR_17 &= ~(FUNC_0(20) | FUNC_0(21));
  VAR_17 |= FUNC_0(19);
 }
 FUNC_3(VAR_15, VAR_5, VAR_17);

 VAR_17 = FUNC_1(VAR_15, VAR_6);
 VAR_17 &= ~VAR_3;
 if (VAR_15->tx_paths == 2)
  VAR_17 |= VAR_1 | VAR_2;
 else if (VAR_15->rtl_chip == VAR_14 || VAR_15->rtl_chip == VAR_13)
  VAR_17 |= VAR_2;
 else
  VAR_17 |= VAR_1;
 FUNC_3(VAR_15, VAR_6, VAR_17);

 VAR_17 = FUNC_1(VAR_15, VAR_4);
 VAR_17 &= ~VAR_0;
 FUNC_3(VAR_15, VAR_4, VAR_17);

 if (VAR_15->rf_paths == 2)
  FUNC_3(VAR_15, VAR_7, 0x63db25a0);
 else
  FUNC_3(VAR_15, VAR_7, 0x631b25a0);

 FUNC_5(VAR_15, VAR_11, VAR_10, 0x32d95);
 if (VAR_15->rf_paths == 2)
  FUNC_5(VAR_15, VAR_12, VAR_10, 0x32d95);

 FUNC_4(VAR_15, VAR_9, 0x00);
}
