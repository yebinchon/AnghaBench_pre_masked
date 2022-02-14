
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct il_scale_tbl_info {int is_ht40; int current_rate; scalar_t__ is_SGI; int max_search; scalar_t__ action; int lq_type; int is_dup; } ;
struct il_priv {int dummy; } ;
struct il_lq_sta {int is_green; int active_siso_rate; int is_dup; } ;
struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;
struct ieee80211_conf {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211_conf*) ;
 int FUNC_2 (struct il_priv*,struct il_scale_tbl_info*,int,int) ;
 int FUNC_3 (struct il_priv*,struct il_lq_sta*,struct il_scale_tbl_info*,int,int) ;
 int FUNC_4 (struct il_lq_sta*,struct il_scale_tbl_info*) ;
 scalar_t__ FUNC_5 (struct il_priv*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_3, struct il_lq_sta *VAR_4,
    struct ieee80211_conf *VAR_5, struct ieee80211_sta *VAR_6,
    struct il_scale_tbl_info *VAR_7, int VAR_8)
{
 u16 VAR_9;
 u8 VAR_10 = VAR_4->is_green;
 s32 VAR_11;

 if (!FUNC_1(VAR_5) || !VAR_6->ht_cap.ht_supported)
  return -1;

 FUNC_0("LQ: try to switch to SISO\n");

 VAR_7->is_dup = VAR_4->is_dup;
 VAR_7->lq_type = VAR_1;
 VAR_7->action = 0;
 VAR_7->max_search = VAR_0;
 VAR_9 = VAR_4->active_siso_rate;

 if (FUNC_5(VAR_3, &VAR_6->ht_cap))
  VAR_7->is_ht40 = 1;
 else
  VAR_7->is_ht40 = 0;

 if (VAR_10)
  VAR_7->is_SGI = 0;

 FUNC_4(VAR_4, VAR_7);
 VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_7, VAR_9, VAR_8);

 FUNC_0("LQ: get best rate %d mask %X\n", VAR_11, VAR_9);
 if (VAR_11 == VAR_2 || !((1 << VAR_11) & VAR_9)) {
  FUNC_0("can not switch with idx %d rate mask %x\n", VAR_11,
         VAR_9);
  return -1;
 }
 VAR_7->current_rate =
     FUNC_2(VAR_3, VAR_7, VAR_11, VAR_10);
 FUNC_0("LQ: Switch to new mcs %X idx is green %X\n", VAR_7->current_rate,
        VAR_10);
 return 0;
}
