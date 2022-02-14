
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct rtl_priv *VAR_3, u16 VAR_4, u8 VAR_5)
{
 u8 VAR_6 = 0, VAR_7 = 0;
 u16 VAR_8 = 0, VAR_9 = VAR_4 % 4;


 VAR_8 = VAR_2 + VAR_9;
 FUNC_2(VAR_3, VAR_8, VAR_5);


 VAR_8 = (VAR_4 & 0xfffc) | (FUNC_0(0) << (VAR_9 + 12));
 FUNC_3(VAR_3, VAR_0, VAR_8);


 FUNC_2(VAR_3, VAR_1, 0x1);

 VAR_6 = FUNC_1(VAR_3, VAR_1);
 VAR_7 = 0;
 while (VAR_6 && VAR_7 < 20) {
  FUNC_4(10);
  VAR_6 = FUNC_1(VAR_3, VAR_1);
  VAR_7++;
 }
}
