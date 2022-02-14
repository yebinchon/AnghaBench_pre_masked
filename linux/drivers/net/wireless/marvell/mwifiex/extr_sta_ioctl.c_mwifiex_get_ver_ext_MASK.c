
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver_ext ;
typedef int u32 ;
struct mwifiex_ver_ext {int version_str_sel; } ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwifiex_ver_ext*,int ,int) ;
 scalar_t__ FUNC_1 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ver_ext*,int) ;

int
FUNC_2(struct mwifiex_private *VAR_2, u32 VAR_3)
{
 struct mwifiex_ver_ext VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.version_str_sel = VAR_3;
 if (FUNC_1(VAR_2, VAR_1,
        VAR_0, 0, &VAR_4, 1))
  return -1;

 return 0;
}
