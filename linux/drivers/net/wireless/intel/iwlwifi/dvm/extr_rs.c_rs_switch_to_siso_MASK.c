
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_station_priv {struct iwl_rxon_context* ctx; } ;
struct iwl_scale_tbl_info {int is_ht40; int current_rate; scalar_t__ is_SGI; int max_search; scalar_t__ action; int lq_type; int is_dup; } ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {int dummy; } ;
struct iwl_lq_sta {int is_green; int active_siso_rate; int is_dup; } ;
struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_conf {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211_conf*) ;
 scalar_t__ FUNC_2 (struct iwl_priv*,struct iwl_rxon_context*,struct ieee80211_sta*) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_lq_sta*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_5 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_3,
        struct iwl_lq_sta *VAR_4,
        struct ieee80211_conf *VAR_5,
        struct ieee80211_sta *VAR_6,
        struct iwl_scale_tbl_info *VAR_7, int VAR_8)
{
 u16 VAR_9;
 u8 VAR_10 = VAR_4->is_green;
 s32 VAR_11;
 struct iwl_station_priv *VAR_12 = (void *)VAR_6->drv_priv;
 struct iwl_rxon_context *VAR_13 = VAR_12->ctx;

 if (!FUNC_1(VAR_5) || !VAR_6->ht_cap.ht_supported)
  return -1;

 FUNC_0(VAR_3, "LQ: try to switch to SISO\n");

 VAR_7->is_dup = VAR_4->is_dup;
 VAR_7->lq_type = VAR_2;
 VAR_7->action = 0;
 VAR_7->max_search = VAR_0;
 VAR_9 = VAR_4->active_siso_rate;

 if (FUNC_2(VAR_3, VAR_13, VAR_6))
  VAR_7->is_ht40 = 1;
 else
  VAR_7->is_ht40 = 0;

 if (VAR_10)
  VAR_7->is_SGI = 0;

 FUNC_5(VAR_4, VAR_7);
 VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_7, VAR_9, VAR_8);

 FUNC_0(VAR_3, "LQ: get best rate %d mask %X\n", VAR_11, VAR_9);
 if ((VAR_11 == VAR_1) || !((1 << VAR_11) & VAR_9)) {
  FUNC_0(VAR_3, "can not switch with index %d rate mask %x\n",
        VAR_11, VAR_9);
  return -1;
 }
 VAR_7->current_rate = FUNC_3(VAR_3, VAR_7, VAR_11, VAR_10);
 FUNC_0(VAR_3, "LQ: Switch to new mcs %X index is green %X\n",
       VAR_7->current_rate, VAR_10);
 return 0;
}
