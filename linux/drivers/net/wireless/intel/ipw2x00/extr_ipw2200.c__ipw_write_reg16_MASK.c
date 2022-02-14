
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ipw_priv {int dummy; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_priv*,int,int ) ;
 int FUNC_2 (struct ipw_priv*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ipw_priv *VAR_3, u32 VAR_4, u16 VAR_5)
{
 u32 VAR_6 = VAR_4 & VAR_1;
 u32 VAR_7 = (VAR_4 - VAR_6) & (~0x1ul);

 FUNC_0(" reg = 0x%8X : value = 0x%8X\n", VAR_4, VAR_5);
 FUNC_2(VAR_3, VAR_0, VAR_6);
 FUNC_1(VAR_3, VAR_2 + VAR_7, VAR_5);
}
