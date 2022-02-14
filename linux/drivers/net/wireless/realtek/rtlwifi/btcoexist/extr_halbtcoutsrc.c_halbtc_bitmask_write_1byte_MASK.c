
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl_priv*,int) ;
 int FUNC_1 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u32 VAR_2,
           u32 VAR_3, u8 VAR_4)
{
 struct btc_coexist *VAR_5 = (struct btc_coexist *)VAR_1;
 struct rtl_priv *VAR_6 = VAR_5->adapter;
 u8 VAR_7, VAR_8 = 0;
 u8 VAR_9;

 if (VAR_3 != VAR_0) {
  VAR_7 = FUNC_0(VAR_6, VAR_2);
  for (VAR_9 = 0; VAR_9 <= 7; VAR_9++) {
   if ((VAR_3>>VAR_9) & 0x1)
    break;
  }
  VAR_8 = VAR_9;
  VAR_4 = (VAR_7 & (~VAR_3)) |
   ((VAR_4 << VAR_8) & VAR_3);
 }
 FUNC_1(VAR_6, VAR_2, VAR_4);
}
