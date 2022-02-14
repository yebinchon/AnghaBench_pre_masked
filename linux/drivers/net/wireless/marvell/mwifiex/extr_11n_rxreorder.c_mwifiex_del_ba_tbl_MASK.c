
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mwifiex_tx_ba_stream_tbl {int dummy; } ;
struct mwifiex_rx_reorder_tbl {int dummy; } ;
struct mwifiex_ra_list_tbl {int amsdu_in_ampdu; int ba_status; } ;
struct mwifiex_private {int tx_ba_stream_tbl_lock; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mwifiex_private*,struct mwifiex_tx_ba_stream_tbl*) ;
 struct mwifiex_rx_reorder_tbl* FUNC_1 (struct mwifiex_private*,int,scalar_t__*) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (struct mwifiex_private*,struct mwifiex_rx_reorder_tbl*) ;
 struct mwifiex_tx_ba_stream_tbl* FUNC_4 (struct mwifiex_private*,int,scalar_t__*) ;
 int FUNC_5 (struct mwifiex_private*,int) ;
 struct mwifiex_ra_list_tbl* FUNC_6 (struct mwifiex_private*,int,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct mwifiex_private *VAR_3, int VAR_4, u8 *VAR_5,
     u8 VAR_6, int VAR_7)
{
 struct mwifiex_rx_reorder_tbl *VAR_8;
 struct mwifiex_tx_ba_stream_tbl *VAR_9;
 struct mwifiex_ra_list_tbl *VAR_10;
 u8 VAR_11;
 int VAR_12;

 if (VAR_6 == VAR_2)
  VAR_11 = (VAR_7) ? 1 : 0;
 else
  VAR_11 = (VAR_7) ? 0 : 1;

 FUNC_2(VAR_3->adapter, VAR_1, "event: DELBA: %pM tid=%d initiator=%d\n",
      VAR_5, VAR_4, VAR_7);

 if (VAR_11) {
  VAR_8 = FUNC_1(VAR_3, VAR_4,
         VAR_5);
  if (!VAR_8) {
   FUNC_2(VAR_3->adapter, VAR_1,
        "event: TID, TA not found in table\n");
   return;
  }
  FUNC_3(VAR_3, VAR_8);
 } else {
  VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5);
  if (!VAR_9) {
   FUNC_2(VAR_3->adapter, VAR_1,
        "event: TID, RA not found in table\n");
   return;
  }

  VAR_12 = FUNC_5(VAR_3, VAR_4);
  VAR_10 = FUNC_6(VAR_3, VAR_12, VAR_5);
  if (VAR_10) {
   VAR_10->amsdu_in_ampdu = 0;
   VAR_10->ba_status = VAR_0;
  }
  FUNC_7(&VAR_3->tx_ba_stream_tbl_lock);
  FUNC_0(VAR_3, VAR_9);
  FUNC_8(&VAR_3->tx_ba_stream_tbl_lock);
 }
}
