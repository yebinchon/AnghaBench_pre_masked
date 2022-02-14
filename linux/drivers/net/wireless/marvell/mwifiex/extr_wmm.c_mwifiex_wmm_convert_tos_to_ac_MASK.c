
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mwifiex_adapter {int dummy; } ;
typedef enum mwifiex_wmm_ac_e { ____Placeholder_mwifiex_wmm_ac_e } mwifiex_wmm_ac_e ;


 size_t FUNC_0 (int const*) ;





__attribute__((used)) static enum mwifiex_wmm_ac_e
FUNC_1(struct mwifiex_adapter *VAR_0, u32 VAR_1)
{

 static const enum mwifiex_wmm_ac_e VAR_2[] = {
  131,
  130,
  130,
  131,
  129,
  129,
  128,
  128
 };

 if (VAR_1 >= FUNC_0(VAR_2))
  return 131;

 return VAR_2[VAR_1];
}
