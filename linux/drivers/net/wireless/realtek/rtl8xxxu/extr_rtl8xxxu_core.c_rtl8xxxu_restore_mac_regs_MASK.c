
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8xxxu_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int const,int ) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int const,int ) ;

void FUNC_2(struct rtl8xxxu_priv *VAR_1,
          const u32 *VAR_2, u32 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < (VAR_0 - 1); VAR_4++)
  FUNC_1(VAR_1, VAR_2[VAR_4], VAR_3[VAR_4]);

 FUNC_0(VAR_1, VAR_2[VAR_4], VAR_3[VAR_4]);
}
