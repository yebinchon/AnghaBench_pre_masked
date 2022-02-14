
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_sta_node {int max_amsdu; int tx_pause; } ;
struct mwifiex_ra_list_tbl {int tdls_link; int amsdu_in_ampdu; int list; int ba_packet_thr; scalar_t__ ba_pkt_count; scalar_t__ is_11n_enabled; int max_amsdu; int tx_paused; int ba_status; } ;
struct TYPE_4__ {TYPE_1__* tid_tbl_ptr; } ;
struct mwifiex_private {TYPE_2__ wmm; int sta_list_spinlock; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int dummy; } ;
struct TYPE_3__ {int ra_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,struct mwifiex_ra_list_tbl*,...) ;
 int FUNC_3 () ;
 struct mwifiex_sta_node* FUNC_4 (struct mwifiex_private*,int const*) ;
 int FUNC_5 (struct mwifiex_private*,int const*) ;
 scalar_t__ FUNC_6 (struct mwifiex_private*,struct mwifiex_sta_node*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct mwifiex_private*) ;
 scalar_t__ FUNC_9 (struct mwifiex_private*,int const*) ;
 struct mwifiex_ra_list_tbl* FUNC_10 (struct mwifiex_adapter*,int const*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct mwifiex_private *VAR_4, const u8 *VAR_5)
{
 int VAR_6;
 struct mwifiex_ra_list_tbl *VAR_7;
 struct mwifiex_adapter *VAR_8 = VAR_4->adapter;
 struct mwifiex_sta_node *VAR_9;


 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  VAR_7 = FUNC_10(VAR_8, VAR_5);
  FUNC_2(VAR_8, VAR_2,
       "info: created ra_list %p\n", VAR_7);

  if (!VAR_7)
   break;

  VAR_7->is_11n_enabled = 0;
  VAR_7->tdls_link = 0;
  VAR_7->ba_status = VAR_0;
  VAR_7->amsdu_in_ampdu = 0;
  if (!FUNC_8(VAR_4)) {
   if (FUNC_7
    (FUNC_5(VAR_4, VAR_5))) {
    VAR_7->tdls_link = 1;
    VAR_7->is_11n_enabled =
     FUNC_9(VAR_4, VAR_5);
   } else {
    VAR_7->is_11n_enabled = FUNC_0(VAR_4);
   }
  } else {
   FUNC_11(&VAR_4->sta_list_spinlock);
   VAR_9 = FUNC_4(VAR_4, VAR_5);
   if (VAR_9)
    VAR_7->tx_paused = VAR_9->tx_pause;
   VAR_7->is_11n_enabled =
          FUNC_6(VAR_4, VAR_9);
   if (VAR_7->is_11n_enabled)
    VAR_7->max_amsdu = VAR_9->max_amsdu;
   FUNC_12(&VAR_4->sta_list_spinlock);
  }

  FUNC_2(VAR_8, VAR_1, "data: ralist %p: is_11n_enabled=%d\n",
       VAR_7, VAR_7->is_11n_enabled);

  if (VAR_7->is_11n_enabled) {
   VAR_7->ba_pkt_count = 0;
   VAR_7->ba_packet_thr =
           FUNC_3();
  }
  FUNC_1(&VAR_7->list,
         &VAR_4->wmm.tid_tbl_ptr[VAR_6].ra_list);
 }
}
