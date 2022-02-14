
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_tx_ba_stream_tbl {int tid; int ba_status; int list; int ra; } ;
struct mwifiex_ra_list_tbl {int ba_status; int amsdu_in_ampdu; } ;
struct mwifiex_private {int tx_ba_stream_tbl_lock; int tx_ba_stream_tbl_ptr; } ;
typedef enum mwifiex_ba_status { ____Placeholder_mwifiex_ba_status } mwifiex_ba_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct mwifiex_tx_ba_stream_tbl* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct mwifiex_private*,int,int *) ;
 int FUNC_5 (struct mwifiex_private*,int) ;
 struct mwifiex_ra_list_tbl* FUNC_6 (struct mwifiex_private*,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct mwifiex_private *VAR_2, u8 *VAR_3, int VAR_4,
      enum mwifiex_ba_status VAR_5)
{
 struct mwifiex_tx_ba_stream_tbl *VAR_6;
 struct mwifiex_ra_list_tbl *VAR_7;
 int VAR_8;

 if (!FUNC_4(VAR_2, VAR_4, VAR_3)) {
  VAR_6 = FUNC_1(sizeof(struct mwifiex_tx_ba_stream_tbl),
       VAR_1);
  if (!VAR_6)
   return;

  VAR_8 = FUNC_5(VAR_2, VAR_4);
  VAR_7 = FUNC_6(VAR_2, VAR_8, VAR_3);
  if (VAR_7) {
   VAR_7->ba_status = VAR_5;
   VAR_7->amsdu_in_ampdu = 0;
  }
  FUNC_0(&VAR_6->list);

  VAR_6->tid = VAR_4;
  VAR_6->ba_status = VAR_5;
  FUNC_3(VAR_6->ra, VAR_3, VAR_0);

  FUNC_7(&VAR_2->tx_ba_stream_tbl_lock);
  FUNC_2(&VAR_6->list, &VAR_2->tx_ba_stream_tbl_ptr);
  FUNC_8(&VAR_2->tx_ba_stream_tbl_lock);
 }
}
