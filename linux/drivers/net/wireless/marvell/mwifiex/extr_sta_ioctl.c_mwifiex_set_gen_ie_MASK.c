
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_misc_gen_ie {int len; int ie_data; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const*,int) ;
 scalar_t__ FUNC_1 (struct mwifiex_private*,struct mwifiex_ds_misc_gen_ie*,int ) ;

int
FUNC_2(struct mwifiex_private *VAR_4, const u8 *VAR_5, int VAR_6)
{
 struct mwifiex_ds_misc_gen_ie VAR_7;

 if (VAR_6 > VAR_2)
  return -VAR_0;

 VAR_7.type = VAR_3;
 VAR_7.len = VAR_6;
 FUNC_0(VAR_7.ie_data, VAR_5, VAR_6);
 if (FUNC_1(VAR_4, &VAR_7, VAR_1))
  return -VAR_0;

 return 0;
}
