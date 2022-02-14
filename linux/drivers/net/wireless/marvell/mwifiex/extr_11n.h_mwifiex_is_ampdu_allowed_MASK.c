
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_ra_list_tbl {scalar_t__ tdls_link; int ra; } ;
struct mwifiex_private {TYPE_1__* aggr_prio_tbl; } ;
struct TYPE_2__ {scalar_t__ ampdu_ap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mwifiex_private*,struct mwifiex_ra_list_tbl*,int) ;

__attribute__((used)) static inline u8
FUNC_3(struct mwifiex_private *VAR_2,
    struct mwifiex_ra_list_tbl *VAR_3, int VAR_4)
{
 if (FUNC_1(VAR_3->ra))
  return 0;
 if (FUNC_0(VAR_2) == VAR_1) {
  return FUNC_2(VAR_2, VAR_3, VAR_4);
 } else {
  if (VAR_3->tdls_link)
   return FUNC_2(VAR_2, VAR_3, VAR_4);

  return (VAR_2->aggr_prio_tbl[VAR_4].ampdu_ap !=
   VAR_0) ? 1 : 0;
 }
}
