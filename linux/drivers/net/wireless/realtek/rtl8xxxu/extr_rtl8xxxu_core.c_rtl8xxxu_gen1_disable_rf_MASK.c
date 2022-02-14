
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl8xxxu_priv {int rf_paths; } ;


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
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int ,int ) ;

void FUNC_6(struct rtl8xxxu_priv *VAR_10)
{
 u8 VAR_11;
 u32 VAR_12;

 VAR_11 = FUNC_2(VAR_10, VAR_6);


 VAR_12 = FUNC_1(VAR_10, VAR_3);
 VAR_12 &= ~(FUNC_0(3) | FUNC_0(4) | FUNC_0(5));
 if (VAR_10->rf_paths == 2)
  VAR_12 &= ~(FUNC_0(19) | FUNC_0(20) | FUNC_0(21));
 FUNC_3(VAR_10, VAR_3, VAR_12);


 VAR_12 = FUNC_1(VAR_10, VAR_4);
 VAR_12 &= ~VAR_1;
 FUNC_3(VAR_10, VAR_4, VAR_12);


 VAR_12 = FUNC_1(VAR_10, VAR_2);
 VAR_12 |= VAR_0;
 FUNC_3(VAR_10, VAR_2, VAR_12);


 if (VAR_10->rf_paths == 2)
  FUNC_3(VAR_10, VAR_5, 0x00db25a0);
 else
  FUNC_3(VAR_10, VAR_5, 0x001b25a0);


 FUNC_5(VAR_10, VAR_8, VAR_7, 0);
 if (VAR_10->rf_paths == 2)
  FUNC_5(VAR_10, VAR_9, VAR_7, 0);

 VAR_11 &= ~(FUNC_0(0) | FUNC_0(3));
 FUNC_4(VAR_10, VAR_6, VAR_11);
}
