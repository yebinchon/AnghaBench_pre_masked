
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btc_coexist*,int) ;
 struct btc_coexist* FUNC_1 (struct rtl_priv*) ;

void FUNC_2(struct rtl_priv *VAR_4, u8 VAR_5,
    bool VAR_6)
{
 struct btc_coexist *VAR_7 = FUNC_1(VAR_4);
 u8 VAR_8 = VAR_0;

 if (!VAR_7)
  return;

 switch (VAR_5) {
 case 129:
  if (VAR_6)
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_2;
  break;

 case 128:
  VAR_8 = VAR_3;
  break;
 }

 if (VAR_8 != VAR_0)
  FUNC_0(VAR_7, VAR_8);
}
