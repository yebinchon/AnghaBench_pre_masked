
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static bool FUNC_5(struct rtl_priv *VAR_3)
{
 u8 VAR_4;


 VAR_4 = FUNC_3(VAR_3, VAR_2 + 3);
 if (!(VAR_4 & FUNC_0(2))) {
  FUNC_4(VAR_3, VAR_2 + 3, (VAR_4 | FUNC_0(2)));
  FUNC_2(100);
 }




 VAR_4 = FUNC_3(VAR_3, VAR_2 + 3);
 if ((VAR_4 & FUNC_0(0)) || (VAR_4 & FUNC_0(1))) {
  FUNC_1(VAR_3, VAR_0, VAR_1,
    "CheckPcieDMAHang8723BE(): true!!\n");
  return 1;
 }
 return 0;
}
