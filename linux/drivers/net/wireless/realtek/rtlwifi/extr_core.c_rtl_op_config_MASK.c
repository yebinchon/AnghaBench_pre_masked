
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_ps_ctl {scalar_t__ rfpwr_state; } ;
struct TYPE_11__ {int conf_mutex; } ;
struct TYPE_10__ {int offchan_delay; } ;
struct TYPE_15__ {scalar_t__ supp_phymode_switch; } ;
struct TYPE_14__ {int proxim_on; } ;
struct TYPE_13__ {int sw_ps_enabled; int multi_buffered; int fwctrl_lps; scalar_t__ swctrl_lps; } ;
struct TYPE_12__ {int ps_work; int rtl_wq; int ps_rfon_wq; } ;
struct rtl_phy {int current_channel; void* current_chan_bw; } ;
struct rtl_priv {TYPE_2__ locks; TYPE_8__* cfg; TYPE_1__ mac80211; TYPE_6__ dm; TYPE_5__ proximity; TYPE_4__ psc; TYPE_3__ works; struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ link_state; int bw_80; int bw_40; void* cur_40_prime_sc; void* cur_80_prime_sc; scalar_t__ act_scanning; int n_channels; int retry_short; int retry_long; scalar_t__ skip_scan; } ;
struct TYPE_18__ {int width; int center_freq1; struct ieee80211_channel* chan; } ;
struct ieee80211_conf {int flags; TYPE_9__ chandef; int long_frame_max_tx_count; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;
struct ieee80211_channel {int center_freq; int hw_value; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;
struct TYPE_17__ {TYPE_7__* ops; } ;
struct TYPE_16__ {int (* set_bw_mode ) (struct ieee80211_hw*,int) ;int (* set_channel_access ) (struct ieee80211_hw*) ;int (* switch_channel ) (struct ieee80211_hw*) ;int (* chk_switch_dmdp ) (struct ieee80211_hw*) ;int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int) ;




 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_11 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_12 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_13 (struct rtl_priv*) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 int FUNC_15 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (struct ieee80211_hw*) ;
 int FUNC_19 (struct ieee80211_hw*,int) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct ieee80211_hw *VAR_19, u32 VAR_20)
{
 struct rtl_priv *VAR_21 = FUNC_12(VAR_19);
 struct rtl_phy *VAR_22 = &(VAR_21->phy);
 struct rtl_mac *VAR_23 = FUNC_11(FUNC_12(VAR_19));
 struct rtl_ps_ctl *VAR_24 = FUNC_13(FUNC_12(VAR_19));
 struct ieee80211_conf *VAR_25 = &VAR_19->conf;

 if (VAR_23->skip_scan)
  return 1;

 FUNC_5(&VAR_21->locks.conf_mutex);
 if (VAR_20 & VAR_9) {
  FUNC_1(VAR_21, VAR_0, VAR_1,
    "IEEE80211_CONF_CHANGE_LISTEN_INTERVAL\n");
 }


 if (VAR_20 & VAR_8) {
  if (VAR_19->conf.flags & VAR_12)
   FUNC_9(VAR_19);
  else
   FUNC_10(VAR_19);
 } else {




  if (FUNC_20(VAR_24->rfpwr_state == VAR_2))
   FUNC_10(VAR_19);
 }


 if ((VAR_20 & VAR_10) &&
     VAR_21->psc.swctrl_lps && !VAR_21->psc.fwctrl_lps) {
  FUNC_2(&VAR_21->works.ps_work);
  FUNC_2(&VAR_21->works.ps_rfon_wq);
  if (VAR_25->flags & VAR_13) {
   VAR_21->psc.sw_ps_enabled = 1;







   if (!VAR_21->psc.multi_buffered)
    FUNC_8(VAR_21->works.rtl_wq,
         &VAR_21->works.ps_work,
         FUNC_0(5));
  } else {
   FUNC_14(VAR_19);
   VAR_21->psc.sw_ps_enabled = 0;
  }
 }

 if (VAR_20 & VAR_11) {
  FUNC_1(VAR_21, VAR_0, VAR_1,
    "IEEE80211_CONF_CHANGE_RETRY_LIMITS %x\n",
    VAR_19->conf.long_frame_max_tx_count);



  if (VAR_20 != ~0) {
   VAR_23->retry_long = VAR_19->conf.long_frame_max_tx_count;
   VAR_23->retry_short = VAR_19->conf.long_frame_max_tx_count;
   VAR_21->cfg->ops->set_hw_reg(VAR_19, VAR_6,
    (u8 *)(&VAR_19->conf.long_frame_max_tx_count));
  }
 }

 if (VAR_20 & VAR_7 &&
     !VAR_21->proximity.proxim_on) {
  struct ieee80211_channel *VAR_26 = VAR_19->conf.chandef.chan;
  enum nl80211_chan_width VAR_27 = VAR_19->conf.chandef.width;
  enum nl80211_channel_type VAR_28 = 128;
  u8 VAR_29 = (u8) VAR_26->hw_value;


  if (VAR_27 < VAR_15)
   VAR_28 =
    FUNC_3(&VAR_19->conf.chandef);
  if (VAR_23->act_scanning)
   VAR_23->n_channels++;

  if (VAR_21->dm.supp_phymode_switch &&
   VAR_23->link_state < VAR_14 &&
   !VAR_23->act_scanning) {
   if (VAR_21->cfg->ops->chk_switch_dmdp)
    VAR_21->cfg->ops->chk_switch_dmdp(VAR_19);
  }
  if (VAR_27 >= VAR_15) {
   if (VAR_27 == VAR_15) {
    u32 VAR_30 = VAR_19->conf.chandef.center_freq1;
    u32 VAR_31 =
    (u32)VAR_19->conf.chandef.chan->center_freq;

    VAR_22->current_chan_bw =
     VAR_5;
    VAR_23->bw_80 = 1;
    VAR_23->bw_40 = 1;
    if (VAR_30 > VAR_31) {
     VAR_23->cur_80_prime_sc =
     VAR_17;
     if (VAR_30 - VAR_31 == 10) {
      VAR_23->cur_40_prime_sc =
      VAR_18;

      VAR_29 += 2;
     } else if (VAR_30 - VAR_31 == 30) {
      VAR_23->cur_40_prime_sc =
      VAR_17;

      VAR_29 += 6;
     }
    } else {
     VAR_23->cur_80_prime_sc =
     VAR_18;
     if (VAR_31 - VAR_30 == 10) {
      VAR_23->cur_40_prime_sc =
      VAR_17;

      VAR_29 -= 2;
     } else if (VAR_31 - VAR_30 == 30) {
      VAR_23->cur_40_prime_sc =
      VAR_18;

      VAR_29 -= 6;
     }
    }
   }
  } else {
   switch (VAR_28) {
   case 131:
   case 128:

     VAR_23->cur_40_prime_sc =
      VAR_16;
     VAR_22->current_chan_bw =
      VAR_3;
     VAR_23->bw_40 = 0;
     VAR_23->bw_80 = 0;
     break;
   case 130:

     VAR_23->cur_40_prime_sc =
      VAR_18;
     VAR_22->current_chan_bw =
      VAR_4;
     VAR_23->bw_40 = 1;
     VAR_23->bw_80 = 0;


     VAR_29 -= 2;

     break;
   case 129:

     VAR_23->cur_40_prime_sc =
      VAR_17;
     VAR_22->current_chan_bw =
      VAR_4;
     VAR_23->bw_40 = 1;
     VAR_23->bw_80 = 0;


     VAR_29 += 2;

     break;
   default:
     VAR_23->bw_40 = 0;
     VAR_23->bw_80 = 0;
     FUNC_7("switch case %#x not processed\n",
            VAR_28);
     break;
   }
  }

  if (VAR_29 <= 0)
   VAR_29 = 1;
  if (VAR_21->mac80211.offchan_delay) {
   VAR_21->mac80211.offchan_delay = 0;
   FUNC_4(50);
  }

  VAR_22->current_channel = VAR_29;

  VAR_21->cfg->ops->switch_channel(VAR_19);
  VAR_21->cfg->ops->set_channel_access(VAR_19);
  VAR_21->cfg->ops->set_bw_mode(VAR_19, VAR_28);
 }

 FUNC_6(&VAR_21->locks.conf_mutex);

 return 0;
}
