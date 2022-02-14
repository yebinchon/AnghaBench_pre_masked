
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u16 ;
struct TYPE_2__ {int ssid_length; int ssid; } ;
struct registry_priv {int accept_addba_req; int monitor_enable; void* notch_filter; int if2name; int ifname; void* enable80211d; int fw_iol; void* max_roaming_times; void* hwpdn_mode; void* antdiv_type; void* antdiv_cfg; void* channel_plan; void* wifi_spec; void* ampdu_amsdu; void* rx_stbc; void* ampdu_enable; void* cbw40_enable; void* ht_enable; void* uapsd_enable; void* wmm_enable; void* acm_method; scalar_t__ mp_mode; void* ips_mode; void* power_mgnt; void* smart_ps; void* preamble; void* frag_thresh; void* rts_thresh; void* vcs_type; void* vrtl_carrier_sense; void* wireless_mode; void* channel; TYPE_1__ ssid; } ;
struct net_device {int dummy; } ;
struct adapter {struct registry_priv registrypriv; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_1 (int ,int,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_32, struct net_device *VAR_33)
{
 struct registry_priv *VAR_34 = &VAR_32->registrypriv;

 VAR_0 = VAR_12;

 FUNC_0(VAR_34->ssid.ssid, "ANY", 3);
 VAR_34->ssid.ssid_length = 3;

 VAR_34->channel = (u8)VAR_10;
 VAR_34->wireless_mode = (u8)VAR_30;
 VAR_34->vrtl_carrier_sense = (u8)VAR_28;
 VAR_34->vcs_type = (u8)VAR_27;
 VAR_34->rts_thresh = (u16)VAR_23;
 VAR_34->frag_thresh = (u16)VAR_13;
 VAR_34->preamble = (u8)VAR_22;
 VAR_34->smart_ps = (u8)VAR_25;
 VAR_34->power_mgnt = (u8)VAR_21;
 VAR_34->ips_mode = (u8)VAR_17;
 VAR_34->mp_mode = 0;
 VAR_34->acm_method = (u8)VAR_4;


 VAR_34->wmm_enable = (u8)VAR_31;
 VAR_34->uapsd_enable = (u8)VAR_26;

 VAR_34->ht_enable = (u8)VAR_15;
 VAR_34->cbw40_enable = (u8)VAR_9;
 VAR_34->ampdu_enable = (u8)VAR_6;
 VAR_34->rx_stbc = (u8)VAR_24;
 VAR_34->ampdu_amsdu = (u8)VAR_5;
 VAR_34->wifi_spec = (u8)VAR_29;
 VAR_34->channel_plan = (u8)VAR_11;
 VAR_34->accept_addba_req = 1;
 VAR_34->antdiv_cfg = (u8)VAR_7;
 VAR_34->antdiv_type = (u8)VAR_8;
 VAR_34->hwpdn_mode = (u8)VAR_16;

 VAR_34->max_roaming_times = (u8)VAR_18;

 VAR_34->fw_iol = VAR_14;

 VAR_34->enable80211d = (u8)VAR_3;
 FUNC_1(VAR_34->ifname, 16, "%s", VAR_2);
 FUNC_1(VAR_34->if2name, 16, "%s", VAR_1);
 VAR_34->notch_filter = (u8)VAR_20;
 VAR_34->monitor_enable = VAR_19;
}
