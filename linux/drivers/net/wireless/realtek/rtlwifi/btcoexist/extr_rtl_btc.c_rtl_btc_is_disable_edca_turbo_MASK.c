
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct rtl_priv*) ;
 scalar_t__ FUNC_1 (struct rtl_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__,scalar_t__) ;

bool FUNC_3(struct rtl_priv *VAR_0)
{
 bool VAR_1 = 0;
 u32 VAR_2;
 u32 VAR_3 = 0x5ea42b, VAR_4 = 0x5ea42b;
 u32 VAR_5;
 u32 VAR_6 = 0x504;

 VAR_2 = FUNC_1(VAR_0, VAR_6);
 if (FUNC_0(VAR_0)) {
  if (VAR_2 != VAR_3) {
   VAR_5 = VAR_3;
   VAR_1 = 1;
  }
 } else {
  if (VAR_2 != VAR_4) {
   VAR_5 = VAR_4;
   VAR_1 = 1;
  }
 }

 if (VAR_1)
  FUNC_2(VAR_0, VAR_6, VAR_5);

 return 1;
}
