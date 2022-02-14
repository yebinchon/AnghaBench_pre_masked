
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int) ;
 int FUNC_1 (struct rtl_priv*,int,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u8 FUNC_4(struct rtl_priv *VAR_3, u16 VAR_4)
{
 u16 VAR_5 = VAR_4 & 0xfffc;
 u8 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

 FUNC_2(VAR_3, VAR_0, VAR_5);
 FUNC_1(VAR_3, VAR_1, 0x2);
 VAR_6 = FUNC_0(VAR_3, VAR_1);
 VAR_7 = 0;
 while (VAR_6 && VAR_7 < 20) {
  FUNC_3(10);
  VAR_6 = FUNC_0(VAR_3, VAR_1);
  VAR_7++;
 }
 if (0 == VAR_6) {
  VAR_5 = VAR_2 + VAR_4 % 4;
  VAR_8 = FUNC_0(VAR_3, VAR_5);
 }
 return VAR_8;
}
