
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct il_scale_tbl_info {int is_SGI; int is_ht40; int is_dup; int ant_type; int lq_type; } ;
struct il_priv {scalar_t__ band; } ;
struct il_link_quality_cmd {TYPE_1__* rs_table; } ;
struct il_lq_sta {scalar_t__ missed_rate_counter; size_t active_tbl; int total_success; int total_failed; int last_rate_n_flags; scalar_t__ stay_in_tbl; struct il_scale_tbl_info* lq_info; struct il_link_quality_cmd lq; int drv; } ;
struct TYPE_6__ {int antenna; int ampdu_len; int ampdu_ack_len; TYPE_2__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ status; } ;
struct ieee80211_supported_band {size_t band; } ;
struct ieee80211_sta {scalar_t__* supp_rates; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef enum mac80211_rate_control_flags { ____Placeholder_mac80211_rate_control_flags } mac80211_rate_control_flags ;
struct TYPE_5__ {int flags; int idx; int count; } ;
struct TYPE_4__ {int rate_n_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct il_scale_tbl_info*,int,int,int) ;
 int FUNC_4 (int,scalar_t__,struct il_scale_tbl_info*,int*) ;
 int FUNC_5 (struct il_priv*,struct sk_buff*,struct ieee80211_sta*,struct il_lq_sta*) ;
 int FUNC_6 (struct il_lq_sta*,int) ;
 scalar_t__ FUNC_7 (struct il_scale_tbl_info*,struct il_scale_tbl_info*) ;
 int FUNC_8 (struct il_priv*,struct il_link_quality_cmd*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static void
FUNC_11(void *VAR_18, struct ieee80211_supported_band *VAR_19,
      struct ieee80211_sta *VAR_20, void *VAR_21,
      struct sk_buff *VAR_22)
{
 int VAR_23;
 int VAR_24;
 int VAR_25, VAR_26, VAR_27;
 struct il_lq_sta *VAR_28 = VAR_21;
 struct il_link_quality_cmd *VAR_29;
 struct ieee80211_hdr *VAR_30 = (struct ieee80211_hdr *)VAR_22->data;
 struct il_priv *VAR_31 = (struct il_priv *)VAR_18;
 struct ieee80211_tx_info *VAR_32 = FUNC_1(VAR_22);
 enum mac80211_rate_control_flags VAR_33;
 u32 VAR_34;
 struct il_scale_tbl_info VAR_35;
 struct il_scale_tbl_info *VAR_36, *VAR_37, *VAR_38;

 FUNC_0("get frame ack response, update rate scale win\n");


 if (!VAR_28) {
  FUNC_0("Station rate scaling not created yet.\n");
  return;
 } else if (!VAR_28->drv) {
  FUNC_0("Rate scaling not initialized yet.\n");
  return;
 }

 if (!FUNC_2(VAR_30->frame_control) ||
     (VAR_32->flags & VAR_2))
  return;


 if ((VAR_32->flags & VAR_1) &&
     !(VAR_32->flags & VAR_9))
  return;
 VAR_29 = &VAR_28->lq;
 VAR_34 = FUNC_9(VAR_29->rs_table[0].rate_n_flags);
 FUNC_4(VAR_34, VAR_31->band, &VAR_35, &VAR_25);
 if (VAR_31->band == VAR_13)
  VAR_25 -= VAR_10;
 VAR_33 = VAR_32->status.rates[0].flags;
 VAR_26 = VAR_32->status.rates[0].idx;

 if (VAR_33 & VAR_6) {
  VAR_26 &= VAR_15;
  if (VAR_26 >= (VAR_14 - VAR_10))
   VAR_26++;




  if (VAR_31->band == VAR_12)
   VAR_26 += VAR_10;
 }

 if (VAR_26 < 0 ||
     VAR_35.is_SGI != !!(VAR_33 & VAR_7) ||
     VAR_35.is_ht40 != !!(VAR_33 & VAR_3) ||
     VAR_35.is_dup != !!(VAR_33 & VAR_4) ||
     VAR_35.ant_type != VAR_32->status.antenna ||
     !!(VAR_34 & VAR_17) != !!(VAR_33 & VAR_6)
     || !!(VAR_34 & VAR_16) !=
     !!(VAR_33 & VAR_5) || VAR_25 != VAR_26) {
  FUNC_0("initial rate %d does not match %d (0x%x)\n", VAR_26,
         VAR_25, VAR_34);





  VAR_28->missed_rate_counter++;
  if (VAR_28->missed_rate_counter > VAR_11) {
   VAR_28->missed_rate_counter = 0;
   FUNC_8(VAR_31, &VAR_28->lq, VAR_0, 0);
  }

  return;
 } else

  VAR_28->missed_rate_counter = 0;


 if (FUNC_7
     (&VAR_35, &(VAR_28->lq_info[VAR_28->active_tbl]))) {
  VAR_36 = &(VAR_28->lq_info[VAR_28->active_tbl]);
  VAR_37 = &(VAR_28->lq_info[1 - VAR_28->active_tbl]);
 } else
     if (FUNC_7
  (&VAR_35, &VAR_28->lq_info[1 - VAR_28->active_tbl])) {
  VAR_36 = &(VAR_28->lq_info[1 - VAR_28->active_tbl]);
  VAR_37 = &(VAR_28->lq_info[VAR_28->active_tbl]);
 } else {
  FUNC_0("Neither active nor search matches tx rate\n");
  VAR_38 = &(VAR_28->lq_info[VAR_28->active_tbl]);
  FUNC_0("active- lq:%x, ant:%x, SGI:%d\n", VAR_38->lq_type,
         VAR_38->ant_type, VAR_38->is_SGI);
  VAR_38 = &(VAR_28->lq_info[1 - VAR_28->active_tbl]);
  FUNC_0("search- lq:%x, ant:%x, SGI:%d\n", VAR_38->lq_type,
         VAR_38->ant_type, VAR_38->is_SGI);
  FUNC_0("actual- lq:%x, ant:%x, SGI:%d\n", VAR_35.lq_type,
         VAR_35.ant_type, VAR_35.is_SGI);




  FUNC_6(VAR_28, 1);
  goto done;
 }
 if (VAR_32->flags & VAR_9) {
  VAR_34 = FUNC_9(VAR_29->rs_table[0].rate_n_flags);
  FUNC_4(VAR_34, VAR_31->band, &VAR_35,
      &VAR_25);
  FUNC_3(VAR_36, VAR_25,
       VAR_32->status.ampdu_len,
       VAR_32->status.ampdu_ack_len);


  if (VAR_28->stay_in_tbl) {
   VAR_28->total_success += VAR_32->status.ampdu_ack_len;
   VAR_28->total_failed +=
       (VAR_32->status.ampdu_len -
        VAR_32->status.ampdu_ack_len);
  }
 } else {



  VAR_24 = VAR_32->status.rates[0].count - 1;

  VAR_24 = FUNC_10(VAR_24, 15);


  VAR_23 = !!(VAR_32->flags & VAR_8);

  for (VAR_27 = 0; VAR_27 <= VAR_24; ++VAR_27) {
   VAR_34 = FUNC_9(VAR_29->rs_table[VAR_27].rate_n_flags);
   FUNC_4(VAR_34, VAR_31->band,
       &VAR_35, &VAR_25);




   if (FUNC_7(&VAR_35, VAR_36))
    VAR_38 = VAR_36;
   else if (FUNC_7
     (&VAR_35, VAR_37))
    VAR_38 = VAR_37;
   else
    continue;
   FUNC_3(VAR_38, VAR_25, 1,
        VAR_27 <
        VAR_24 ? 0 : VAR_23);
  }


  if (VAR_28->stay_in_tbl) {
   VAR_28->total_success += VAR_23;
   VAR_28->total_failed += VAR_24 + (1 - VAR_23);
  }
 }

 VAR_28->last_rate_n_flags = VAR_34;
done:

 if (VAR_20->supp_rates[VAR_19->band])
  FUNC_5(VAR_31, VAR_22, VAR_20, VAR_28);
}
