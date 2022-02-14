
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl_priv*,int ) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;
 int FUNC_3 (struct rtl_priv*,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct rtl_priv *VAR_2, u8 VAR_3, u16 VAR_4)
{
 u8 VAR_5 = 0, VAR_6 = 0;

 FUNC_3(VAR_2, VAR_1, VAR_4);
 FUNC_2(VAR_2, VAR_0, VAR_3 | FUNC_0(5));
 VAR_5 = FUNC_1(VAR_2, VAR_0) & FUNC_0(5);
 VAR_6 = 0;
 while (VAR_5 && VAR_6 < 20) {
  FUNC_4(10);
  VAR_5 = FUNC_1(VAR_2, VAR_0) & FUNC_0(5);
  VAR_6++;
 }
}
