
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_rx_status {size_t rate_idx; scalar_t__ bw; int enc_flags; } ;
struct ieee80211_hdr {int addr2; int frame_control; } ;
struct ath_softc {int hw; struct ath_hw* sc_ah; } ;
struct ath_rx_status {int rs_rate; } ;
struct ath_rx_rate_stats {TYPE_4__* ofdm_stats; TYPE_1__* cck_stats; TYPE_5__* ht_stats; } ;
struct ath_node {struct ath_rx_rate_stats rx_rate_stats; } ;
struct ath_hw {TYPE_3__* curchan; } ;
struct TYPE_10__ {int lgi_cnt; int sgi_cnt; int ht20_cnt; int ht40_cnt; } ;
struct TYPE_9__ {int ofdm_cnt; } ;
struct TYPE_8__ {TYPE_2__* chan; } ;
struct TYPE_7__ {scalar_t__ band; } ;
struct TYPE_6__ {int cck_lp_cnt; int cck_sp_cnt; } ;


 size_t FUNC_0 (TYPE_5__*) ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_sta* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(struct ath_softc *VAR_4,
     struct ath_rx_status *VAR_5,
     struct sk_buff *VAR_6)
{
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *) VAR_6->data;
 struct ath_hw *VAR_8 = VAR_4->sc_ah;
 struct ieee80211_rx_status *VAR_9;
 struct ath_rx_rate_stats *VAR_10;
 struct ieee80211_sta *VAR_11;
 struct ath_node *VAR_12;

 if (!FUNC_6(VAR_7->frame_control))
  return;

 FUNC_7();

 VAR_11 = FUNC_5(VAR_4->hw, VAR_7->addr2, ((void*)0));
 if (!VAR_11)
  goto exit;

 VAR_12 = (struct ath_node *) VAR_11->drv_priv;
 VAR_10 = &VAR_12->rx_rate_stats;
 VAR_9 = FUNC_1(VAR_6);

 if (FUNC_3(VAR_5->rs_rate)) {
  if (VAR_9->rate_idx >= FUNC_0(VAR_10->ht_stats))
   goto exit;

  if (VAR_9->bw == VAR_1)
   VAR_10->ht_stats[VAR_9->rate_idx].ht40_cnt++;
  else
   VAR_10->ht_stats[VAR_9->rate_idx].ht20_cnt++;

  if (VAR_9->enc_flags & VAR_3)
   VAR_10->ht_stats[VAR_9->rate_idx].sgi_cnt++;
  else
   VAR_10->ht_stats[VAR_9->rate_idx].lgi_cnt++;

  goto exit;
 }

 if (FUNC_2(VAR_5->rs_rate)) {
  if (VAR_9->enc_flags & VAR_2)
   VAR_10->cck_stats[VAR_9->rate_idx].cck_sp_cnt++;
  else
   VAR_10->cck_stats[VAR_9->rate_idx].cck_lp_cnt++;

  goto exit;
 }

 if (FUNC_4(VAR_5->rs_rate)) {
  if (VAR_8->curchan->chan->band == VAR_0)
   VAR_10->ofdm_stats[VAR_9->rate_idx - 4].ofdm_cnt++;
  else
   VAR_10->ofdm_stats[VAR_9->rate_idx].ofdm_cnt++;
 }
exit:
 FUNC_8();
}
