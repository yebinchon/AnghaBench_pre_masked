
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_ra_list_tbl {int dummy; } ;
struct mwifiex_private {int dummy; } ;


 int FUNC_0 (struct mwifiex_private*,int const*) ;
 struct mwifiex_ra_list_tbl* FUNC_1 (struct mwifiex_private*,int ,int const*) ;

struct mwifiex_ra_list_tbl *
FUNC_2(struct mwifiex_private *VAR_0, u8 VAR_1,
       const u8 *VAR_2)
{
 struct mwifiex_ra_list_tbl *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 FUNC_0(VAR_0, VAR_2);

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
