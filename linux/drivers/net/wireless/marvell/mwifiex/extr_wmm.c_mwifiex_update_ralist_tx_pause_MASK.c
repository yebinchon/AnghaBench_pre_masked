
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct mwifiex_ra_list_tbl {scalar_t__ tx_paused; scalar_t__ total_pkt_count; } ;
struct TYPE_2__ {int ra_list_spinlock; int highest_queued_prio; int tx_pkts_queued; int * pkts_paused; } ;
struct mwifiex_private {TYPE_1__ wmm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 struct mwifiex_ra_list_tbl* FUNC_2 (struct mwifiex_private*,int,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mwifiex_private *VAR_2, u8 *VAR_3,
        u8 VAR_4)
{
 struct mwifiex_ra_list_tbl *VAR_5;
 u32 VAR_6 = 0, VAR_7;
 int VAR_8;

 FUNC_3(&VAR_2->wmm.ra_list_spinlock);

 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
  VAR_5 = FUNC_2(VAR_2, VAR_8, VAR_3);
  if (VAR_5 && VAR_5->tx_paused != VAR_4) {
   VAR_6 += VAR_5->total_pkt_count;
   VAR_5->tx_paused = VAR_4;
   if (VAR_4)
    VAR_2->wmm.pkts_paused[VAR_8] +=
     VAR_5->total_pkt_count;
   else
    VAR_2->wmm.pkts_paused[VAR_8] -=
     VAR_5->total_pkt_count;
  }
 }

 if (VAR_6) {
  VAR_7 = FUNC_0(&VAR_2->wmm.tx_pkts_queued);
  if (VAR_4)
   VAR_7 -= VAR_6;
  else
   VAR_7 += VAR_6;

  FUNC_1(&VAR_2->wmm.tx_pkts_queued, VAR_7);
  FUNC_1(&VAR_2->wmm.highest_queued_prio, VAR_0);
 }
 FUNC_4(&VAR_2->wmm.ra_list_spinlock);
}
