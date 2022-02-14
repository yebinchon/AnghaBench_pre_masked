
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {int dummy; } ;






 int FUNC_0 (struct mwifiex_private*,int const*) ;
 int FUNC_1 (struct mwifiex_private*,int const*) ;
 int FUNC_2 (struct mwifiex_private*,int const*) ;
 int FUNC_3 (struct mwifiex_private*,int const*) ;

int FUNC_4(struct mwifiex_private *VAR_0, const u8 *VAR_1, u8 VAR_2)
{
 switch (VAR_2) {
 case 128:
  return FUNC_3(VAR_0, VAR_1);
 case 129:
  return FUNC_2(VAR_0, VAR_1);
 case 130:
  return FUNC_1(VAR_0, VAR_1);
 case 131:
  return FUNC_0(VAR_0, VAR_1);
 }
 return 0;
}
