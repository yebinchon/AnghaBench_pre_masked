
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_sta_node {scalar_t__* ampdu_sta; } ;
struct mwifiex_ra_list_tbl {int ra; } ;
struct mwifiex_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mwifiex_sta_node* FUNC_0 (struct mwifiex_private*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline u8
FUNC_2(struct mwifiex_private *VAR_1,
     struct mwifiex_ra_list_tbl *VAR_2, int VAR_3)
{
 struct mwifiex_sta_node *VAR_4 = FUNC_0(VAR_1, VAR_2->ra);

 if (FUNC_1(!VAR_4))
  return 0;

 return (VAR_4->ampdu_sta[VAR_3] != VAR_0) ? 1 : 0;
}
