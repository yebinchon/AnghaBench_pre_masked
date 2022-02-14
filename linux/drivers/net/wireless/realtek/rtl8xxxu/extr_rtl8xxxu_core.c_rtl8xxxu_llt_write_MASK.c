
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl8xxxu_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct rtl8xxxu_priv *VAR_5, u8 VAR_6, u8 VAR_7)
{
 int VAR_8 = -VAR_0;
 int VAR_9 = 0;
 u32 VAR_10;

 VAR_10 = VAR_3 | VAR_6 << 8 | VAR_7;

 FUNC_1(VAR_5, VAR_4, VAR_10);

 do {
  VAR_10 = FUNC_0(VAR_5, VAR_4);
  if ((VAR_10 & VAR_2) == VAR_1) {
   VAR_8 = 0;
   break;
  }
 } while (VAR_9++ < 20);

 return VAR_8;
}
