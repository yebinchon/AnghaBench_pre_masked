
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bss_cnt; scalar_t__ channel_idx; int state; } ;
struct mlme_ext_info {scalar_t__ dialogToken; int preamble_mode; int slotTime; int chg_txt; scalar_t__ authModeToggle; int enc_algo; scalar_t__ iv; scalar_t__ key_index; int auth_algo; scalar_t__ auth_seq; scalar_t__ link_count; scalar_t__ reassoc_count; scalar_t__ reauth_count; int state; } ;
struct mlme_ext_priv {int scan_abort; int action_public_rxseq; int action_public_dialog_token; TYPE_2__ sitesurvey_res; int tx_rate; int cur_wireless_mode; scalar_t__ retry; int cur_ch_offset; int cur_bwmode; int cur_channel; scalar_t__ mgnt_80211w_IPN_rx; scalar_t__ mgnt_80211w_IPN; scalar_t__ sa_query_seq; scalar_t__ mgnt_seq; int event_seq; struct mlme_ext_info mlmext_info; } ;
struct TYPE_3__ {int wireless_mode; int channel; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_9)
{
 struct mlme_ext_priv *VAR_10 = &VAR_9->mlmeextpriv;
 struct mlme_ext_info *VAR_11 = &VAR_10->mlmext_info;

 FUNC_0(&VAR_10->event_seq, 0);
 VAR_10->mgnt_seq = 0;
 VAR_10->sa_query_seq = 0;
 VAR_10->mgnt_80211w_IPN = 0;
 VAR_10->mgnt_80211w_IPN_rx = 0;
 VAR_10->cur_channel = VAR_9->registrypriv.channel;
 VAR_10->cur_bwmode = VAR_0;
 VAR_10->cur_ch_offset = VAR_1;

 VAR_10->retry = 0;

 VAR_10->cur_wireless_mode = VAR_9->registrypriv.wireless_mode;

 FUNC_1(VAR_9);

 VAR_10->tx_rate = VAR_2;
 VAR_10->sitesurvey_res.state = VAR_4;
 VAR_10->sitesurvey_res.channel_idx = 0;
 VAR_10->sitesurvey_res.bss_cnt = 0;
 VAR_10->scan_abort = 0;

 VAR_11->state = VAR_6;
 VAR_11->reauth_count = 0;
 VAR_11->reassoc_count = 0;
 VAR_11->link_count = 0;
 VAR_11->auth_seq = 0;
 VAR_11->auth_algo = VAR_8;
 VAR_11->key_index = 0;
 VAR_11->iv = 0;

 VAR_11->enc_algo = VAR_7;
 VAR_11->authModeToggle = 0;

 FUNC_2(VAR_11->chg_txt, 0, 128);

 VAR_11->slotTime = VAR_5;
 VAR_11->preamble_mode = VAR_3;

 VAR_11->dialogToken = 0;

 VAR_10->action_public_rxseq = 0xffff;
 VAR_10->action_public_dialog_token = 0xff;
}
