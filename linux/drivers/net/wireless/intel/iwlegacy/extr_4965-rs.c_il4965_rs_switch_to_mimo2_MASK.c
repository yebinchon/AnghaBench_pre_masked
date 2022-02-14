
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct il_scale_tbl_info {int is_ht40; int current_rate; int max_search; scalar_t__ action; int is_dup; int lq_type; } ;
struct TYPE_3__ {int tx_chains_num; } ;
struct il_priv {TYPE_1__ hw_params; } ;
struct il_lq_sta {int is_green; int active_mimo2_rate; int is_dup; } ;
struct TYPE_4__ {int ht_supported; } ;
struct ieee80211_sta {scalar_t__ smps_mode; TYPE_2__ ht_cap; } ;
struct ieee80211_conf {int dummy; } ;
typedef int s8 ;
typedef int s32 ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ieee80211_conf*) ;
 int FUNC_2 (struct il_priv*,struct il_scale_tbl_info*,int,int) ;
 int FUNC_3 (struct il_priv*,struct il_lq_sta*,struct il_scale_tbl_info*,int,int) ;
 int FUNC_4 (struct il_lq_sta*,struct il_scale_tbl_info*) ;
 scalar_t__ FUNC_5 (struct il_priv*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_4, struct il_lq_sta *VAR_5,
     struct ieee80211_conf *VAR_6,
     struct ieee80211_sta *VAR_7,
     struct il_scale_tbl_info *VAR_8, int VAR_9)
{
 u16 VAR_10;
 s32 VAR_11;
 s8 VAR_12 = VAR_5->is_green;

 if (!FUNC_1(VAR_6) || !VAR_7->ht_cap.ht_supported)
  return -1;

 if (VAR_7->smps_mode == VAR_0)
  return -1;


 if (VAR_4->hw_params.tx_chains_num < 2)
  return -1;

 FUNC_0("LQ: try to switch to MIMO2\n");

 VAR_8->lq_type = VAR_2;
 VAR_8->is_dup = VAR_5->is_dup;
 VAR_8->action = 0;
 VAR_8->max_search = VAR_1;
 VAR_10 = VAR_5->active_mimo2_rate;

 if (FUNC_5(VAR_4, &VAR_7->ht_cap))
  VAR_8->is_ht40 = 1;
 else
  VAR_8->is_ht40 = 0;

 FUNC_4(VAR_5, VAR_8);

 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_8, VAR_10, VAR_9);

 FUNC_0("LQ: MIMO2 best rate %d mask %X\n", VAR_11, VAR_10);
 if (VAR_11 == VAR_3 || !((1 << VAR_11) & VAR_10)) {
  FUNC_0("Can't switch with idx %d rate mask %x\n", VAR_11,
         VAR_10);
  return -1;
 }
 VAR_8->current_rate =
     FUNC_2(VAR_4, VAR_8, VAR_11, VAR_12);

 FUNC_0("LQ: Switch to new mcs %X idx is green %X\n", VAR_8->current_rate,
        VAR_12);
 return 0;
}
