
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8xxxu_priv {int dummy; } ;


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
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct rtl8xxxu_priv *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;
 int VAR_18 = 0;





 FUNC_3(VAR_14, VAR_0, 0x00000000);
 FUNC_4(VAR_14, VAR_13, VAR_12, 0x00180);
 FUNC_3(VAR_14, VAR_0, 0x80800000);


 FUNC_3(VAR_14, VAR_8, 0x18008c1c);
 FUNC_3(VAR_14, VAR_4, 0x38008c1c);
 FUNC_3(VAR_14, VAR_9, 0x38008c1c);
 FUNC_3(VAR_14, VAR_5, 0x38008c1c);

 FUNC_3(VAR_14, VAR_7, 0x82140303);
 FUNC_3(VAR_14, VAR_3, 0x68160000);


 FUNC_3(VAR_14, VAR_2, 0x00462911);


 FUNC_3(VAR_14, VAR_1, 0xf9000000);
 FUNC_3(VAR_14, VAR_1, 0xf8000000);

 FUNC_1(10);


 VAR_15 = FUNC_2(VAR_14, VAR_6);
 VAR_16 = FUNC_2(VAR_14, VAR_11);
 VAR_17 = FUNC_2(VAR_14, VAR_10);

 if (!(VAR_15 & FUNC_0(28)) &&
     ((VAR_16 & 0x03ff0000) != 0x01420000) &&
     ((VAR_17 & 0x03ff0000) != 0x00420000))
  VAR_18 |= 0x01;

 return VAR_18;
}
