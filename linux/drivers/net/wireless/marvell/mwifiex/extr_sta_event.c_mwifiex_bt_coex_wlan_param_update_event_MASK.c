
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; int * data; } ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_ie_types_header {int type; int len; } ;
struct mwifiex_ie_types_btcoex_scan_time {int max_scan_time; int min_scan_time; int coex_scan; } ;
struct mwifiex_ie_types_btcoex_aggr_win_size {int rx_win_size; int tx_win_size; int coex_win_size; } ;
struct mwifiex_adapter {int coex_rx_win_size; int coex_tx_win_size; int coex_win_size; void* coex_min_scan_time; int coex_scan; int dev; void* coex_max_scan_time; } ;
typedef int s32 ;




 int FUNC_0 (int ,char*,int ,void*,int ,int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;

void FUNC_4(struct mwifiex_private *VAR_0,
          struct sk_buff *VAR_1)
{
 struct mwifiex_adapter *VAR_2 = VAR_0->adapter;
 struct mwifiex_ie_types_header *VAR_3;
 struct mwifiex_ie_types_btcoex_aggr_win_size *VAR_4;
 struct mwifiex_ie_types_btcoex_scan_time *VAR_5;
 s32 VAR_6 = VAR_1->len - sizeof(u32);
 u8 *VAR_7 = VAR_1->data + sizeof(u32);
 u16 VAR_8, VAR_9;

 while (VAR_6 >= sizeof(struct mwifiex_ie_types_header)) {
  VAR_3 = (struct mwifiex_ie_types_header *)VAR_7;
  VAR_9 = FUNC_1(VAR_3->len);
  VAR_8 = FUNC_1(VAR_3->type);

  if ((VAR_9 + sizeof(struct mwifiex_ie_types_header)) > VAR_6)
   break;
  switch (VAR_8) {
  case 129:
   VAR_4 =
       (struct mwifiex_ie_types_btcoex_aggr_win_size *)VAR_3;
   VAR_2->coex_win_size = VAR_4->coex_win_size;
   VAR_2->coex_tx_win_size =
    VAR_4->tx_win_size;
   VAR_2->coex_rx_win_size =
    VAR_4->rx_win_size;
   FUNC_2(VAR_2);
   FUNC_3(VAR_2);
   break;

  case 128:
   VAR_5 =
       (struct mwifiex_ie_types_btcoex_scan_time *)VAR_3;
   VAR_2->coex_scan = VAR_5->coex_scan;
   VAR_2->coex_min_scan_time = FUNC_1(VAR_5->min_scan_time);
   VAR_2->coex_max_scan_time = FUNC_1(VAR_5->max_scan_time);
   break;

  default:
   break;
  }

  VAR_6 -= VAR_9 + sizeof(struct mwifiex_ie_types_header);
  VAR_7 += VAR_9 +
   sizeof(struct mwifiex_ie_types_header);
 }

 FUNC_0(VAR_2->dev, "coex_scan=%d min_scan=%d coex_win=%d, tx_win=%d rx_win=%d\n",
  VAR_2->coex_scan, VAR_2->coex_min_scan_time,
  VAR_2->coex_win_size, VAR_2->coex_tx_win_size,
  VAR_2->coex_rx_win_size);
}
