
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct il_priv {TYPE_4__* txq; } ;
struct il_ht_agg {int wait_for_ba; int frame_count; int start_idx; int bitmap; int rate_n_flags; } ;
struct TYPE_5__ {struct agg_tx_status* agg_status; } ;
struct il4965_tx_resp {int frame_count; int failure_frame; int rate_n_flags; TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ status; } ;
struct ieee80211_hdr {int seq_ctrl; } ;
struct agg_tx_status {int sequence; int status; } ;
struct TYPE_8__ {struct sk_buff** skbs; } ;
struct TYPE_6__ {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 unsigned long long FUNC_1 (int) ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,unsigned long long,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct il_priv*,int ,struct ieee80211_tx_info*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct il_priv *VAR_3, struct il_ht_agg *VAR_4,
     struct il4965_tx_resp *VAR_5, int VAR_6,
     u16 VAR_7)
{
 u16 VAR_8;
 struct agg_tx_status *VAR_9 = VAR_5->u.agg_status;
 struct ieee80211_tx_info *VAR_10 = ((void*)0);
 struct ieee80211_hdr *VAR_11 = ((void*)0);
 u32 VAR_12 = FUNC_10(VAR_5->rate_n_flags);
 int VAR_13, VAR_14, VAR_15;
 u16 VAR_16;
 if (VAR_4->wait_for_ba)
  FUNC_0("got tx response w/o block-ack\n");

 VAR_4->frame_count = VAR_5->frame_count;
 VAR_4->start_idx = VAR_7;
 VAR_4->rate_n_flags = VAR_12;
 VAR_4->bitmap = 0;


 if (VAR_4->frame_count == 1) {

  VAR_8 = FUNC_9(VAR_9[0].status);
  VAR_15 = VAR_7;

  FUNC_0("FrameCnt = %d, StartIdx=%d idx=%d\n",
      VAR_4->frame_count, VAR_4->start_idx, VAR_15);

  VAR_10 = FUNC_2(VAR_3->txq[VAR_6].skbs[VAR_15]);
  VAR_10->status.rates[0].count = VAR_5->failure_frame + 1;
  VAR_10->flags &= ~VAR_2;
  VAR_10->flags |= FUNC_8(VAR_8);
  FUNC_7(VAR_3, VAR_12, VAR_10);

  FUNC_0("1 Frame 0x%x failure :%d\n", VAR_8 & 0xff,
      VAR_5->failure_frame);
  FUNC_0("Rate Info rate_n_flags=%x\n", VAR_12);

  VAR_4->wait_for_ba = 0;
 } else {

  u64 VAR_17 = 0;
  int VAR_18 = VAR_4->start_idx;
  struct sk_buff *VAR_19;


  for (VAR_13 = 0; VAR_13 < VAR_4->frame_count; VAR_13++) {
   u16 VAR_20;
   VAR_8 = FUNC_9(VAR_9[VAR_13].status);
   VAR_16 = FUNC_9(VAR_9[VAR_13].sequence);
   VAR_15 = FUNC_4(VAR_16);
   VAR_6 = FUNC_5(VAR_16);

   if (VAR_8 &
       (VAR_1 |
        VAR_0))
    continue;

   FUNC_0("FrameCnt = %d, txq_id=%d idx=%d\n",
       VAR_4->frame_count, VAR_6, VAR_15);

   VAR_19 = VAR_3->txq[VAR_6].skbs[VAR_15];
   if (FUNC_6(VAR_19 == ((void*)0)))
    return -1;
   VAR_11 = (struct ieee80211_hdr *) VAR_19->data;

   VAR_20 = FUNC_9(VAR_11->seq_ctrl);
   if (VAR_15 != (FUNC_1(VAR_20) & 0xff)) {
    FUNC_3("BUG_ON idx doesn't match seq control"
           " idx=%d, seq_idx=%d, seq=%d\n", VAR_15,
           FUNC_1(VAR_20), VAR_11->seq_ctrl);
    return -1;
   }

   FUNC_0("AGG Frame i=%d idx %d seq=%d\n", VAR_13, VAR_15,
       FUNC_1(VAR_20));

   VAR_14 = VAR_15 - VAR_18;
   if (VAR_14 > 64) {
    VAR_14 = (VAR_18 - VAR_15) + 0xff;
    VAR_17 = VAR_17 << VAR_14;
    VAR_14 = 0;
    VAR_18 = VAR_15;
   } else if (VAR_14 < -64)
    VAR_14 = 0xff - (VAR_18 - VAR_15);
   else if (VAR_14 < 0) {
    VAR_14 = VAR_18 - VAR_15;
    VAR_18 = VAR_15;
    VAR_17 = VAR_17 << VAR_14;
    VAR_14 = 0;
   }
   VAR_17 |= 1ULL << VAR_14;
   FUNC_0("start=%d bitmap=0x%llx\n", VAR_18,
       (unsigned long long)VAR_17);
  }

  VAR_4->bitmap = VAR_17;
  VAR_4->start_idx = VAR_18;
  FUNC_0("Frames %d start_idx=%d bitmap=0x%llx\n",
      VAR_4->frame_count, VAR_4->start_idx,
      (unsigned long long)VAR_4->bitmap);

  if (VAR_17)
   VAR_4->wait_for_ba = 1;
 }
 return 0;
}
