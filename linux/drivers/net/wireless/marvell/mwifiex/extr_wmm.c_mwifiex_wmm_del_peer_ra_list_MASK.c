
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_ra_list_tbl {int list; scalar_t__ total_pkt_count; scalar_t__ tx_paused; } ;
struct TYPE_2__ {int ra_list_spinlock; int tx_pkts_queued; int * pkts_paused; } ;
struct mwifiex_private {TYPE_1__ wmm; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (struct mwifiex_ra_list_tbl*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mwifiex_private*,struct mwifiex_ra_list_tbl*) ;
 struct mwifiex_ra_list_tbl* FUNC_4 (struct mwifiex_private*,int,int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct mwifiex_private *VAR_1, const u8 *VAR_2)
{
 struct mwifiex_ra_list_tbl *VAR_3;
 int VAR_4;

 FUNC_5(&VAR_1->wmm.ra_list_spinlock);

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_3 = FUNC_4(VAR_1, VAR_4, VAR_2);

  if (!VAR_3)
   continue;
  FUNC_3(VAR_1, VAR_3);
  if (VAR_3->tx_paused)
   VAR_1->wmm.pkts_paused[VAR_4] -= VAR_3->total_pkt_count;
  else
   FUNC_0(VAR_3->total_pkt_count,
       &VAR_1->wmm.tx_pkts_queued);
  FUNC_2(&VAR_3->list);
  FUNC_1(VAR_3);
 }
 FUNC_6(&VAR_1->wmm.ra_list_spinlock);
}
