
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tx_status_event {int status; int tx_token_id; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct mwifiex_txinfo {int flags; int cookie; } ;
struct mwifiex_private {int wdev; int ack_status_lock; int ack_status_frames; TYPE_1__* adapter; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct TYPE_2__ {scalar_t__ event_body; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mwifiex_txinfo* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct mwifiex_private *VAR_4,
       void *VAR_5)
{
 struct tx_status_event *VAR_6 = (void *)VAR_4->adapter->event_body;
 struct sk_buff *VAR_7;
 struct mwifiex_txinfo *VAR_8;

 if (!VAR_6->tx_token_id)
  return;

 FUNC_6(&VAR_4->ack_status_lock);
 VAR_7 = FUNC_3(&VAR_4->ack_status_frames, VAR_6->tx_token_id);
 FUNC_7(&VAR_4->ack_status_lock);

 if (VAR_7) {
  VAR_8 = FUNC_0(VAR_7);

  if (VAR_8->flags & VAR_2) {

   FUNC_5(VAR_7, !VAR_6->status);
  } else {

   FUNC_4(VAR_7->data +
    sizeof(struct ieee80211_hdr_3addr) +
    VAR_3 + sizeof(u16),
    VAR_7->data +
    sizeof(struct ieee80211_hdr_3addr) +
    VAR_3 + sizeof(u16) +
    VAR_0, VAR_7->len -
    (sizeof(struct ieee80211_hdr_3addr) +
    VAR_3 + sizeof(u16) +
    VAR_0));
   VAR_7->len = VAR_7->len - VAR_0;




   FUNC_1(&VAR_4->wdev, VAR_8->cookie,
      VAR_7->data +
      VAR_3 +
      sizeof(u16), VAR_7->len -
      (VAR_3
       + sizeof(u16)),
      !VAR_6->status, VAR_1);
   FUNC_2(VAR_7);
  }
 }
}
